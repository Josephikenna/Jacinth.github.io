<!DOCTYPE html>
<!-- saved from url=(0093)https://work.smarchal.com/twbscolor/navbar.php?version=4.0.0&params=f4f4f41c8b1018830ce9f6160 -->
<html><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
		
		<title>TWBSColor - Navbar</title>
		<meta name="author" content="zessx">

		<link href="./bootstrap.min(1).css" rel="stylesheet">
		<style>
			.navbar {
  background-color: #f4f4f4;
}
.navbar .navbar-brand {
  color: #18830c;
}
.navbar .navbar-brand:hover,
.navbar .navbar-brand:focus {
  color: #e9f616;
}
.navbar .navbar-text {
  color: #18830c;
}
.navbar .navbar-text a {
  color: #e9f616;
}
.navbar .navbar-text a:hover,
.navbar .navbar-text a:focus {
  color: #e9f616; 
}
.navbar .navbar-nav .nav-link {
  color: #18830c;
  border-radius: .25rem;
  margin: 0 0.25em;
}
.navbar .navbar-nav .nav-link:not(.disabled):hover,
.navbar .navbar-nav .nav-link:not(.disabled):focus {
  color: #e9f616;
}
.navbar .navbar-nav .nav-item.active .nav-link,
.navbar .navbar-nav .nav-item.active .nav-link:hover,
.navbar .navbar-nav .nav-item.active .nav-link:focus,
.navbar .navbar-nav .nav-item.show .nav-link,
.navbar .navbar-nav .nav-item.show .nav-link:hover,
.navbar .navbar-nav .nav-item.show .nav-link:focus {
  color: #e9f616;
  background-color: #1c8b10;
}
.navbar .navbar-toggler {
  border-color: #1c8b10;
}
.navbar .navbar-toggler:hover,
.navbar .navbar-toggler:focus {
  background-color: #1c8b10;
}
.navbar .navbar-toggler .navbar-toggler-icon {
  color: #18830c;
}
.navbar .navbar-collapse,
.navbar .navbar-form {
  border-color: #18830c;
}
.navbar .navbar-link {
  color: #18830c;
}
.navbar .navbar-link:hover {
  color: #e9f616;
}

@media (max-width: 575px) {
  .navbar-expand-sm .navbar-nav .show .dropdown-menu .dropdown-item {
    color: #18830c;
  }
  .navbar-expand-sm .navbar-nav .show .dropdown-menu .dropdown-item:hover,
  .navbar-expand-sm .navbar-nav .show .dropdown-menu .dropdown-item:focus {
    color: #e9f616;
  }
  .navbar-expand-sm .navbar-nav .show .dropdown-menu .dropdown-item.active {
    color: #e9f616;
    background-color: #1c8b10;
  }
}

@media (max-width: 767px) {
  .navbar-expand-md .navbar-nav .show .dropdown-menu .dropdown-item {
    color: #18830c;
  }
  .navbar-expand-md .navbar-nav .show .dropdown-menu .dropdown-item:hover,
  .navbar-expand-md .navbar-nav .show .dropdown-menu .dropdown-item:focus {
    color: #e9f616;
  }
  .navbar-expand-md .navbar-nav .show .dropdown-menu .dropdown-item.active {
    color: #e9f616;
    background-color: #1c8b10;
  }
}

@media (max-width: 991px) {
  .navbar-expand-lg .navbar-nav .show .dropdown-menu .dropdown-item {
    color: #18830c;
  }
  .navbar-expand-lg .navbar-nav .show .dropdown-menu .dropdown-item:hover,
  .navbar-expand-lg .navbar-nav .show .dropdown-menu .dropdown-item:focus {
    color: #e9f616;
  }
  .navbar-expand-lg .navbar-nav .show .dropdown-menu .dropdown-item.active {
    color: #e9f616;
    background-color: #1c8b10;
  }
}

@media (max-width: 1199px) {
  .navbar-expand-xl .navbar-nav .show .dropdown-menu .dropdown-item {
    color: #18830c;
  }
  .navbar-expand-xl .navbar-nav .show .dropdown-menu .dropdown-item:hover,
  .navbar-expand-xl .navbar-nav .show .dropdown-menu .dropdown-item:focus {
    color: #e9f616;
  }
  .navbar-expand-xl .navbar-nav .show .dropdown-menu .dropdown-item.active {
    color: #e9f616;
    background-color: #1c8b10;
  }
}

.navbar-expand .navbar-nav .show .dropdown-menu .dropdown-item {
  color: #18830c;
}
.navbar-expand .navbar-nav .show .dropdown-menu .dropdown-item:hover,
.navbar-expand .navbar-nav .show .dropdown-menu .dropdown-item:focus {
  color: #e9f616;
}
.navbar-expand .navbar-nav .show .dropdown-menu .dropdown-item.active {
  color: #e9f616;
  background-color: #1c8b10;
}
		</style>
		<script src="./jquery-1.10.2.min.js.download"></script>
                <script src="./popper.min.js.download"></script>
		<script src="./bootstrap.min.js(1).download"></script>
	</head>
	<body style="">
		<nav class="navbar navbar-expand-md navbar-light bg-faded">
  <a class="navbar-brand" href="javascript:void(0)">Brand</a>
  <button class="navbar-toggler navbar-toggler-right" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
    <span class="navbar-toggler-icon"></span>
  </button>

  <div class="collapse navbar-collapse" id="navbarSupportedContent">
    <ul class="navbar-nav">
      <li class="nav-item active">
        <a class="nav-link" href="javascript:void(0)">Link <span class="sr-only">(current)</span></a>
      </li>
      <li class="nav-item">
        <a class="nav-link" href="javascript:void(0)">Link</a>
      </li>
      <li class="nav-item dropdown">
        <a class="nav-link dropdown-toggle" href="javascript:void(0)" id="navbarDropdownMenuLink" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">Dropdown</a>
        <div class="dropdown-menu" aria-labelledby="navbarDropdownMenuLink">
          <a class="dropdown-item" href="javascript:void(0)">Action</a>
          <a class="dropdown-item" href="javascript:void(0)">Another action</a>
          <a class="dropdown-item" href="javascript:void(0)">Something else here</a>
          <div class="dropdown-divider"></div>
          <a class="dropdown-item" href="javascript:void(0)">Separated link</a>
        </div>
      </li>
    </ul>
    <form class="form-inline mr-auto">
      <input class="form-control mr-sm-2" type="search" placeholder="Search">
      <button class="btn btn-light my-2 my-sm-0" type="submit">Submit</button>
    </form>
    <ul class="navbar-nav">
      <li class="nav-item">
        <a class="nav-link disabled" href="javascript:void(0)">Disabled</a>
      </li>
      <li class="nav-item dropdown">
        <a class="nav-link dropdown-toggle" href="javascript:void(0)" id="navbarDropdownMenuLink" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">Dropdown</a>
        <div class="dropdown-menu dropdown-menu-right" aria-labelledby="navbarDropdownMenuLink">
          <a class="dropdown-item" href="javascript:void(0)">Action</a>
          <a class="dropdown-item" href="javascript:void(0)">Another action</a>
          <a class="dropdown-item" href="javascript:void(0)">Something else here</a>
          <div class="dropdown-divider"></div>
          <a class="dropdown-item" href="javascript:void(0)">Separated link</a>
        </div>
      </li>
    </ul>
  </div>
</nav>
	

</body></html>