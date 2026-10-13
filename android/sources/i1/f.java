package i1;

import android.content.Context;
import android.content.pm.PackageManager;
import android.graphics.Typeface;
import android.os.Build;
import android.os.Trace;
import androidx.collection.LruCache;
import androidx.collection.SimpleArrayMap;
import java.util.List;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* loaded from: classes.dex */
public abstract class f {
    public static final LruCache a = new LruCache(16);

    /* renamed from: b, reason: collision with root package name */
    public static final ThreadPoolExecutor f10450b;

    /* renamed from: c, reason: collision with root package name */
    public static final Object f10451c;

    /* renamed from: d, reason: collision with root package name */
    public static final SimpleArrayMap f10452d;

    static {
        ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(0, 1, 10000, TimeUnit.MILLISECONDS, new LinkedBlockingDeque(), new i(0));
        threadPoolExecutor.allowCoreThreadTimeOut(true);
        f10450b = threadPoolExecutor;
        f10451c = new Object();
        f10452d = new SimpleArrayMap(0);
    }

    public static String a(int i5, List list) {
        StringBuilder sb2 = new StringBuilder();
        for (int i6 = 0; i6 < list.size(); i6++) {
            sb2.append(((c) list.get(i6)).f10443g);
            sb2.append("-");
            sb2.append(i5);
            if (i6 < list.size() - 1) {
                sb2.append(";");
            }
        }
        return sb2.toString();
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0052 A[Catch: all -> 0x00c1, TRY_LEAVE, TryCatch #0 {all -> 0x00c1, all -> 0x00b2, NameNotFoundException -> 0x00b7, all -> 0x007c, blocks: (B:3:0x000b, B:5:0x0013, B:10:0x001c, B:11:0x0020, B:16:0x0052, B:19:0x005b, B:21:0x0061, B:23:0x0067, B:26:0x0078, B:28:0x009d, B:31:0x00a9, B:36:0x007d, B:37:0x0080, B:38:0x0081, B:41:0x0098, B:44:0x00b3, B:45:0x00b6, B:47:0x002f, B:49:0x0037, B:52:0x003b, B:54:0x003f, B:56:0x004a, B:65:0x00b7, B:40:0x0092, B:25:0x0072), top: B:2:0x000b }] */
    /* JADX WARN: Removed duplicated region for block: B:19:0x005b A[Catch: all -> 0x00c1, TRY_ENTER, TryCatch #0 {all -> 0x00c1, all -> 0x00b2, NameNotFoundException -> 0x00b7, all -> 0x007c, blocks: (B:3:0x000b, B:5:0x0013, B:10:0x001c, B:11:0x0020, B:16:0x0052, B:19:0x005b, B:21:0x0061, B:23:0x0067, B:26:0x0078, B:28:0x009d, B:31:0x00a9, B:36:0x007d, B:37:0x0080, B:38:0x0081, B:41:0x0098, B:44:0x00b3, B:45:0x00b6, B:47:0x002f, B:49:0x0037, B:52:0x003b, B:54:0x003f, B:56:0x004a, B:65:0x00b7, B:40:0x0092, B:25:0x0072), top: B:2:0x000b }] */
    /* JADX WARN: Removed duplicated region for block: B:28:0x009d A[Catch: all -> 0x00c1, TRY_LEAVE, TryCatch #0 {all -> 0x00c1, all -> 0x00b2, NameNotFoundException -> 0x00b7, all -> 0x007c, blocks: (B:3:0x000b, B:5:0x0013, B:10:0x001c, B:11:0x0020, B:16:0x0052, B:19:0x005b, B:21:0x0061, B:23:0x0067, B:26:0x0078, B:28:0x009d, B:31:0x00a9, B:36:0x007d, B:37:0x0080, B:38:0x0081, B:41:0x0098, B:44:0x00b3, B:45:0x00b6, B:47:0x002f, B:49:0x0037, B:52:0x003b, B:54:0x003f, B:56:0x004a, B:65:0x00b7, B:40:0x0092, B:25:0x0072), top: B:2:0x000b }] */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00a9 A[Catch: all -> 0x00c1, TRY_ENTER, TRY_LEAVE, TryCatch #0 {all -> 0x00c1, all -> 0x00b2, NameNotFoundException -> 0x00b7, all -> 0x007c, blocks: (B:3:0x000b, B:5:0x0013, B:10:0x001c, B:11:0x0020, B:16:0x0052, B:19:0x005b, B:21:0x0061, B:23:0x0067, B:26:0x0078, B:28:0x009d, B:31:0x00a9, B:36:0x007d, B:37:0x0080, B:38:0x0081, B:41:0x0098, B:44:0x00b3, B:45:0x00b6, B:47:0x002f, B:49:0x0037, B:52:0x003b, B:54:0x003f, B:56:0x004a, B:65:0x00b7, B:40:0x0092, B:25:0x0072), top: B:2:0x000b }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static e b(String str, Context context, List list, int i5) {
        Typeface typeface;
        int i6;
        Typeface i10;
        LruCache lruCache = a;
        Trace.beginSection(com.facebook.imagepipeline.nativecode.c.Y("getFontSync"));
        try {
            typeface = (Typeface) lruCache.a(str);
        } catch (PackageManager.NameNotFoundException unused) {
            return new e(-1);
        } catch (Throwable th2) {
            throw th2;
        } finally {
            Trace.endSection();
        }
        if (typeface != null) {
            return new e(typeface);
        }
        ad.f a10 = b.a(context, list);
        List list2 = a10.f355b;
        int i11 = a10.a;
        if (i11 != 0) {
            if (i11 == 1) {
                i6 = -2;
                if (i6 == 0) {
                    return new e(i6);
                }
                if (list2.size() <= 1 || Build.VERSION.SDK_INT < 29) {
                    g[] gVarArr = (g[]) list2.get(0);
                    zk.a aVar = b1.f.a;
                    Trace.beginSection(com.facebook.imagepipeline.nativecode.c.Y("TypefaceCompat.createFromFontInfo"));
                    i10 = b1.f.a.i(context, gVarArr, i5);
                    Trace.endSection();
                    if (i10 != null) {
                        return new e(-3);
                    }
                    lruCache.b(str, i10);
                    return new e(i10);
                }
                zk.a aVar2 = b1.f.a;
                Trace.beginSection(com.facebook.imagepipeline.nativecode.c.Y("TypefaceCompat.createFromFontInfoWithFallback"));
                i10 = b1.f.a.j(context, list2, i5);
                Trace.endSection();
                if (i10 != null) {
                }
            }
            i6 = -3;
            if (i6 == 0) {
            }
        } else {
            g[] gVarArr2 = (g[]) list2.get(0);
            if (gVarArr2 != null && gVarArr2.length != 0) {
                int length = gVarArr2.length;
                int i12 = 0;
                while (true) {
                    if (i12 >= length) {
                        i6 = 0;
                        break;
                    }
                    int i13 = gVarArr2[i12].f10457f;
                    if (i13 == 0) {
                        i12++;
                    } else if (i13 >= 0) {
                        i6 = i13;
                    }
                }
                if (i6 == 0) {
                }
            }
            i6 = 1;
            if (i6 == 0) {
            }
        }
        Trace.endSection();
    }
}
