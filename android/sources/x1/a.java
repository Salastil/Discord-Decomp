package x1;

import android.content.Context;
import android.os.CancellationSignal;
import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;
import n1.h;
import t1.d;
import u1.c;

/* loaded from: classes.dex */
public final class a extends d {

    /* renamed from: e, reason: collision with root package name */
    public final Context f20244e;

    /* renamed from: f, reason: collision with root package name */
    public h f20245f;

    /* renamed from: g, reason: collision with root package name */
    public Executor f20246g;

    /* renamed from: h, reason: collision with root package name */
    public CancellationSignal f20247h;

    /* renamed from: i, reason: collision with root package name */
    public final c f20248i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(Context context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        this.f20244e = context;
        this.f20248i = new c(this, new Handler(Looper.getMainLooper()), 3);
    }
}
