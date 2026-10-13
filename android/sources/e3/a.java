package e3;

import android.os.Bundle;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.s0;
import d3.e;
import e.b;
import java.util.LinkedHashMap;
import kotlin.jvm.internal.Intrinsics;
import lh.f;

/* loaded from: classes.dex */
public final class a {
    public final e a;

    /* renamed from: b, reason: collision with root package name */
    public final s0 f7929b;

    /* renamed from: c, reason: collision with root package name */
    public final f f7930c;

    /* renamed from: d, reason: collision with root package name */
    public final LinkedHashMap f7931d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f7932e;

    /* renamed from: f, reason: collision with root package name */
    public Bundle f7933f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f7934g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f7935h;

    public a(e owner, s0 onAttach) {
        Intrinsics.checkNotNullParameter(owner, "owner");
        Intrinsics.checkNotNullParameter(onAttach, "onAttach");
        this.a = owner;
        this.f7929b = onAttach;
        this.f7930c = new f(5);
        this.f7931d = new LinkedHashMap();
        this.f7935h = true;
    }

    public final void a() {
        e eVar = this.a;
        if (eVar.getLifecycle().b() != Lifecycle.State.f2138e) {
            throw new IllegalStateException("Restarter must be created only during owner's initialization stage");
        }
        if (this.f7932e) {
            throw new IllegalStateException("SavedStateRegistry was already attached.");
        }
        this.f7929b.invoke();
        eVar.getLifecycle().a(new b(2, this));
        this.f7932e = true;
    }
}
