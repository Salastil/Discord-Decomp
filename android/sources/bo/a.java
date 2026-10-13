package bo;

import android.util.Log;
import com.facebook.react.bridge.GuardedAsyncTask;
import com.facebook.react.bridge.ReactApplicationContext;
import fr.greweb.reactnativeviewshot.RNViewShotModule;
import java.io.File;
import java.io.FilenameFilter;

/* loaded from: classes3.dex */
public final class a extends GuardedAsyncTask implements FilenameFilter {
    public final File a;

    /* renamed from: b, reason: collision with root package name */
    public final File f3115b;

    public a(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
        this.a = reactApplicationContext.getCacheDir();
        this.f3115b = reactApplicationContext.getExternalCacheDir();
    }

    public final void a(File file) {
        File[] listFiles = file.listFiles(this);
        if (listFiles != null) {
            for (File file2 : listFiles) {
                if (file2.delete()) {
                    Log.d(RNViewShotModule.RNVIEW_SHOT, "deleted file: " + file2.getAbsolutePath());
                }
            }
        }
    }

    @Override // java.io.FilenameFilter
    public final boolean accept(File file, String str) {
        return str.startsWith("ReactNative-snapshot-image");
    }

    @Override // com.facebook.react.bridge.GuardedAsyncTask
    public final void doInBackgroundGuarded(Object[] objArr) {
        File file = this.a;
        if (file != null) {
            a(file);
        }
        File file2 = this.f3115b;
        if (file2 != null) {
            a(file2);
        }
    }
}
