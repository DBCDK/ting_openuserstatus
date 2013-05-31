<?php

/**
 * Class ting_openuserstatus
 */
class OpenUserstatusRequest extends TingClientRequest {

  public $action;
  public $userId;
  public $userPincode;
  public $agencyId;
  public $outputType;
  protected $updateOrder;
  protected $cancelOrder;
  protected $renewLoan;
  
  public function getUpdateOrder() {
    return $this->updateOrder;
  }
  
  public function setUpdateOrder($value) {
    $this->updateOrder = $value;
  }
  
  public function setCancelOrder($value){
    $this->cancelOrder = $value;
  }
  
  public function getCancelOrder() {
    return $this->cancelOrder;
  }

  public function getRenewLoan(){
    return $this->renewLoan;
  }
  
  public function setRenewLoan($value) {
    $this->renewLoan = $value;
  }
  
  /**
   * @param null $value
   */
  public function setAction($value = NULL) {
    $this->action = $value;
  }

  public function getAction() {
    return $this->action;
  }

  /**
   * @param $agencyId
   */
  public function setAgencyId($agencyId) {
    $this->agencyId = $agencyId;
  }

  public function getAgencyId() {
    return $this->agencyId;
  }

  /**
   * @param $outputType
   */
  public function setOutputType($outputType) {
    $this->outputType = $outputType;
  }

  public function getOutputType() {
    return $this->outputType;
  }

  /**
   * @param $userId
   */
  public function setUserId($userId) {
    $this->userId = $userId;
  }

  public function getUserId() {
    return $this->userId;
  }

  /**
   * @param $userPincode
   */
  public function setUserPincode($userPincode) {
    $this->userPincode = $userPincode;
  }

  public function getUserPincode() {
    return $this->userPincode;
  }

  /**
   * @return $this
   */
  public function getRequest() {
   // $this->setParameter('action', 'getUserStatusRequest');
    $params = array('action', 'userId', 'userPincode', 'agencyId', 'outputType', 'updateOrder', 'renewLoan', 'cancelOrder');
    foreach ($params as $parameter) {
      $getter = 'get' . ucfirst($parameter);
      if ($value = $this->$getter()) {
        $this->setParameter($parameter, $value);
      }
    }
    return $this;
  }

  // empty;
  /**
   * @param stdClass $result
   * @return stdClass
   */
  public function processResponse(stdClass $result) {
    return $result;
  }
}