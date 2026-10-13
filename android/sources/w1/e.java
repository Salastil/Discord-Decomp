package w1;

import android.content.Context;
import android.os.CancellationSignal;
import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;
import n1.h;

/* loaded from: classes.dex */
public final class e extends t1.d {
    public static final /* synthetic */ int j = 0;

    /* renamed from: e, reason: collision with root package name */
    public final Context f19615e;

    /* renamed from: f, reason: collision with root package name */
    public h f19616f;

    /* renamed from: g, reason: collision with root package name */
    public Executor f19617g;

    /* renamed from: h, reason: collision with root package name */
    public CancellationSignal f19618h;

    /* renamed from: i, reason: collision with root package name */
    public final u1.c f19619i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(Context context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        this.f19615e = context;
        this.f19619i = new u1.c(this, new Handler(Looper.getMainLooper()), 2);
    }
}
