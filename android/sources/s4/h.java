package s4;

import android.content.res.TypedArray;
import android.media.MediaDrm;
import android.media.MediaMetadataRetriever;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.ForkJoinPool;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract /* synthetic */ class h {
    public static /* synthetic */ boolean a(int i5) {
        if (i5 == 1 || i5 == 2) {
            return false;
        }
        if (i5 == 3 || i5 == 4) {
            return true;
        }
        throw null;
    }

    public static ClassCastException b(Iterator it) {
        it.next().getClass();
        return new ClassCastException();
    }

    public static Integer c(HashMap hashMap, Integer num, String str, int i5, String str2) {
        hashMap.put(num, str);
        Integer valueOf = Integer.valueOf(i5);
        hashMap.put(valueOf, str2);
        return valueOf;
    }

    public static String d(int i5, String str, int i6, String str2, String str3) {
        return str + i5 + str2 + i6 + str3;
    }

    public static String e(int i5, String str, String str2) {
        return str + i5 + str2;
    }

    public static String f(String str, String str2, String str3) {
        return str + str2 + str3;
    }

    public static String g(String str, String str2, String str3, String str4, String str5) {
        return str + str2 + str3 + str4 + str5;
    }

    public static String h(StringBuilder sb2, String str, char c6) {
        sb2.append(str);
        sb2.append(c6);
        return sb2.toString();
    }

    public static HashMap i(Class cls, ui.a aVar) {
        HashMap hashMap = new HashMap();
        hashMap.put(cls, aVar);
        return hashMap;
    }

    public static Map j(HashMap hashMap) {
        return Collections.unmodifiableMap(new HashMap(hashMap));
    }

    public static void k(int i5, HashMap hashMap, String str, int i6, String str2) {
        hashMap.put(str, Integer.valueOf(i5));
        hashMap.put(str2, Integer.valueOf(i6));
    }

    public static /* synthetic */ void l(AutoCloseable autoCloseable) {
        boolean isTerminated;
        if (autoCloseable instanceof AutoCloseable) {
            autoCloseable.close();
            return;
        }
        if (!(autoCloseable instanceof ExecutorService)) {
            if (autoCloseable instanceof TypedArray) {
                ((TypedArray) autoCloseable).recycle();
                return;
            } else if (autoCloseable instanceof MediaMetadataRetriever) {
                ((MediaMetadataRetriever) autoCloseable).release();
                return;
            } else {
                if (!(autoCloseable instanceof MediaDrm)) {
                    throw new IllegalArgumentException();
                }
                ((MediaDrm) autoCloseable).release();
                return;
            }
        }
        ExecutorService executorService = (ExecutorService) autoCloseable;
        if (executorService == ForkJoinPool.commonPool() || (isTerminated = executorService.isTerminated())) {
            return;
        }
        executorService.shutdown();
        boolean z5 = false;
        while (!isTerminated) {
            try {
                isTerminated = executorService.awaitTermination(1L, TimeUnit.DAYS);
            } catch (InterruptedException unused) {
                if (!z5) {
                    executorService.shutdownNow();
                    z5 = true;
                }
            }
        }
        if (z5) {
            Thread.currentThread().interrupt();
        }
    }

    public static boolean m(eq.b bVar, int i5, String str) {
        Boolean g6 = bVar.g(i5);
        Intrinsics.checkNotNullExpressionValue(g6, str);
        return g6.booleanValue();
    }

    public static /* synthetic */ String n(int i5) {
        switch (i5) {
            case 1:
                return "BEGIN_ARRAY";
            case 2:
                return "END_ARRAY";
            case 3:
                return "BEGIN_OBJECT";
            case 4:
                return "END_OBJECT";
            case 5:
                return "NAME";
            case 6:
                return "STRING";
            case 7:
                return "NUMBER";
            case 8:
                return "BOOLEAN";
            case 9:
                return "NULL";
            case 10:
                return "END_DOCUMENT";
            default:
                return "null";
        }
    }
}
