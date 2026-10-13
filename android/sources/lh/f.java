package lh;

import a5.k0;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Path;
import android.media.ExifInterface;
import android.os.Environment;
import android.util.Log;
import android.util.Pair;
import com.facebook.hermes.instrumentation.HermesSamplingProfiler;
import com.facebook.hermes.reactexecutor.HermesExecutor;
import com.facebook.jni.HybridData;
import com.facebook.react.bridge.JavaScriptExecutor;
import com.facebook.react.bridge.JavaScriptExecutorFactory;
import com.facebook.soloader.SoLoader;
import com.facebook.soloader.g0;
import com.facebook.soloader.i0;
import com.reactnativecommunity.clipboard.ClipboardModule;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.util.UUID;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class f implements n.u, t2.b, jb.b, s8.c, ha.m, lb.c, ks.g, uh.g, di.o, JavaScriptExecutorFactory {

    /* renamed from: e, reason: collision with root package name */
    public static f f13981e;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13982d;

    public /* synthetic */ f(int i5) {
        this.f13982d = i5;
    }

    public static f g() {
        if (f13981e == null) {
            f13981e = new f(7);
        }
        return f13981e;
    }

    public static Path i(float f2, float f10, float f11, float f12) {
        Path path = new Path();
        path.moveTo(f2, f10);
        path.lineTo(f11, f12);
        return path;
    }

    public static String j(String str) {
        return (str.startsWith("lib") && str.endsWith(".so")) ? str : System.mapLibraryName(str);
    }

    public static File k(Context context, String str, int i5, int i6, int i10, int i11, int i12, String str2) {
        int i13;
        int i14;
        int i15;
        Bitmap decodeFile;
        if (i5 > i10) {
            i14 = (int) (i6 * (i10 / i5));
            i13 = i10;
        } else {
            i13 = i5;
            i14 = i6;
        }
        if (i14 > i11) {
            i13 = (int) (i13 * (i11 / i14));
            i14 = i11;
        }
        Pair create = Pair.create(Integer.valueOf(i13), Integer.valueOf(i14));
        int intValue = ((Integer) create.first).intValue();
        int intValue2 = ((Integer) create.second).intValue();
        if (i5 > i10 || i6 > i11) {
            BitmapFactory.Options options = new BitmapFactory.Options();
            if (i5 > intValue || i6 > intValue2) {
                int i16 = i5 / 2;
                int i17 = i6 / 2;
                i15 = 1;
                while (i16 / i15 >= intValue && i17 / i15 >= intValue2) {
                    i15 *= 2;
                }
            } else {
                i15 = 1;
            }
            options.inSampleSize = i15;
            decodeFile = BitmapFactory.decodeFile(str, options);
        } else {
            decodeFile = BitmapFactory.decodeFile(str);
        }
        String attribute = new ExifInterface(str).getAttribute("Orientation");
        Bitmap createScaledBitmap = Bitmap.createScaledBitmap(decodeFile, intValue, intValue2, true);
        File externalFilesDir = context.getExternalFilesDir(Environment.DIRECTORY_PICTURES);
        if (!externalFilesDir.exists()) {
            Log.d("image-crop-picker", "Pictures Directory is not existing. Will create this directory.");
            externalFilesDir.mkdirs();
        }
        Bitmap.CompressFormat compressFormat = str2.equals(ClipboardModule.MIMETYPE_PNG) ? Bitmap.CompressFormat.PNG : Bitmap.CompressFormat.JPEG;
        Bitmap.CompressFormat compressFormat2 = Bitmap.CompressFormat.PNG;
        File file = new File(externalFilesDir, UUID.randomUUID() + (compressFormat == compressFormat2 ? ".png" : ".jpg"));
        BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(new FileOutputStream(file));
        if (!str2.equals(ClipboardModule.MIMETYPE_PNG)) {
            compressFormat2 = Bitmap.CompressFormat.JPEG;
        }
        createScaledBitmap.compress(compressFormat2, i12, bufferedOutputStream);
        if (!attribute.equals(String.valueOf(1)) && !attribute.equals(String.valueOf(0))) {
            ExifInterface exifInterface = new ExifInterface(file.getAbsolutePath());
            exifInterface.setAttribute("Orientation", attribute);
            exifInterface.saveAttributes();
        }
        bufferedOutputStream.close();
        createScaledBitmap.recycle();
        return file;
    }

    @Override // uh.g
    public Object a() {
        switch (this.f13982d) {
            case 18:
                ExecutorService newSingleThreadExecutor = Executors.newSingleThreadExecutor(new i1.i(1));
                k0.c(newSingleThreadExecutor);
                return newSingleThreadExecutor;
            case 19:
            default:
                return new j8.c();
            case 20:
                return new di.a0("IntegrityService");
        }
    }

    @Override // ha.m
    public int c(Object obj) {
        return ((qa.q) obj).o();
    }

    @Override // com.facebook.react.bridge.JavaScriptExecutorFactory
    public JavaScriptExecutor create() {
        HybridData initHybridDefaultConfig;
        Intrinsics.checkNotNullParameter("", "debuggerName");
        initHybridDefaultConfig = HermesExecutor.a.initHybridDefaultConfig(true, "");
        return new HermesExecutor(initHybridDefaultConfig);
    }

    public float d(float f2) {
        return 1.0f;
    }

    @Override // lb.c
    public boolean e(UnsatisfiedLinkError unsatisfiedLinkError, com.facebook.soloader.b0[] b0VarArr) {
        if (!(unsatisfiedLinkError instanceof com.facebook.soloader.a0)) {
            return false;
        }
        Log.e("SoLoader", "Checking /data/data missing libraries.");
        boolean z5 = false;
        for (com.facebook.soloader.b0 b0Var : b0VarArr) {
            if ((b0Var instanceof i0) && !(b0Var instanceof com.facebook.soloader.b)) {
                i0 i0Var = (i0) b0Var;
                try {
                    g0[] f2 = i0Var.f();
                    int length = f2.length;
                    int i5 = 0;
                    while (true) {
                        if (i5 < length) {
                            g0 g0Var = f2[i5];
                            File file = new File(i0Var.a, g0Var.f5099d);
                            if (!file.exists()) {
                                file = null;
                            }
                            if (file == null) {
                                Log.e("SoLoader", "Missing " + g0Var.f5099d + " from " + i0Var.b() + ", will force prepare.");
                                i0Var.d(2);
                                z5 = true;
                                break;
                            }
                            i5++;
                        }
                    }
                } catch (Exception e9) {
                    Log.e("SoLoader", "Encountered an exception while recovering from /data/data failure ", e9);
                    return false;
                }
            }
        }
        if (z5) {
            Log.e("SoLoader", "Successfully recovered from /data/data disk failure.");
            return true;
        }
        Log.e("SoLoader", "No libraries missing from unpacking so paths while recovering /data/data failure");
        return false;
    }

    @Override // jb.b
    public boolean f(String str) {
        return SoLoader.n(0, str);
    }

    @Override // n.u
    public boolean h(n.j jVar) {
        return false;
    }

    @Override // s8.c
    public void release(Object obj) {
        ((Bitmap) obj).recycle();
    }

    @Override // com.facebook.react.bridge.JavaScriptExecutorFactory
    public void startSamplingProfiler() {
        HermesSamplingProfiler.enable();
    }

    @Override // com.facebook.react.bridge.JavaScriptExecutorFactory
    public void stopSamplingProfiler(String filename) {
        Intrinsics.checkNotNullParameter(filename, "filename");
        HermesSamplingProfiler.dumpSampledTraceToFile(filename);
        HermesSamplingProfiler.disable();
    }

    public String toString() {
        switch (this.f13982d) {
            case 22:
                return "JSIExecutor+HermesRuntime";
            default:
                return super.toString();
        }
    }

    public f(xq.l storageManager, m0 samWithReceiverResolvers) {
        this.f13982d = 16;
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(samWithReceiverResolvers, "samWithReceiverResolvers");
        String str = xq.l.f20550d;
        new ConcurrentHashMap(3, 1.0f, 2);
    }

    @Override // n.u
    public void b(n.j jVar, boolean z5) {
    }
}
