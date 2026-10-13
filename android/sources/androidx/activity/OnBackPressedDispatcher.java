package androidx.activity;

import android.os.Build;
import android.window.OnBackInvokedCallback;
import android.window.OnBackInvokedDispatcher;
import androidx.appcompat.widget.p3;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import bm.c;
import e.e;
import e.o;
import e.p;
import e.q;
import e.r;
import e.s;
import java.util.Iterator;
import java.util.ListIterator;
import kotlin.collections.ArrayDeque;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class OnBackPressedDispatcher {
    public final Runnable a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayDeque f740b = new ArrayDeque();

    /* renamed from: c, reason: collision with root package name */
    public OnBackPressedCallback f741c;

    /* renamed from: d, reason: collision with root package name */
    public final OnBackInvokedCallback f742d;

    /* renamed from: e, reason: collision with root package name */
    public OnBackInvokedDispatcher f743e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f744f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f745g;

    public OnBackPressedDispatcher(Runnable runnable) {
        OnBackInvokedCallback p3Var;
        this.a = runnable;
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 33) {
            if (i5 >= 34) {
                o onBackStarted = new o(this, 0);
                o onBackProgressed = new o(this, 1);
                p onBackInvoked = new p(this, 0);
                p onBackCancelled = new p(this, 1);
                Intrinsics.checkNotNullParameter(onBackStarted, "onBackStarted");
                Intrinsics.checkNotNullParameter(onBackProgressed, "onBackProgressed");
                Intrinsics.checkNotNullParameter(onBackInvoked, "onBackInvoked");
                Intrinsics.checkNotNullParameter(onBackCancelled, "onBackCancelled");
                p3Var = new q(onBackStarted, onBackProgressed, onBackInvoked, onBackCancelled);
            } else {
                p onBackInvoked2 = new p(this, 2);
                Intrinsics.checkNotNullParameter(onBackInvoked2, "onBackInvoked");
                p3Var = new p3(1, onBackInvoked2);
            }
            this.f742d = p3Var;
        }
    }

    public final void a(LifecycleOwner owner, OnBackPressedCallback onBackPressedCallback) {
        Intrinsics.checkNotNullParameter(owner, "owner");
        Intrinsics.checkNotNullParameter(onBackPressedCallback, "onBackPressedCallback");
        Lifecycle lifecycle = owner.getLifecycle();
        if (lifecycle.b() == Lifecycle.State.f2137d) {
            return;
        }
        onBackPressedCallback.addCancellable(new r(this, lifecycle, onBackPressedCallback));
        f();
        onBackPressedCallback.setEnabledChangedCallback$activity_release(new c(0, this, OnBackPressedDispatcher.class, "updateEnabledCallbacks", "updateEnabledCallbacks()V", 0, 1));
    }

    public final s b(OnBackPressedCallback onBackPressedCallback) {
        Intrinsics.checkNotNullParameter(onBackPressedCallback, "onBackPressedCallback");
        this.f740b.addLast(onBackPressedCallback);
        s sVar = new s(this, onBackPressedCallback);
        onBackPressedCallback.addCancellable(sVar);
        f();
        onBackPressedCallback.setEnabledChangedCallback$activity_release(new c(0, this, OnBackPressedDispatcher.class, "updateEnabledCallbacks", "updateEnabledCallbacks()V", 0, 2));
        return sVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v2 */
    /* JADX WARN: Type inference failed for: r2v3 */
    /* JADX WARN: Type inference failed for: r2v4, types: [java.lang.Object] */
    public final void c() {
        OnBackPressedCallback onBackPressedCallback;
        OnBackPressedCallback onBackPressedCallback2 = this.f741c;
        if (onBackPressedCallback2 == null) {
            ArrayDeque arrayDeque = this.f740b;
            ListIterator listIterator = arrayDeque.listIterator(arrayDeque.size());
            while (true) {
                if (!listIterator.hasPrevious()) {
                    onBackPressedCallback = 0;
                    break;
                } else {
                    onBackPressedCallback = listIterator.previous();
                    if (((OnBackPressedCallback) onBackPressedCallback).isEnabled()) {
                        break;
                    }
                }
            }
            onBackPressedCallback2 = onBackPressedCallback;
        }
        this.f741c = null;
        if (onBackPressedCallback2 != null) {
            onBackPressedCallback2.handleOnBackCancelled();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v2 */
    /* JADX WARN: Type inference failed for: r2v3 */
    /* JADX WARN: Type inference failed for: r2v4, types: [java.lang.Object] */
    public final void d() {
        OnBackPressedCallback onBackPressedCallback;
        OnBackPressedCallback onBackPressedCallback2 = this.f741c;
        if (onBackPressedCallback2 == null) {
            ArrayDeque arrayDeque = this.f740b;
            ListIterator listIterator = arrayDeque.listIterator(arrayDeque.a());
            while (true) {
                if (!listIterator.hasPrevious()) {
                    onBackPressedCallback = 0;
                    break;
                } else {
                    onBackPressedCallback = listIterator.previous();
                    if (((OnBackPressedCallback) onBackPressedCallback).isEnabled()) {
                        break;
                    }
                }
            }
            onBackPressedCallback2 = onBackPressedCallback;
        }
        this.f741c = null;
        if (onBackPressedCallback2 != null) {
            onBackPressedCallback2.handleOnBackPressed();
        } else {
            this.a.run();
        }
    }

    public final void e(boolean z5) {
        OnBackInvokedCallback onBackInvokedCallback;
        OnBackInvokedDispatcher onBackInvokedDispatcher = this.f743e;
        if (onBackInvokedDispatcher == null || (onBackInvokedCallback = this.f742d) == null) {
            return;
        }
        if (z5 && !this.f744f) {
            e.h(onBackInvokedDispatcher, onBackInvokedCallback);
            this.f744f = true;
        } else {
            if (z5 || !this.f744f) {
                return;
            }
            e.j(onBackInvokedDispatcher, onBackInvokedCallback);
            this.f744f = false;
        }
    }

    public final void f() {
        boolean z5 = this.f745g;
        boolean z6 = false;
        ArrayDeque arrayDeque = this.f740b;
        if (arrayDeque == null || !arrayDeque.isEmpty()) {
            Iterator it = arrayDeque.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                } else if (((OnBackPressedCallback) it.next()).isEnabled()) {
                    z6 = true;
                    break;
                }
            }
        }
        this.f745g = z6;
        if (z6 == z5 || Build.VERSION.SDK_INT < 33) {
            return;
        }
        e(z6);
    }
}
