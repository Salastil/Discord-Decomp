package c4;

import android.content.Context;
import java.util.LinkedHashSet;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class f {
    public final h4.b a;

    /* renamed from: b, reason: collision with root package name */
    public final Context f3304b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f3305c;

    /* renamed from: d, reason: collision with root package name */
    public final LinkedHashSet f3306d;

    /* renamed from: e, reason: collision with root package name */
    public Object f3307e;

    public f(Context context, h4.b taskExecutor) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(taskExecutor, "taskExecutor");
        this.a = taskExecutor;
        Context applicationContext = context.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "context.applicationContext");
        this.f3304b = applicationContext;
        this.f3305c = new Object();
        this.f3306d = new LinkedHashSet();
    }

    public abstract Object a();

    public final void b(Object obj) {
        synchronized (this.f3305c) {
            Object obj2 = this.f3307e;
            if (obj2 == null || !Intrinsics.areEqual(obj2, obj)) {
                this.f3307e = obj;
                this.a.f9518d.execute(new a1.k(4, CollectionsKt.i0(this.f3306d), this));
                Unit unit = Unit.a;
            }
        }
    }

    public abstract void c();

    public abstract void d();
}
