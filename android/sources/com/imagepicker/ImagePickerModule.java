package com.imagepicker;

import android.app.Activity;
import android.content.ActivityNotFoundException;
import android.content.ClipData;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Build;
import androidx.activity.result.ActivityResultCallback;
import androidx.activity.result.ActivityResultLauncher;
import androidx.annotation.NonNull;
import androidx.core.content.FileProvider;
import androidx.fragment.app.FragmentActivity;
import androidx.fragment.app.w0;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.bridge.ActivityEventListener;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.LifecycleEventListener;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.module.annotations.ReactModule;
import java.io.File;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.UUID;
import org.webrtc.MediaStreamTrack;

@ReactModule(name = ImagePickerModule.NAME)
/* loaded from: classes3.dex */
public class ImagePickerModule extends ReactContextBaseJavaModule implements ActivityEventListener, LifecycleEventListener {
    static final String NAME = "ImagePickerManager";
    public static final int REQUEST_LAUNCH_IMAGE_CAPTURE = 13001;
    public static final int REQUEST_LAUNCH_LIBRARY = 13003;
    public static final int REQUEST_LAUNCH_VIDEO_CAPTURE = 13002;
    Callback callback;
    Uri cameraCaptureURI;
    private ActivityResultLauncher cameraLauncher;
    private FragmentActivity currentFragmentActivity;
    private Uri fileUri;
    UUID identifier;
    private ActivityResultLauncher libraryLauncher;
    b options;
    final ReactApplicationContext reactContext;

    public ImagePickerModule(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
        this.reactContext = reactApplicationContext;
        reactApplicationContext.addActivityEventListener(this);
        reactApplicationContext.addLifecycleEventListener(this);
    }

    private void initializeLaunchers(final FragmentActivity fragmentActivity) {
        if (fragmentActivity == null) {
            return;
        }
        if (this.currentFragmentActivity != fragmentActivity || this.cameraLauncher == null) {
            try {
                this.currentFragmentActivity = fragmentActivity;
                final int i5 = 0;
                this.cameraLauncher = fragmentActivity.registerForActivityResult(new w0(3), new ActivityResultCallback(this) { // from class: com.imagepicker.a

                    /* renamed from: e, reason: collision with root package name */
                    public final /* synthetic */ ImagePickerModule f6484e;

                    {
                        this.f6484e = this;
                    }

                    @Override // androidx.activity.result.ActivityResultCallback
                    public final void f(Object obj) {
                        switch (i5) {
                            case 0:
                                this.f6484e.lambda$initializeLaunchers$0(fragmentActivity, (f.a) obj);
                                break;
                            default:
                                this.f6484e.lambda$initializeLaunchers$1(fragmentActivity, (f.a) obj);
                                break;
                        }
                    }
                });
                final int i6 = 1;
                this.libraryLauncher = fragmentActivity.registerForActivityResult(new w0(3), new ActivityResultCallback(this) { // from class: com.imagepicker.a

                    /* renamed from: e, reason: collision with root package name */
                    public final /* synthetic */ ImagePickerModule f6484e;

                    {
                        this.f6484e = this;
                    }

                    @Override // androidx.activity.result.ActivityResultCallback
                    public final void f(Object obj) {
                        switch (i6) {
                            case 0:
                                this.f6484e.lambda$initializeLaunchers$0(fragmentActivity, (f.a) obj);
                                break;
                            default:
                                this.f6484e.lambda$initializeLaunchers$1(fragmentActivity, (f.a) obj);
                                break;
                        }
                    }
                });
            } catch (IllegalStateException unused) {
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void lambda$initializeLaunchers$0(FragmentActivity fragmentActivity, f.a aVar) {
        b bVar = this.options;
        onActivityResult(fragmentActivity, (bVar == null || !bVar.f6494l.equals(MediaStreamTrack.VIDEO_TRACK_KIND)) ? REQUEST_LAUNCH_IMAGE_CAPTURE : REQUEST_LAUNCH_VIDEO_CAPTURE, aVar.f8286d, aVar.f8287e);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void lambda$initializeLaunchers$1(FragmentActivity fragmentActivity, f.a aVar) {
        onActivityResult(fragmentActivity, REQUEST_LAUNCH_LIBRARY, aVar.f8286d, aVar.f8287e);
    }

    @Override // com.facebook.react.bridge.NativeModule
    @NonNull
    public String getName() {
        return NAME;
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        super.invalidate();
        ActivityResultLauncher activityResultLauncher = this.cameraLauncher;
        if (activityResultLauncher != null) {
            activityResultLauncher.b();
            this.cameraLauncher = null;
        }
        ActivityResultLauncher activityResultLauncher2 = this.libraryLauncher;
        if (activityResultLauncher2 != null) {
            activityResultLauncher2.b();
            this.libraryLauncher = null;
        }
        if (this.currentFragmentActivity != null) {
            this.currentFragmentActivity = null;
        }
    }

    @ReactMethod
    public void launchCamera(ReadableMap readableMap, Callback callback) {
        Intent intent;
        File j;
        int i5;
        ReactApplicationContext reactApplicationContext = this.reactContext;
        if (!reactApplicationContext.getPackageManager().hasSystemFeature("android.hardware.camera") && !reactApplicationContext.getPackageManager().hasSystemFeature("android.hardware.camera.any")) {
            callback.invoke(ki.b.v("camera_unavailable", null));
            return;
        }
        Activity currentActivity = getCurrentActivity();
        if (currentActivity == null) {
            callback.invoke(ki.b.v("others", "Activity error"));
            return;
        }
        ReactApplicationContext reactApplicationContext2 = this.reactContext;
        try {
            String[] strArr = reactApplicationContext2.getPackageManager().getPackageInfo(reactApplicationContext2.getPackageName(), RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT).requestedPermissions;
            if (strArr != null && Arrays.asList(strArr).contains("android.permission.CAMERA")) {
                if (y0.b.a(currentActivity, "android.permission.CAMERA") != 0) {
                    callback.invoke(ki.b.v("others", "This library does not require Manifest.permission.CAMERA, if you add this permission in manifest then you have to obtain the same."));
                    return;
                }
            }
        } catch (PackageManager.NameNotFoundException e9) {
            e9.printStackTrace();
        }
        this.callback = callback;
        b bVar = new b(readableMap);
        this.options = bVar;
        if (bVar.f6492h.booleanValue() && Build.VERSION.SDK_INT <= 28 && y0.b.a(currentActivity, "android.permission.WRITE_EXTERNAL_STORAGE") != 0) {
            callback.invoke(ki.b.v("permission", null));
            this.callback = null;
            return;
        }
        this.identifier = UUID.randomUUID();
        if (this.options.f6494l.equals(MediaStreamTrack.VIDEO_TRACK_KIND)) {
            intent = new Intent("android.media.action.VIDEO_CAPTURE");
            intent.putExtra("android.intent.extra.videoQuality", this.options.f6488d);
            int i6 = this.options.f6493i;
            if (i6 > 0) {
                intent.putExtra("android.intent.extra.durationLimit", i6);
            }
            j = ki.b.j(this.reactContext, this.identifier, "mp4");
            ReactApplicationContext reactApplicationContext3 = this.reactContext;
            this.cameraCaptureURI = FileProvider.getUriForFile(reactApplicationContext3, reactApplicationContext3.getApplicationContext().getPackageName() + ".imagepickerprovider", j);
            i5 = REQUEST_LAUNCH_VIDEO_CAPTURE;
        } else {
            intent = new Intent("android.media.action.IMAGE_CAPTURE");
            j = ki.b.j(this.reactContext, this.identifier, "jpg");
            ReactApplicationContext reactApplicationContext4 = this.reactContext;
            this.cameraCaptureURI = FileProvider.getUriForFile(reactApplicationContext4, reactApplicationContext4.getApplicationContext().getPackageName() + ".imagepickerprovider", j);
            i5 = REQUEST_LAUNCH_IMAGE_CAPTURE;
        }
        if (this.options.j.booleanValue()) {
            int i10 = Build.VERSION.SDK_INT;
            intent.putExtra("android.intent.extras.CAMERA_FACING", 0);
            if (i10 >= 26) {
                intent.putExtra("android.intent.extra.USE_FRONT_CAMERA", true);
            }
        }
        this.fileUri = Uri.fromFile(j);
        intent.putExtra("output", this.cameraCaptureURI);
        intent.addFlags(3);
        try {
            ActivityResultLauncher activityResultLauncher = this.cameraLauncher;
            if (activityResultLauncher != null) {
                activityResultLauncher.a(intent, null);
            } else {
                currentActivity.startActivityForResult(intent, i5);
            }
        } catch (ActivityNotFoundException e10) {
            callback.invoke(ki.b.v("others", e10.getMessage()));
            this.callback = null;
        } catch (Exception e11) {
            callback.invoke(ki.b.v("others", "Failed to launch camera: " + e11.getMessage()));
            this.callback = null;
        }
    }

    @ReactMethod
    public void launchImageLibrary(ReadableMap readableMap, Callback callback) {
        Intent intent;
        Activity currentActivity = getCurrentActivity();
        if (currentActivity == null) {
            callback.invoke(ki.b.v("others", "Activity error"));
            return;
        }
        this.callback = callback;
        b bVar = new b(readableMap);
        this.options = bVar;
        boolean z5 = bVar.a == 1;
        boolean equals = bVar.f6494l.equals("photo");
        boolean equals2 = this.options.f6494l.equals(MediaStreamTrack.VIDEO_TRACK_KIND);
        boolean equals3 = this.options.f6494l.equals("mixed");
        if (!z5 || (!(equals || equals2) || this.options.k.booleanValue())) {
            intent = new Intent("android.intent.action.GET_CONTENT");
            intent.addCategory("android.intent.category.OPENABLE");
        } else {
            intent = new Intent("android.intent.action.PICK");
        }
        if (!z5) {
            intent.putExtra("android.intent.extra.ALLOW_MULTIPLE", true);
        }
        if (equals) {
            intent.setType("image/*");
        } else if (equals2) {
            intent.setType("video/*");
        } else if (equals3) {
            intent.setType("*/*");
            intent.putExtra("android.intent.extra.MIME_TYPES", new String[]{"image/*", "video/*"});
        } else {
            intent.setType("*/*");
        }
        Intent createChooser = Intent.createChooser(intent, null);
        try {
            ActivityResultLauncher activityResultLauncher = this.libraryLauncher;
            if (activityResultLauncher != null) {
                activityResultLauncher.a(createChooser, null);
            } else {
                currentActivity.startActivityForResult(createChooser, REQUEST_LAUNCH_LIBRARY);
            }
        } catch (ActivityNotFoundException e9) {
            callback.invoke(ki.b.v("others", e9.getMessage()));
            this.callback = null;
        } catch (Exception e10) {
            callback.invoke(ki.b.v("others", "Failed to launch library: " + e10.getMessage()));
            this.callback = null;
        }
    }

    @Override // com.facebook.react.bridge.ActivityEventListener
    public void onActivityResult(Activity activity, int i5, int i6, Intent intent) {
        List<Uri> list;
        switch (i5) {
            case REQUEST_LAUNCH_IMAGE_CAPTURE /* 13001 */:
            case REQUEST_LAUNCH_VIDEO_CAPTURE /* 13002 */:
            case REQUEST_LAUNCH_LIBRARY /* 13003 */:
                if (this.callback != null) {
                    if (i6 != -1) {
                        if (i5 == 13001) {
                            new File(this.fileUri.getPath()).delete();
                        }
                        Callback callback = this.callback;
                        WritableMap createMap = Arguments.createMap();
                        createMap.putBoolean("didCancel", true);
                        callback.invoke(createMap);
                        this.callback = null;
                        break;
                    } else {
                        switch (i5) {
                            case REQUEST_LAUNCH_IMAGE_CAPTURE /* 13001 */:
                                if (this.options.f6492h.booleanValue()) {
                                    ki.b.P(this.cameraCaptureURI, this.identifier, this.reactContext, "photo");
                                }
                                onAssetsObtained(Collections.singletonList(this.fileUri));
                                break;
                            case REQUEST_LAUNCH_VIDEO_CAPTURE /* 13002 */:
                                if (this.options.f6492h.booleanValue()) {
                                    ki.b.P(this.cameraCaptureURI, this.identifier, this.reactContext, MediaStreamTrack.VIDEO_TRACK_KIND);
                                }
                                onAssetsObtained(Collections.singletonList(this.fileUri));
                                break;
                            case REQUEST_LAUNCH_LIBRARY /* 13003 */:
                                if (intent.getClipData() == null) {
                                    list = Collections.singletonList(intent.getData());
                                } else {
                                    ClipData clipData = intent.getClipData();
                                    ArrayList arrayList = new ArrayList(clipData.getItemCount());
                                    for (int i10 = 0; i10 < clipData.getItemCount(); i10++) {
                                        arrayList.add(clipData.getItemAt(i10).getUri());
                                    }
                                    list = arrayList;
                                }
                                onAssetsObtained(list);
                                break;
                        }
                    }
                }
                break;
        }
    }

    public void onAssetsObtained(List<Uri> list) {
        try {
            this.callback.invoke(ki.b.E(list, this.identifier, this.options, this.reactContext));
        } catch (RuntimeException e9) {
            this.callback.invoke(ki.b.v("others", e9.getMessage()));
        } finally {
            this.callback = null;
        }
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public void onHostDestroy() {
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public void onHostPause() {
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public void onHostResume() {
        Activity currentActivity = getCurrentActivity();
        if (currentActivity instanceof FragmentActivity) {
            initializeLaunchers((FragmentActivity) currentActivity);
        }
    }

    @Override // com.facebook.react.bridge.ActivityEventListener
    public void onNewIntent(Intent intent) {
    }
}
