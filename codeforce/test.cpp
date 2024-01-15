<form>
  <div className="form-row">
    <div className="col-md-12 mb-3">
      <input type="text" className="form-control" placeholder="Your Name" required>
    </div>
  </div>
  <div className="form-row">
    <div className="col-md-6 mb-3">
    <input type="text" className="form-control"  placeholder="Phone Number">
    </div>
    <div className="col-md-6 mb-3">
    <input type="email" className="form-control" placeholder="Email Address">
    </div>
  </div>
  <div className="col-md-12 mb-3">
  <textarea name="content" rows="4" cols="40" />
  </div>
  <button className="btn btn-primary" type="submit">Submit form</button>
</form>