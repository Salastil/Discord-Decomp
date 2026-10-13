package a3;

import a5.g0;
import a5.v;
import af.a0;
import android.content.Intent;
import android.database.Cursor;
import android.database.sqlite.SQLiteException;
import android.os.SystemClock;
import android.util.Log;
import android.view.Menu;
import android.view.MotionEvent;
import android.view.View;
import android.view.Window;
import android.view.animation.AnimationUtils;
import android.view.inputmethod.InputMethodManager;
import android.widget.OverScroller;
import androidx.appcompat.widget.SearchView$SearchAutoComplete;
import androidx.appcompat.widget.Toolbar;
import androidx.appcompat.widget.j0;
import androidx.appcompat.widget.t1;
import androidx.core.view.s0;
import androidx.customview.widget.ViewDragHelper;
import androidx.lifecycle.LiveData;
import androidx.recyclerview.widget.RecyclerView;
import com.android.billingclient.api.BillingResult;
import com.discord.zoom_layout.ZoomLayoutFixed;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.producers.y0;
import com.google.android.material.internal.CheckableImageButton;
import com.google.android.material.textfield.TextInputLayout;
import com.otaliastudios.zoom.ScaledPoint;
import com.otaliastudios.zoom.ZoomEngine;
import i.e0;
import ie.i0;
import io.sentry.SentryLevel;
import io.sentry.v5;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import java.util.WeakHashMap;
import java.util.concurrent.Executor;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.locks.ReentrantReadWriteLock;
import kotlin.Unit;
import kotlin.collections.c1;
import kotlin.collections.o0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class h implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f59d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f60e;

    public /* synthetic */ h(int i5, Object obj) {
        this.f59d = i5;
        this.f60e = obj;
    }

    private final void b() {
        ArrayList arrayList;
        synchronized (((f9.b) this.f60e).f8472d) {
            f9.b bVar = (f9.b) this.f60e;
            ArrayList arrayList2 = (ArrayList) bVar.f8475v;
            arrayList = (ArrayList) bVar.f8474i;
            bVar.f8475v = arrayList;
            bVar.f8474i = arrayList2;
        }
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((g9.c) ((f9.a) ((ArrayList) ((f9.b) this.f60e).f8475v).get(i5))).m();
        }
        ((ArrayList) ((f9.b) this.f60e).f8475v).clear();
    }

    private final void c() {
        ig.a aVar = (ig.a) this.f60e;
        synchronized (aVar.a) {
            try {
                if (aVar.b()) {
                    Log.e("WakeLock", String.valueOf(aVar.j).concat(" ** IS FORCE-RELEASED ON TIMEOUT **"));
                    aVar.d();
                    if (aVar.b()) {
                        aVar.f10784c = 1;
                        aVar.e();
                    }
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    private final void d() {
        synchronized (((jg.j) this.f60e).f12765i) {
            ((jg.b) ((jg.j) this.f60e).f12766v).E();
        }
    }

    private final void e() {
        synchronized (((m9.a) this.f60e)) {
            try {
                m9.a aVar = (m9.a) this.f60e;
                aVar.f14413d = false;
                if (aVar.f14411b.now() - aVar.f14414e > 2000) {
                    n9.a aVar2 = ((m9.a) this.f60e).f14415f;
                    if (aVar2.f14964e) {
                        p9.a aVar3 = aVar2.f14965f;
                        if (aVar3 != null) {
                            aVar3.f();
                        }
                    } else {
                        aVar2.a();
                    }
                } else {
                    ((m9.a) this.f60e).d();
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public go.n a() {
        i iVar = (i) this.f60e;
        go.n nVar = new go.n();
        Cursor m5 = iVar.a.m(new a5.m("SELECT * FROM room_table_modification_log WHERE invalidated = 1;", 1));
        while (m5.moveToNext()) {
            try {
                nVar.add(Integer.valueOf(m5.getInt(0)));
            } finally {
            }
        }
        Unit unit = Unit.a;
        m5.close();
        go.n a = c1.a(nVar);
        if (a.f9420d.isEmpty()) {
            return a;
        }
        if (((i) this.f60e).f67g == null) {
            throw new IllegalStateException("Required value was null.");
        }
        h3.j jVar = ((i) this.f60e).f67g;
        if (jVar == null) {
            throw new IllegalArgumentException("Required value was null.");
        }
        jVar.c();
        return a;
    }

    /* JADX WARN: Removed duplicated region for block: B:107:0x0186  */
    /* JADX WARN: Removed duplicated region for block: B:109:? A[RETURN, SYNTHETIC] */
    @Override // java.lang.Runnable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void run() {
        Set set;
        Object obj;
        CloseableReference closeableReference;
        int i5;
        boolean p3;
        io.sentry.r a;
        switch (this.f59d) {
            case 0:
                ReentrantReadWriteLock.ReadLock readLock = ((i) this.f60e).a.f2575h.readLock();
                Intrinsics.checkNotNullExpressionValue(readLock, "readWriteLock.readLock()");
                readLock.lock();
                try {
                    try {
                    } finally {
                        readLock.unlock();
                    }
                } catch (SQLiteException e9) {
                    Log.e("ROOM", "Cannot run invalidation tracker. Is the db closed?", e9);
                    set = o0.f13515d;
                } catch (IllegalStateException e10) {
                    Log.e("ROOM", "Cannot run invalidation tracker. Is the db closed?", e10);
                    set = o0.f13515d;
                }
                if (((i) this.f60e).a() && ((i) this.f60e).f65e.compareAndSet(true, false) && !((i) this.f60e).a.h().D().q()) {
                    h3.c D = ((i) this.f60e).a.h().D();
                    D.f();
                    try {
                        set = a();
                        D.A();
                        if (set.isEmpty()) {
                            return;
                        }
                        i iVar = (i) this.f60e;
                        synchronized (iVar.f69i) {
                            try {
                                Iterator it = iVar.f69i.iterator();
                                while (true) {
                                    p.b bVar = (p.b) it;
                                    if (bVar.hasNext()) {
                                        ((g) ((Map.Entry) bVar.next()).getValue()).a(set);
                                    } else {
                                        Unit unit = Unit.a;
                                    }
                                }
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        return;
                    } finally {
                        D.i();
                    }
                }
                return;
            case 1:
                v vVar = (v) this.f60e;
                a5.b bVar2 = vVar.f230v;
                bVar2.E(0);
                BillingResult billingResult = g0.f165i;
                bVar2.D(24, billingResult);
                vVar.d(billingResult);
                return;
            case 2:
                ((af.q) this.f60e).f();
                return;
            case 3:
                ze.c cVar = ((af.q) ((u4.b) this.f60e).f18810e).f583g;
                cVar.b(cVar.getClass().getName().concat(" disconnecting because it was signed out."));
                return;
            case 4:
                ((a0) this.f60e).f540m.A(new ye.b(4, null, null));
                return;
            case 5:
                t1 t1Var = (t1) this.f60e;
                t1Var.I = null;
                t1Var.drawableStateChanged();
                return;
            case 6:
                SearchView$SearchAutoComplete searchView$SearchAutoComplete = (SearchView$SearchAutoComplete) this.f60e;
                if (searchView$SearchAutoComplete.f880y) {
                    ((InputMethodManager) searchView$SearchAutoComplete.getContext().getSystemService("input_method")).showSoftInput(searchView$SearchAutoComplete, 0);
                    searchView$SearchAutoComplete.f880y = false;
                    return;
                }
                return;
            case 7:
                ((Toolbar) this.f60e).u();
                return;
            case 8:
                androidx.core.widget.d dVar = (androidx.core.widget.d) this.f60e;
                t1 t1Var2 = dVar.f1677i;
                androidx.core.widget.a aVar = dVar.f1675d;
                if (dVar.L) {
                    if (dVar.J) {
                        dVar.J = false;
                        long currentAnimationTimeMillis = AnimationUtils.currentAnimationTimeMillis();
                        aVar.f1670e = currentAnimationTimeMillis;
                        aVar.f1672g = -1L;
                        aVar.f1671f = currentAnimationTimeMillis;
                        aVar.f1673h = 0.5f;
                    }
                    if ((aVar.f1672g > 0 && AnimationUtils.currentAnimationTimeMillis() > aVar.f1672g + aVar.f1674i) || !dVar.e()) {
                        dVar.L = false;
                        return;
                    }
                    if (dVar.K) {
                        dVar.K = false;
                        long uptimeMillis = SystemClock.uptimeMillis();
                        MotionEvent obtain = MotionEvent.obtain(uptimeMillis, uptimeMillis, 3, 0.0f, 0.0f, 0);
                        t1Var2.onTouchEvent(obtain);
                        obtain.recycle();
                    }
                    if (aVar.f1671f == 0) {
                        throw new RuntimeException("Cannot compute scroll delta before calling start()");
                    }
                    long currentAnimationTimeMillis2 = AnimationUtils.currentAnimationTimeMillis();
                    float a10 = aVar.a(currentAnimationTimeMillis2);
                    long j = currentAnimationTimeMillis2 - aVar.f1671f;
                    aVar.f1671f = currentAnimationTimeMillis2;
                    dVar.N.scrollListBy((int) (j * ((a10 * 4.0f) + ((-4.0f) * a10 * a10)) * aVar.f1669d));
                    WeakHashMap weakHashMap = s0.a;
                    t1Var2.postOnAnimation(this);
                    return;
                }
                return;
            case 9:
                ((ViewDragHelper) this.f60e).p(0);
                return;
            case 10:
                synchronized (((LiveData) this.f60e).a) {
                    obj = ((LiveData) this.f60e).f2155f;
                    ((LiveData) this.f60e).f2155f = LiveData.k;
                }
                ((LiveData) this.f60e).h(obj);
                return;
            case 11:
                synchronized (((y0) this.f60e)) {
                    y0 y0Var = (y0) this.f60e;
                    closeableReference = y0Var.f4841g;
                    i5 = y0Var.f4842h;
                    y0Var.f4841g = null;
                    y0Var.f4843i = false;
                }
                if (CloseableReference.t(closeableReference)) {
                    try {
                        y0.l((y0) this.f60e, closeableReference, i5);
                        closeableReference.close();
                    } catch (Throwable th3) {
                        CloseableReference.l(closeableReference);
                        throw th3;
                    }
                }
                y0 y0Var2 = (y0) this.f60e;
                synchronized (y0Var2) {
                    y0Var2.j = false;
                    p3 = y0Var2.p();
                }
                if (p3) {
                    ((Executor) y0Var2.k.f4832d).execute(new h(11, y0Var2));
                    return;
                }
                return;
            case 12:
                e5.d dVar2 = (e5.d) this.f60e;
                dVar2.measure(View.MeasureSpec.makeMeasureSpec(dVar2.getWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(dVar2.getHeight(), 1073741824));
                dVar2.layout(dVar2.getLeft(), dVar2.getTop(), dVar2.getRight(), dVar2.getBottom());
                return;
            case 13:
                b();
                return;
            case 14:
                gk.n nVar = (gk.n) this.f60e;
                nVar.measure(View.MeasureSpec.makeMeasureSpec(nVar.getWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(nVar.getHeight(), 1073741824));
                nVar.layout(nVar.getLeft(), nVar.getTop(), nVar.getRight(), nVar.getBottom());
                return;
            case 15:
                gl.d dVar3 = (gl.d) this.f60e;
                hl.b bVar3 = dVar3.f9362i;
                OverScroller overScroller = dVar3.f9364w;
                if (overScroller.isFinished()) {
                    dVar3.f9361e.b(0);
                    dVar3.f9363v.setIsLongpressEnabled(true);
                    return;
                }
                if (overScroller.computeScrollOffset()) {
                    bVar3.c(new el.c(new ScaledPoint(overScroller.getCurrX(), overScroller.getCurrY()), 2));
                    Intrinsics.checkNotNullParameter(this, "action");
                    j0 j0Var = bVar3.f10085d;
                    Intrinsics.checkNotNullParameter(this, "action");
                    ZoomLayoutFixed zoomLayoutFixed = ((ZoomEngine) j0Var.f1016e).f6622c;
                    if (zoomLayoutFixed != null) {
                        zoomLayoutFixed.postOnAnimation(this);
                        return;
                    } else {
                        Intrinsics.throwUninitializedPropertyAccessException("container");
                        throw null;
                    }
                }
                return;
            case 16:
                ((hk.i) this.f60e).performLongClick();
                return;
            case 17:
                ((hn.f) this.f60e).f();
                return;
            case 18:
                androidx.appcompat.app.a aVar2 = (androidx.appcompat.app.a) this.f60e;
                if ((aVar2.f787w0 & 1) != 0) {
                    aVar2.N(0);
                }
                if ((aVar2.f787w0 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0) {
                    aVar2.N(108);
                }
                aVar2.f786v0 = false;
                aVar2.f787w0 = 0;
                return;
            case 19:
                e0 e0Var = (e0) this.f60e;
                Window.Callback callback = e0Var.f10303b;
                Menu t5 = e0Var.t();
                n.j jVar = t5 instanceof n.j ? (n.j) t5 : null;
                if (jVar != null) {
                    jVar.w();
                }
                try {
                    t5.clear();
                    if (callback.onCreatePanelMenu(0, t5)) {
                        if (!callback.onPreparePanel(0, null, t5)) {
                        }
                        if (jVar == null) {
                            jVar.v();
                            return;
                        }
                        return;
                    }
                    t5.clear();
                    if (jVar == null) {
                    }
                } finally {
                    if (jVar != null) {
                        jVar.v();
                    }
                }
            case 20:
                ((i0) this.f60e).d();
                return;
            case 21:
                c();
                return;
            case 22:
                v5 v5Var = (v5) this.f60e;
                String cacheDirPath = v5Var.getCacheDirPath();
                if (cacheDirPath == null) {
                    v5Var.getLogger().u(SentryLevel.INFO, "Cache dir is not set, not moving the previous session.", new Object[0]);
                    return;
                }
                if (!v5Var.isEnableAutoSessionTracking()) {
                    v5Var.getLogger().u(SentryLevel.DEBUG, "Session tracking is disabled, bailing from previous session mover.", new Object[0]);
                    return;
                }
                io.sentry.cache.d envelopeDiskCache = v5Var.getEnvelopeDiskCache();
                if (envelopeDiskCache instanceof io.sentry.cache.c) {
                    int i6 = io.sentry.cache.c.G;
                    io.sentry.cache.c cVar2 = (io.sentry.cache.c) envelopeDiskCache;
                    cVar2.d(new File(cacheDirPath, "session.json"), new File(cacheDirPath, "previous_session.json"));
                    cVar2.f11435w.countDown();
                    return;
                }
                return;
            case 23:
                io.sentry.logger.c cVar3 = (io.sentry.logger.c) this.f60e;
                do {
                    cVar3.e();
                } while (cVar3.f11659v.size() >= 100);
                a = cVar3.f11662y.a();
                try {
                    if (!cVar3.f11659v.isEmpty()) {
                        cVar3.h(false);
                    }
                    a.close();
                    return;
                } finally {
                }
            case 24:
                io.sentry.logger.c cVar4 = (io.sentry.logger.c) this.f60e;
                do {
                    cVar4.d();
                } while (cVar4.f11659v.size() >= 1000);
                a = cVar4.f11662y.a();
                try {
                    if (!cVar4.f11659v.isEmpty()) {
                        cVar4.g(false);
                    }
                    a.close();
                    return;
                } finally {
                }
            case 25:
                d();
                return;
            case 26:
                ll.a aVar3 = (ll.a) this.f60e;
                if (aVar3.f14082f) {
                    aVar3.f14078b.sendBroadcast(new Intent("com.amazon.tv.networkmonitor.CONNECTIVITY_CHECK"));
                    aVar3.f14081e.postDelayed(aVar3.f14080d, 10000L);
                    return;
                }
                return;
            case 27:
                m8.b bVar4 = (m8.b) this.f60e;
                AtomicInteger atomicInteger = bVar4.f14406x;
                String str = bVar4.f14401d;
                LinkedBlockingQueue linkedBlockingQueue = bVar4.f14404v;
                try {
                    Runnable runnable = (Runnable) linkedBlockingQueue.poll();
                    if (runnable != null) {
                        runnable.run();
                    } else {
                        int i10 = m8.b.E;
                        p8.a.q("%s: Worker has nothing to run", str, m8.b.class);
                    }
                    int decrementAndGet = atomicInteger.decrementAndGet();
                    if (!linkedBlockingQueue.isEmpty()) {
                        bVar4.f();
                        return;
                    } else {
                        int i11 = m8.b.E;
                        p8.a.o(m8.b.class, "%s: worker finished; %d workers left", str, Integer.valueOf(decrementAndGet));
                        return;
                    }
                } finally {
                    int decrementAndGet2 = atomicInteger.decrementAndGet();
                    if (linkedBlockingQueue.isEmpty()) {
                        int i12 = m8.b.E;
                        p8.a.o(m8.b.class, "%s: worker finished; %d workers left", str, Integer.valueOf(decrementAndGet2));
                    } else {
                        bVar4.f();
                    }
                }
            case 28:
                e();
                return;
            default:
                CheckableImageButton checkableImageButton = ((TextInputLayout) this.f60e).f6122i.f15920y;
                checkableImageButton.performClick();
                checkableImageButton.jumpDrawablesToCurrentState();
                return;
        }
    }
}
