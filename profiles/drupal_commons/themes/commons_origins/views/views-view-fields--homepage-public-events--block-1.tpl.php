  <div class="e-inner-wrapper" style="cursor: pointer;">
    <?php echo $fields['field_content_images_fid']->content?>
    <div class="overlay-info">
      <div class="pad-layer">
      <div class="event_title"><?php echo $fields['title']->content?></div>
      <div class="event_gratuity"><?php echo $fields['field_event_gratuity']->content?></div>
      <div class="event_address"><?php echo $fields['field_location_value']->content?></div>
      <div class="event_info"><?php echo $fields['field_event_email']->content?>
        <?php if(!empty($fields['field_event_contact_phone']->content)):?> 
          <?php echo t('T:')?> <?php echo $fields['field_event_contact_phone']->content?></div>
        <?php endif;?>
      </div>
    </div>
  </div>
