package af;

import android.graphics.Path;
import android.graphics.PathMeasure;
import android.os.Handler;
import android.os.Looper;
import android.view.Choreographer;
import java.nio.ByteBuffer;
import java.text.DecimalFormat;
import java.text.DecimalFormatSymbols;
import java.text.SimpleDateFormat;
import java.util.Locale;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h0 extends ThreadLocal {
    public final /* synthetic */ int a;

    @Override // java.lang.ThreadLocal
    public final Object initialValue() {
        switch (this.a) {
            case 0:
                return Boolean.FALSE;
            case 1:
                return new DecimalFormat("#.################", DecimalFormatSymbols.getInstance(Locale.ROOT));
            case 2:
                return new io.sentry.util.i();
            case 3:
                Choreographer choreographer = Choreographer.getInstance();
                Intrinsics.checkNotNullExpressionValue(choreographer, "getInstance()");
                Looper myLooper = Looper.myLooper();
                if (myLooper == null) {
                    throw new IllegalStateException("no Looper on this thread");
                }
                Handler o6 = com.facebook.imagepipeline.nativecode.c.o(myLooper);
                Intrinsics.checkNotNullExpressionValue(o6, "createAsync(\n           …d\")\n                    )");
                j0.d dVar = new j0.d(choreographer, o6);
                return kotlin.coroutines.e.c(dVar, dVar.I);
            case 4:
                return 0L;
            case 5:
                h0 h0Var = r8.a.a;
                return ByteBuffer.allocate(16384);
            case 6:
                SimpleDateFormat simpleDateFormat = new SimpleDateFormat("EEE, dd MMM yyyy HH:mm:ss 'GMT'", Locale.US);
                simpleDateFormat.setLenient(false);
                simpleDateFormat.setTimeZone(qs.b.f17054e);
                return simpleDateFormat;
            case 7:
                return new PathMeasure();
            case 8:
                return new Path();
            case 9:
                return new Path();
            default:
                return new float[4];
        }
    }
}
