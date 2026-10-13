package u4;

import android.R;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.ParcelFileDescriptor;
import android.os.ResultReceiver;
import android.os.SystemClock;
import android.view.MenuItem;
import android.view.View;
import android.view.Window;
import android.view.inputmethod.InputMethodManager;
import androidx.activity.result.ActivityResultCallback;
import androidx.appcompat.widget.h2;
import androidx.core.view.f1;
import androidx.core.view.x;
import bg.y0;
import com.android.billingclient.api.ProxyBillingActivityV2;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.google.android.gms.internal.play_billing.s;
import com.swmansion.rnscreens.Screen;
import ds.t;
import g0.k;
import hp.o;
import i.e0;
import i0.b0;
import ie.l0;
import io.sentry.SentryLevel;
import io.sentry.v5;
import io.sentry.x0;
import io.sentry.x3;
import io.sentry.y3;
import ip.f;
import ip.i;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.channels.FileChannel;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.zip.GZIPInputStream;
import java.util.zip.ZipInputStream;
import javax.inject.Provider;
import jg.d;
import ke.w;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlinx.serialization.descriptors.SerialDescriptor;
import l4.a0;
import l4.m;
import n.h;
import nd.s0;
import vp.j;
import w3.q;
import yq.y;
import ys.l;
import ze.e;

/* loaded from: classes.dex */
public class c implements ActivityResultCallback, jg.c, d, yb.b, k, ir.b, h, y3, hk.d, jt.b, h2, s0, l0 {

    /* renamed from: d, reason: collision with root package name */
    public Object f18811d;

    public /* synthetic */ c(Object obj) {
        this.f18811d = obj;
    }

    @Override // nd.s0
    public void A(long j) {
        for (s0 s0Var : (s0[]) this.f18811d) {
            s0Var.A(j);
        }
    }

    public a0 B(Context context, String str, InputStream inputStream, String str2, String str3) {
        a0 f2;
        a aVar;
        b bVar = (b) this.f18811d;
        if (str2 == null) {
            str2 = "application/json";
        }
        if (str2.contains("application/zip") || str2.contains("application/x-zip") || str2.contains("application/x-zip-compressed") || str.split("\\?")[0].endsWith(".lottie")) {
            x4.c.a();
            a aVar2 = a.ZIP;
            f2 = str3 != null ? m.f(context, new ZipInputStream(new FileInputStream(bVar.o(str, inputStream, aVar2))), str) : m.f(context, new ZipInputStream(inputStream), null);
            aVar = aVar2;
        } else if (str2.contains("application/gzip") || str2.contains("application/x-gzip") || str.split("\\?")[0].endsWith(".tgs")) {
            x4.c.a();
            aVar = a.GZIP;
            f2 = str3 != null ? m.c(new GZIPInputStream(new FileInputStream(bVar.o(str, inputStream, aVar))), str) : m.c(new GZIPInputStream(inputStream), null);
        } else {
            x4.c.a();
            aVar = a.JSON;
            f2 = str3 != null ? m.c(new FileInputStream(bVar.o(str, inputStream, aVar).getAbsolutePath()), str) : m.c(inputStream, null);
        }
        if (str3 != null && f2.a != null) {
            File file = new File(bVar.n(), b.e(str, aVar, true));
            File file2 = new File(file.getAbsolutePath().replace(".temp", ""));
            boolean renameTo = file.renameTo(file2);
            file2.toString();
            x4.c.a();
            if (!renameTo) {
                x4.c.b("Unable to rename cache file " + file.getAbsolutePath() + " to " + file2.getAbsolutePath() + ".");
            }
        }
        return f2;
    }

    public Object C(SerialDescriptor descriptor, t key) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(key, "key");
        Map map = (Map) ((ConcurrentHashMap) this.f18811d).get(descriptor);
        Object obj = map != null ? map.get(key) : null;
        if (obj == null) {
            return null;
        }
        return obj;
    }

    public void D() {
        View view = (View) this.f18811d;
        if (view != null) {
            ((InputMethodManager) view.getContext().getSystemService("input_method")).hideSoftInputFromWindow(view.getWindowToken(), 0);
        }
    }

    public void E() {
        View view;
        View view2 = (View) this.f18811d;
        if (view2 == null) {
            return;
        }
        if (view2.isInEditMode() || view2.onCheckIsTextEditor()) {
            view2.requestFocus();
            view = view2;
        } else {
            view = view2.getRootView().findFocus();
        }
        if (view == null) {
            view = view2.getRootView().findViewById(R.id.content);
        }
        if (view == null || !view.hasWindowFocus()) {
            return;
        }
        view.post(new x(0, view));
    }

    public void F() {
        ArrayDeque arrayDeque = (ArrayDeque) this.f18811d;
        if (arrayDeque.isEmpty()) {
            return;
        }
        throw new IOException("data item not completed, stackSize: " + arrayDeque.size() + " scope: " + H());
    }

    public void G(long j) {
        long H = H();
        if (H != j) {
            if (H != -1) {
                if (H != -2) {
                    return;
                } else {
                    H = -2;
                }
            }
            StringBuilder n6 = k0.d.n(j, "expected non-string scope or scope ", " but found ");
            n6.append(H);
            throw new IOException(n6.toString());
        }
    }

    public long H() {
        ArrayDeque arrayDeque = (ArrayDeque) this.f18811d;
        if (arrayDeque.isEmpty()) {
            return 0L;
        }
        return ((Long) arrayDeque.peek()).longValue();
    }

    @Override // ie.l0
    public void b() {
        qd.h hVar = (qd.h) this.f18811d;
        hVar.Y.b();
        y0 y0Var = hVar.a0;
        if (y0Var != null) {
            throw y0Var;
        }
    }

    @Override // ir.b
    public Iterable c(Object obj) {
        o oVar = (o) this.f18811d;
        Collection b10 = ((f) obj).n().b();
        Intrinsics.checkNotNullExpressionValue(b10, "getSupertypes(...)");
        ArrayList arrayList = new ArrayList();
        Iterator it = b10.iterator();
        while (it.hasNext()) {
            i a = ((y) it.next()).r0().a();
            j jVar = null;
            i a10 = a != null ? a.a() : null;
            f fVar = a10 instanceof f ? (f) a10 : null;
            if (fVar != null && (jVar = oVar.f(fVar)) == null) {
                jVar = fVar;
            }
            if (jVar != null) {
                arrayList.add(jVar);
            }
        }
        return arrayList;
    }

    @Override // jt.b
    public FileChannel d() {
        ParcelFileDescriptor parcelFileDescriptor = (ParcelFileDescriptor) this.f18811d;
        if (parcelFileDescriptor.getStatSize() != -1) {
            return new ParcelFileDescriptor.AutoCloseInputStream(parcelFileDescriptor).getChannel();
        }
        parcelFileDescriptor.close();
        throw new IllegalArgumentException("Not a file: ".concat(String.valueOf(parcelFileDescriptor)));
    }

    @Override // androidx.activity.result.ActivityResultCallback
    public void f(Object obj) {
        ProxyBillingActivityV2 proxyBillingActivityV2 = (ProxyBillingActivityV2) this.f18811d;
        f.a aVar = (f.a) obj;
        proxyBillingActivityV2.getClass();
        Intent intent = aVar.f8287e;
        int i5 = aVar.f8286d;
        Bundle extras = intent == null ? null : intent.getExtras();
        if (i5 != -1) {
            if (extras == null) {
                extras = new Bundle();
            }
            s.h("ProxyBillingActivityV2", "External offer flow finished with resultCode: " + i5);
            extras.putInt("INTERNAL_LOG_ERROR_REASON", 134);
            extras.putString("INTERNAL_LOG_ERROR_ADDITIONAL_DETAILS", "External offer flow finished with error resultCode: " + i5);
        }
        int i6 = s.e(intent, "ProxyBillingActivityV2").a;
        ResultReceiver resultReceiver = proxyBillingActivityV2.G;
        if (resultReceiver != null) {
            resultReceiver.send(i6, extras);
        } else {
            s.h("ProxyBillingActivityV2", "External offer flow result receiver is null");
        }
        if (i6 != 0) {
            s.h("ProxyBillingActivityV2", "External offer flow finished with billing responseCode: " + i6);
        }
        proxyBillingActivityV2.finish();
    }

    @Override // androidx.appcompat.widget.h2
    public void g(n.j jVar, MenuItem menuItem) {
        ((n.d) this.f18811d).f14630x.removeCallbacksAndMessages(jVar);
    }

    @Override // javax.inject.Provider
    public Object get() {
        String packageName = ((Context) ((Provider) this.f18811d).get()).getPackageName();
        if (packageName != null) {
            return packageName;
        }
        throw new NullPointerException("Cannot return null from a non-@Nullable @Provides method");
    }

    @Override // nd.s0
    public long h() {
        long j = Long.MAX_VALUE;
        for (s0 s0Var : (s0[]) this.f18811d) {
            long h6 = s0Var.h();
            if (h6 != Long.MIN_VALUE) {
                j = Math.min(j, h6);
            }
        }
        if (j == LongCompanionObject.MAX_VALUE) {
            return Long.MIN_VALUE;
        }
        return j;
    }

    @Override // n.h
    public boolean i(n.j jVar, MenuItem menuItem) {
        return false;
    }

    @Override // io.sentry.y3
    public x3 k(x0 x0Var, v5 v5Var) {
        d9.a.L(x0Var, "Scopes are required");
        d9.a.L(v5Var, "SentryOptions is required");
        String cacheDirPath = ((com.discord.crash_reporting.b) this.f18811d).f4134d.getCacheDirPath();
        if (cacheDirPath == null || !y3.y(cacheDirPath, v5Var.getLogger())) {
            v5Var.getLogger().u(SentryLevel.ERROR, "No cache dir path is defined in options.", new Object[0]);
            return null;
        }
        return new x3(v5Var.getLogger(), cacheDirPath, new io.sentry.a0(x0Var, v5Var.getSerializer(), v5Var.getLogger(), v5Var.getFlushTimeoutMillis(), v5Var.getMaxQueueSize()), new File(cacheDirPath));
    }

    @Override // g0.k
    public long l() {
        b0 b0Var = (b0) this.f18811d;
        return l.a(b0Var.f9081d, b0Var.f9082e);
    }

    @Override // nd.s0
    public boolean o(long j) {
        boolean z5;
        boolean z6 = false;
        do {
            long h6 = h();
            if (h6 == Long.MIN_VALUE) {
                return z6;
            }
            z5 = false;
            for (s0 s0Var : (s0[]) this.f18811d) {
                long h7 = s0Var.h();
                boolean z7 = h7 != Long.MIN_VALUE && h7 <= j;
                if (h7 == h6 || z7) {
                    z5 |= s0Var.o(j);
                }
            }
            z6 |= z5;
        } while (z5);
        return z6;
    }

    @Override // jg.c
    public void onFailure(Exception exc) {
        ye.b bVar;
        if ((exc instanceof e) && (bVar = ((e) exc).f21197d.f5660v) != null && bVar.f20906e == 24) {
            ((com.google.android.gms.net.b) this.f18811d).f5904b.set(SystemClock.elapsedRealtime());
        }
    }

    @Override // jg.d
    public /* synthetic */ void onSuccess(Object obj) {
        ((com.margelo.nitro.playagerangedeclaration.c) this.f18811d).invoke(obj);
    }

    @Override // nd.s0
    public boolean q() {
        for (s0 s0Var : (s0[]) this.f18811d) {
            if (s0Var.q()) {
                return true;
            }
        }
        return false;
    }

    @Override // g0.k
    public k r() {
        ((b0) this.f18811d).E.I();
        throw new IllegalStateException("LayoutCoordinate operations are only valid when isAttached is true");
    }

    @Override // g0.k
    public q t(k sourceCoordinates) {
        Intrinsics.checkNotNullParameter(sourceCoordinates, "sourceCoordinates");
        ((b0) this.f18811d).E.t(sourceCoordinates);
        throw null;
    }

    @Override // n.h
    public void v(n.j jVar) {
        e0 e0Var = (e0) this.f18811d;
        Window.Callback callback = e0Var.f10303b;
        if (e0Var.a.a.o()) {
            callback.onPanelClosed(108, jVar);
        } else if (callback.onPreparePanel(0, null, jVar)) {
            callback.onMenuOpened(108, jVar);
        }
    }

    @Override // nd.s0
    public long w() {
        long j = Long.MAX_VALUE;
        for (s0 s0Var : (s0[]) this.f18811d) {
            long w5 = s0Var.w();
            if (w5 != Long.MIN_VALUE) {
                j = Math.min(j, w5);
            }
        }
        if (j == LongCompanionObject.MAX_VALUE) {
            return Long.MIN_VALUE;
        }
        return j;
    }

    @Override // androidx.appcompat.widget.h2
    public void x(n.j jVar, n.l lVar) {
        n.d dVar = (n.d) this.f18811d;
        Handler handler = dVar.f14630x;
        handler.removeCallbacksAndMessages(null);
        ArrayList arrayList = dVar.E;
        int size = arrayList.size();
        int i5 = 0;
        while (true) {
            if (i5 >= size) {
                i5 = -1;
                break;
            } else if (jVar == ((n.c) arrayList.get(i5)).f14624b) {
                break;
            } else {
                i5++;
            }
        }
        if (i5 == -1) {
            return;
        }
        int i6 = i5 + 1;
        handler.postAtTime(new f1(this, i6 < arrayList.size() ? (n.c) arrayList.get(i6) : null, lVar, jVar), jVar, SystemClock.uptimeMillis() + 200);
    }

    public void z(float f2, boolean z5, boolean z6) {
        Screen screen = (Screen) this.f18811d;
        float c6 = yo.j.c(f2, 0.0f, 1.0f);
        short s2 = (short) (c6 == 0.0f ? 1 : c6 == 1.0f ? 2 : 3);
        EventDispatcher reactEventDispatcher = screen.getReactEventDispatcher();
        if (reactEventDispatcher != null) {
            reactEventDispatcher.dispatchEvent(new om.d(UIManagerHelper.getSurfaceId(screen), screen.getId(), c6, z5, z6, s2));
        }
    }

    public c(int i5) {
        switch (i5) {
            case 9:
                this.f18811d = new ConcurrentHashMap(16);
                break;
            case 18:
                this.f18811d = new io.sentry.transport.q();
                break;
            case 28:
                this.f18811d = new w(10);
                break;
            default:
                this.f18811d = new ArrayDeque(16);
                break;
        }
    }
}
