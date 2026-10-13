package fr.greweb.reactnativeviewshot;

import a3.e;
import android.content.Context;
import android.net.Uri;
import android.os.AsyncTask;
import android.util.Log;
import androidx.annotation.NonNull;
import bo.a;
import bo.f;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.UIManagerModule;
import java.io.File;
import java.io.IOException;
import java.util.Collections;
import java.util.Map;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

/* loaded from: classes3.dex */
public class RNViewShotModule extends ReactContextBaseJavaModule {
    public static final String RNVIEW_SHOT = "RNViewShot";
    private static final String TEMP_FILE_PREFIX = "ReactNative-snapshot-image";
    private final Executor executor;
    private final ReactApplicationContext reactContext;

    public RNViewShotModule(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
        this.executor = Executors.newCachedThreadPool();
        this.reactContext = reactApplicationContext;
    }

    @NonNull
    private File createTempFile(@NonNull Context context, @NonNull String str, String str2) {
        File externalCacheDir = context.getExternalCacheDir();
        File cacheDir = context.getCacheDir();
        if (externalCacheDir == null && cacheDir == null) {
            throw new IOException("No cache directory available");
        }
        if (externalCacheDir == null || (cacheDir != null && externalCacheDir.getFreeSpace() <= cacheDir.getFreeSpace())) {
            externalCacheDir = cacheDir;
        }
        String k = e.k(".", str);
        return str2 != null ? File.createTempFile(str2, k, externalCacheDir) : File.createTempFile(TEMP_FILE_PREFIX, k, externalCacheDir);
    }

    @ReactMethod
    public void captureRef(int i5, ReadableMap readableMap, Promise promise) {
        int i6;
        getReactApplicationContext().getResources().getDisplayMetrics();
        String string = readableMap.getString("format");
        int i10 = "jpg".equals(string) ? 0 : "webm".equals(string) ? 2 : "raw".equals(string) ? -1 : 1;
        double d6 = readableMap.getDouble("quality");
        Integer valueOf = readableMap.hasKey("width") ? Integer.valueOf(readableMap.getInt("width")) : null;
        Integer valueOf2 = readableMap.hasKey("height") ? Integer.valueOf(readableMap.getInt("height")) : null;
        String string2 = readableMap.getString("result");
        try {
            i6 = i5;
        } catch (Throwable th2) {
            th = th2;
            i6 = i5;
        }
        try {
            ((UIManagerModule) this.reactContext.getNativeModule(UIManagerModule.class)).addUIBlock(new f(i6, string, i10, d6, valueOf, valueOf2, "tmpfile".equals(string2) ? createTempFile(getReactApplicationContext(), string, readableMap.hasKey("fileName") ? readableMap.getString("fileName") : null) : null, string2, Boolean.valueOf(readableMap.getBoolean("snapshotContentContainer")), getCurrentActivity(), readableMap.hasKey("handleGLSurfaceViewOnAndroid") && readableMap.getBoolean("handleGLSurfaceViewOnAndroid"), promise, this.executor));
        } catch (Throwable th3) {
            th = th3;
            Log.e(RNVIEW_SHOT, "Failed to snapshot view tag " + i6, th);
            promise.reject("E_UNABLE_TO_SNAPSHOT", "Failed to snapshot view tag " + i6);
        }
    }

    @ReactMethod
    public void captureScreen(ReadableMap readableMap, Promise promise) {
        captureRef(-1, readableMap, promise);
    }

    @Override // com.facebook.react.bridge.BaseJavaModule
    public Map<String, Object> getConstants() {
        return Collections.EMPTY_MAP;
    }

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return RNVIEW_SHOT;
    }

    @Override // com.facebook.react.bridge.NativeModule
    public void onCatalystInstanceDestroy() {
        super.onCatalystInstanceDestroy();
        new a(getReactApplicationContext()).executeOnExecutor(AsyncTask.THREAD_POOL_EXECUTOR, new Void[0]);
    }

    @ReactMethod
    public void releaseCapture(String str) {
        String path = Uri.parse(str).getPath();
        if (path == null) {
            return;
        }
        File file = new File(path);
        if (file.exists()) {
            File parentFile = file.getParentFile();
            if (parentFile.equals(this.reactContext.getExternalCacheDir()) || parentFile.equals(this.reactContext.getCacheDir())) {
                file.delete();
            }
        }
    }
}
