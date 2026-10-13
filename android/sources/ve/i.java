package ve;

import a5.s;
import android.content.Context;
import android.content.Intent;
import android.graphics.ColorSpace;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.ResultReceiver;
import android.text.TextUtils;
import android.view.View;
import android.view.WindowInsetsController;
import android.widget.LinearLayout;
import androidx.activity.result.ActivityResultCallback;
import androidx.appcompat.widget.i1;
import androidx.appcompat.widget.n;
import androidx.appcompat.widget.z2;
import androidx.core.view.z;
import c5.m;
import c5.q;
import com.android.billingclient.api.ProxyBillingActivityV2;
import com.discord.R;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.common.ImageDecodeOptions;
import com.facebook.imagepipeline.image.EncodedImage;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.gms.auth.api.signin.GoogleSignInOptions;
import com.google.android.gms.internal.play_billing.v0;
import com.google.common.util.concurrent.SettableFuture;
import ie.f0;
import ie.h0;
import ie.k0;
import ie.s0;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.android.core.j0;
import io.sentry.android.core.p0;
import io.sentry.j2;
import io.sentry.u4;
import io.sentry.v5;
import io.sentry.x0;
import io.sentry.x3;
import io.sentry.y1;
import io.sentry.y2;
import io.sentry.y3;
import java.io.File;
import java.io.IOException;
import java.net.CookieHandler;
import java.net.InetAddress;
import java.net.URI;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Calendar;
import java.util.Collection;
import java.util.Collections;
import java.util.Currency;
import java.util.Date;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.TimeZone;
import java.util.UUID;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicIntegerArray;
import java.util.concurrent.locks.ReentrantLock;
import java.util.zip.GZIPInputStream;
import javax.inject.Provider;
import jc.n0;
import jc.p;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.m0;
import kotlin.collections.u0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import kotlin.text.x;
import lh.y;
import n.b0;
import n.u;
import okhttp3.Call;
import okhttp3.Cookie;
import okhttp3.CookieJar;
import okhttp3.HttpUrl;
import okhttp3.Response;
import org.json.JSONException;

/* loaded from: classes3.dex */
public final class i implements ActivityResultCallback, u, z2, yb.b, h5.j, i1, io.sentry.i1, y3, y2, ma.b, ps.h, CookieJar, f0 {

    /* renamed from: e, reason: collision with root package name */
    public static i f19404e;

    /* renamed from: d, reason: collision with root package name */
    public final Object f19405d;

    public /* synthetic */ i(Object obj) {
        this.f19405d = obj;
    }

    public static synchronized i t(Context context) {
        i iVar;
        synchronized (i.class) {
            Context applicationContext = context.getApplicationContext();
            synchronized (i.class) {
                iVar = f19404e;
                if (iVar == null) {
                    iVar = new i(applicationContext);
                    f19404e = iVar;
                }
            }
            return iVar;
        }
        return iVar;
    }

    @Override // io.sentry.y2
    public String C() {
        return null;
    }

    @Override // io.sentry.y2
    public y2 C0(String str) {
        ((ArrayDeque) this.f19405d).add(str);
        return this;
    }

    @Override // io.sentry.y2
    public y2 H(boolean z5) {
        i(Boolean.valueOf(z5));
        return this;
    }

    @Override // io.sentry.y2
    public y2 O() {
        i(((ArrayDeque) this.f19405d).removeLast());
        return this;
    }

    @Override // io.sentry.i1
    public boolean a() {
        return u4.d().c(((v5) this.f19405d).getFatalLogger());
    }

    @Override // io.sentry.y2
    public y2 a0(Number number) {
        i(number);
        return this;
    }

    @Override // n.u
    public void b(n.j jVar, boolean z5) {
        if (jVar instanceof b0) {
            ((b0) jVar).f14623z.k().c(false);
        }
        u uVar = ((n) this.f19405d).f1043w;
        if (uVar != null) {
            uVar.b(jVar, z5);
        }
    }

    public void c(p0 p0Var) {
        ((j0) this.f19405d).getClass();
        int i5 = Build.VERSION.SDK_INT;
        if (i5 < 26 || i5 > 28) {
            return;
        }
        String callingPackage = p0Var.getCallingPackage();
        String packageName = p0Var.getContext().getPackageName();
        if (callingPackage == null || !callingPackage.equals(packageName)) {
            throw new SecurityException("Provider does not allow for granting of Uri permissions");
        }
    }

    public void d(Exception exc) {
        ke.b.s("MediaCodecAudioRenderer", "Audio sink error", exc);
        e4.c cVar = ((n0) this.f19405d).f12577d1;
        Handler handler = (Handler) cVar.f7939e;
        if (handler != null) {
            handler.post(new p(cVar, exc, 1));
        }
    }

    public void e(m mVar, q qVar, v0 v0Var) {
        mVar.markDelivered();
        mVar.addMarker("post-response");
        ((af.n) this.f19405d).execute(new s(mVar, qVar, v0Var, 3));
    }

    @Override // androidx.activity.result.ActivityResultCallback
    public void f(Object obj) {
        ProxyBillingActivityV2 proxyBillingActivityV2 = (ProxyBillingActivityV2) this.f19405d;
        f.a aVar = (f.a) obj;
        proxyBillingActivityV2.getClass();
        Intent intent = aVar.f8287e;
        int i5 = aVar.f8286d;
        Bundle extras = intent == null ? null : intent.getExtras();
        if (i5 != -1) {
            if (extras == null) {
                extras = new Bundle();
            }
            com.google.android.gms.internal.play_billing.s.h("ProxyBillingActivityV2", "Launch external link flow finished with resultCode: " + i5);
            extras.putInt("INTERNAL_LOG_ERROR_REASON", 134);
            extras.putString("INTERNAL_LOG_ERROR_ADDITIONAL_DETAILS", "Launch external link flow finished with error resultCode: " + i5);
        }
        int i6 = com.google.android.gms.internal.play_billing.s.e(intent, "ProxyBillingActivityV2").a;
        ResultReceiver resultReceiver = proxyBillingActivityV2.H;
        if (resultReceiver != null) {
            resultReceiver.send(i6, extras);
        } else {
            com.google.android.gms.internal.play_billing.s.h("ProxyBillingActivityV2", "Launch external link flow result receiver is null");
        }
        if (i6 != 0) {
            com.google.android.gms.internal.play_billing.s.h("ProxyBillingActivityV2", "Launch external link flow finished with billing responseCode: " + i6);
        }
        proxyBillingActivityV2.finish();
    }

    @Override // io.sentry.y2
    public y2 g(long j) {
        i(Long.valueOf(j));
        return this;
    }

    @Override // javax.inject.Provider
    public Object get() {
        return new dc.j((Context) ((Provider) this.f19405d).get(), "com.google.android.datatransport.events", Integer.valueOf(dc.j.f7483v).intValue());
    }

    @Override // n.u
    public boolean h(n.j jVar) {
        n nVar = (n) this.f19405d;
        if (jVar == nVar.f1041i) {
            return false;
        }
        nVar.V = ((b0) jVar).A.a;
        u uVar = nVar.f1043w;
        if (uVar != null) {
            return uVar.h(jVar);
        }
        return false;
    }

    public void i(Object obj) {
        ArrayDeque arrayDeque = (ArrayDeque) this.f19405d;
        Object peekLast = arrayDeque.peekLast();
        if (peekLast instanceof List) {
            ((List) peekLast).add(obj);
            return;
        }
        if (!(peekLast instanceof String)) {
            throw new IllegalStateException("Invalid stack state, expected array or string on top");
        }
        String str = (String) arrayDeque.removeLast();
        Object peekLast2 = arrayDeque.peekLast();
        if (peekLast2 == null) {
            throw new IllegalStateException("Stack is empty.");
        }
        if (!(peekLast2 instanceof Map)) {
            throw new IllegalStateException("Stack element is not a Map.");
        }
        ((Map) peekLast2).put(str, obj);
    }

    public void j() {
        ds.j jVar = (ds.j) this.f19405d;
        jVar.getClass();
        ds.e eVar = ds.e.f7718c;
        byte[] array = jVar.f7733c.array();
        Intrinsics.checkNotNullExpressionValue(array, "array(...)");
        eVar.getClass();
        Intrinsics.checkNotNullParameter(array, "array");
        Intrinsics.checkNotNullParameter(array, "array");
        synchronized (eVar) {
            try {
                int i5 = eVar.f7720b;
                if (array.length + i5 < ds.d.a) {
                    eVar.f7720b = i5 + (array.length / 2);
                    eVar.a.addLast(array);
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // io.sentry.y3
    public x3 k(x0 x0Var, v5 v5Var) {
        d9.a.L(x0Var, "Scopes are required");
        d9.a.L(v5Var, "SentryOptions is required");
        String outboxPath = ((com.discord.crash_reporting.b) this.f19405d).f4134d.getOutboxPath();
        if (outboxPath == null || !y3.y(outboxPath, v5Var.getLogger())) {
            v5Var.getLogger().u(SentryLevel.ERROR, "No outbox dir path is defined in options.", new Object[0]);
            return null;
        }
        return new x3(v5Var.getLogger(), outboxPath, new io.sentry.z2(x0Var, v5Var.getEnvelopeReader(), v5Var.getSerializer(), v5Var.getLogger(), v5Var.getFlushTimeoutMillis(), v5Var.getMaxQueueSize()), new File(outboxPath));
    }

    @Override // ie.f0
    public bd.f l(h0 h0Var, long j, long j5, IOException iOException, int i5) {
        ie.n0 n0Var = (ie.n0) h0Var;
        qd.h hVar = (qd.h) this.f19405d;
        a1.d dVar = hVar.O;
        long j7 = n0Var.f10697d;
        s0 s0Var = n0Var.f10700v;
        Uri uri = s0Var.f10756i;
        dVar.p(new LoadEventInfo(s0Var.f10755e, s0Var.f10757v), n0Var.f10699i, iOException, true);
        hVar.K.getClass();
        ke.b.s("DashMediaSource", "Failed to resolve time offset.", iOException);
        hVar.x(true);
        return k0.f10682w;
    }

    @Override // okhttp3.CookieJar
    public List loadForRequest(HttpUrl url) {
        y yVar;
        Intrinsics.checkNotNullParameter(url, "url");
        ArrayList arrayList = null;
        try {
            Map<String, List<String>> cookieHeaders = ((CookieHandler) this.f19405d).get(url.g(), kotlin.collections.v0.d());
            Intrinsics.checkNotNullExpressionValue(cookieHeaders, "cookieHeaders");
            for (Map.Entry<String, List<String>> entry : cookieHeaders.entrySet()) {
                String key = entry.getKey();
                List<String> value = entry.getValue();
                if ("Cookie".equalsIgnoreCase(key) || "Cookie2".equalsIgnoreCase(key)) {
                    Intrinsics.checkNotNullExpressionValue(value, "value");
                    if (value.isEmpty()) {
                        continue;
                    } else {
                        for (String header : value) {
                            if (arrayList == null) {
                                arrayList = new ArrayList();
                            }
                            Intrinsics.checkNotNullExpressionValue(header, "header");
                            ArrayList arrayList2 = new ArrayList();
                            int length = header.length();
                            int i5 = 0;
                            while (i5 < length) {
                                int f2 = qs.b.f(i5, length, header, ";,");
                                int e9 = qs.b.e('=', i5, f2, header);
                                String name = qs.b.y(i5, e9, header);
                                if (!x.o(name, "$", false)) {
                                    String value2 = e9 < f2 ? qs.b.y(e9 + 1, f2, header) : "";
                                    if (x.o(value2, "\"", false) && x.h(value2, "\"", false)) {
                                        value2 = value2.substring(1, value2.length() - 1);
                                        Intrinsics.checkNotNullExpressionValue(value2, "(this as java.lang.Strin…ing(startIndex, endIndex)");
                                    }
                                    Intrinsics.checkNotNullParameter(name, "name");
                                    if (!Intrinsics.areEqual(StringsKt.b0(name).toString(), name)) {
                                        throw new IllegalArgumentException("name is not trimmed");
                                    }
                                    Intrinsics.checkNotNullParameter(value2, "value");
                                    if (!Intrinsics.areEqual(StringsKt.b0(value2).toString(), value2)) {
                                        throw new IllegalArgumentException("value is not trimmed");
                                    }
                                    String domain = url.f16034d;
                                    Intrinsics.checkNotNullParameter(domain, "domain");
                                    String M = e4.f.M(domain);
                                    if (M == null) {
                                        throw new IllegalArgumentException(Intrinsics.stringPlus("unexpected domain: ", domain));
                                    }
                                    arrayList2.add(new Cookie(name, value2, 253402300799999L, M, "/", false, false, false, false));
                                }
                                i5 = f2 + 1;
                            }
                            arrayList.addAll(arrayList2);
                        }
                    }
                }
            }
            if (arrayList == null) {
                return m0.f13512d;
            }
            List unmodifiableList = Collections.unmodifiableList(arrayList);
            Intrinsics.checkNotNullExpressionValue(unmodifiableList, "Collections.unmodifiableList(cookies)");
            return unmodifiableList;
        } catch (IOException e10) {
            ys.n nVar = ys.n.a;
            ys.n nVar2 = ys.n.a;
            StringBuilder sb2 = new StringBuilder("Loading cookies failed for ");
            url.getClass();
            Intrinsics.checkNotNullParameter("/...", "link");
            Intrinsics.checkNotNullParameter("/...", "link");
            try {
                yVar = new y(1);
                yVar.g(url, "/...");
            } catch (IllegalArgumentException unused) {
                yVar = null;
            }
            HttpUrl b10 = yVar != null ? yVar.b() : null;
            Intrinsics.checkNotNull(b10);
            sb2.append(b10);
            String sb3 = sb2.toString();
            nVar2.getClass();
            ys.n.i(5, sb3, e10);
            return m0.f13512d;
        }
    }

    @Override // io.sentry.y2
    public y2 m(double d6) {
        i(Double.valueOf(d6));
        return this;
    }

    public void n(ILogger iLogger, Collection collection) {
        ArrayDeque arrayDeque = (ArrayDeque) this.f19405d;
        arrayDeque.add(new ArrayList());
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            r(iLogger, it.next());
        }
        i(arrayDeque.removeLast());
    }

    @Override // io.sentry.y2
    public y2 n0() {
        ((ArrayDeque) this.f19405d).addLast(new HashMap());
        return this;
    }

    public void o(ILogger iLogger, Map map) {
        ArrayDeque arrayDeque = (ArrayDeque) this.f19405d;
        arrayDeque.addLast(new HashMap());
        for (Object obj : map.keySet()) {
            if (obj instanceof String) {
                arrayDeque.add((String) obj);
                r(iLogger, map.get(obj));
            }
        }
        i(arrayDeque.removeLast());
    }

    @Override // io.sentry.y2
    public /* bridge */ /* synthetic */ y2 o0(ILogger iLogger, Object obj) {
        r(iLogger, obj);
        return this;
    }

    @Override // ps.h
    public void onFailure(Call call, IOException iOException) {
        SettableFuture settableFuture = (SettableFuture) this.f19405d;
        if (ii.m.f10832x.e(settableFuture, null, new ii.b(iOException))) {
            ii.m.e(settableFuture);
        }
    }

    @Override // ps.h
    public void onResponse(Call call, Response response) {
        SettableFuture settableFuture = (SettableFuture) this.f19405d;
        if (ii.m.f10832x.e(settableFuture, null, response)) {
            ii.m.e(settableFuture);
        }
    }

    @Override // ma.b
    public oa.c p(EncodedImage encodedImage, int i5, oa.k kVar, ImageDecodeOptions imageDecodeOptions) {
        ColorSpace colorSpace;
        aa.c imageFormat = encodedImage.getImageFormat();
        p9.c cVar = (p9.c) this.f19405d;
        Boolean bool = Boolean.FALSE;
        if (bool.booleanValue()) {
            imageDecodeOptions.getClass();
            colorSpace = encodedImage.getColorSpace();
        } else {
            imageDecodeOptions.getClass();
            colorSpace = null;
        }
        if (imageFormat == aa.b.a) {
            CloseableReference b10 = ((ra.d) cVar.f16326v).b(encodedImage, imageDecodeOptions.a, i5, colorSpace);
            try {
                b10.getClass();
                int rotationAngle = encodedImage.getRotationAngle();
                int exifOrientation = encodedImage.getExifOrientation();
                int i6 = oa.g.F;
                oa.g gVar = new oa.g(b10, kVar, rotationAngle, exifOrientation);
                gVar.A(bool, "is_rounded");
                b10.close();
                return gVar;
            } catch (Throwable th2) {
                CloseableReference.l(b10);
                throw th2;
            }
        }
        if (imageFormat == aa.b.f264c) {
            if (encodedImage.getWidth() == -1 || encodedImage.getHeight() == -1) {
                throw new ma.a("image width or height is incorrect", encodedImage);
            }
            imageDecodeOptions.getClass();
            ma.b bVar = (ma.b) cVar.f16323d;
            return bVar != null ? bVar.p(encodedImage, i5, kVar, imageDecodeOptions) : cVar.c(encodedImage, imageDecodeOptions);
        }
        if (imageFormat == aa.b.j) {
            imageDecodeOptions.getClass();
            ma.b bVar2 = (ma.b) cVar.f16324e;
            return bVar2 != null ? bVar2.p(encodedImage, i5, kVar, imageDecodeOptions) : cVar.c(encodedImage, imageDecodeOptions);
        }
        if (imageFormat != aa.b.f272m) {
            if (imageFormat != aa.c.f275c) {
                return cVar.c(encodedImage, imageDecodeOptions);
            }
            throw new ma.a("unknown image format", encodedImage);
        }
        ma.b bVar3 = (ma.b) cVar.f16325i;
        if (bVar3 != null) {
            return bVar3.p(encodedImage, i5, kVar, imageDecodeOptions);
        }
        return null;
    }

    public void q(Exception exc) {
        j4.e eVar = (j4.e) this.f19405d;
        synchronized (eVar.a) {
            try {
                if (eVar.f12418b) {
                    throw new IllegalStateException("Cannot set the error on a completed task.");
                }
                eVar.f12418b = true;
                eVar.f12421e = exc;
                eVar.a.notifyAll();
                eVar.e();
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // io.sentry.y2
    public y2 q0(Boolean bool) {
        i(bool);
        return this;
    }

    public void r(ILogger iLogger, Object obj) {
        if (obj == null) {
            i(null);
            return;
        }
        if (obj instanceof Character) {
            i(Character.toString(((Character) obj).charValue()));
            return;
        }
        if (obj instanceof String) {
            i((String) obj);
            return;
        }
        if (obj instanceof Boolean) {
            i((Boolean) obj);
            return;
        }
        if (obj instanceof Number) {
            i((Number) obj);
            return;
        }
        if (obj instanceof Date) {
            try {
                i(ki.b.F((Date) obj));
                return;
            } catch (Exception e9) {
                iLogger.k(SentryLevel.ERROR, "Error when serializing Date", e9);
                i(null);
                return;
            }
        }
        if (obj instanceof TimeZone) {
            try {
                i(((TimeZone) obj).getID());
                return;
            } catch (Exception e10) {
                iLogger.k(SentryLevel.ERROR, "Error when serializing TimeZone", e10);
                i(null);
                return;
            }
        }
        if (obj instanceof y1) {
            ((y1) obj).serialize(this, iLogger);
            return;
        }
        if (obj instanceof Collection) {
            n(iLogger, (Collection) obj);
            return;
        }
        if (obj.getClass().isArray()) {
            n(iLogger, Arrays.asList((Object[]) obj));
            return;
        }
        if (obj instanceof Map) {
            o(iLogger, (Map) obj);
            return;
        }
        if (obj instanceof Locale) {
            i(obj.toString());
            return;
        }
        if (obj instanceof AtomicIntegerArray) {
            n(iLogger, io.sentry.util.c.a((AtomicIntegerArray) obj));
            return;
        }
        if (obj instanceof AtomicBoolean) {
            i(Boolean.valueOf(((AtomicBoolean) obj).get()));
            return;
        }
        if (obj instanceof URI) {
            i(obj.toString());
            return;
        }
        if (obj instanceof InetAddress) {
            i(obj.toString());
            return;
        }
        if (obj instanceof UUID) {
            i(obj.toString());
            return;
        }
        if (obj instanceof Currency) {
            i(obj.toString());
            return;
        }
        if (obj instanceof Calendar) {
            o(iLogger, io.sentry.util.c.d((Calendar) obj));
        } else if (obj.getClass().isEnum()) {
            i(obj.toString());
        } else {
            iLogger.u(SentryLevel.WARNING, "Failed serializing unknown object.", obj);
        }
    }

    @Override // io.sentry.y2
    public y2 s(String str) {
        i(str);
        return this;
    }

    @Override // okhttp3.CookieJar
    public void saveFromResponse(HttpUrl url, List cookies) {
        y yVar;
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(cookies, "cookies");
        ArrayList arrayList = new ArrayList();
        Iterator it = cookies.iterator();
        while (it.hasNext()) {
            Cookie cookie = (Cookie) it.next();
            Intrinsics.checkNotNullParameter(cookie, "cookie");
            arrayList.add(cookie.a(true));
        }
        try {
            ((CookieHandler) this.f19405d).put(url.g(), u0.b(new Pair("Set-Cookie", arrayList)));
        } catch (IOException e9) {
            ys.n nVar = ys.n.a;
            ys.n nVar2 = ys.n.a;
            StringBuilder sb2 = new StringBuilder("Saving cookies failed for ");
            url.getClass();
            Intrinsics.checkNotNullParameter("/...", "link");
            Intrinsics.checkNotNullParameter("/...", "link");
            try {
                yVar = new y(1);
                yVar.g(url, "/...");
            } catch (IllegalArgumentException unused) {
                yVar = null;
            }
            HttpUrl b10 = yVar != null ? yVar.b() : null;
            Intrinsics.checkNotNull(b10);
            sb2.append(b10);
            String sb3 = sb2.toString();
            nVar2.getClass();
            ys.n.i(5, sb3, e9);
        }
    }

    public synchronized void u() {
        b bVar = (b) this.f19405d;
        ReentrantLock reentrantLock = bVar.a;
        reentrantLock.lock();
        try {
            bVar.f19389b.edit().clear().apply();
        } finally {
            reentrantLock.unlock();
        }
    }

    @Override // ie.f0
    public void v(h0 h0Var, long j, long j5) {
        ie.n0 n0Var = (ie.n0) h0Var;
        qd.h hVar = (qd.h) this.f19405d;
        long j7 = n0Var.f10697d;
        s0 s0Var = n0Var.f10700v;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        hVar.K.getClass();
        hVar.O.l(loadEventInfo, n0Var.f10699i);
        hVar.f16840j0 = ((Long) n0Var.f10702x).longValue() - j;
        hVar.x(true);
    }

    @Override // ie.f0
    public void z(h0 h0Var, long j, long j5, boolean z5) {
        ((qd.h) this.f19405d).w((ie.n0) h0Var);
    }

    public i(np.b kotlinJvmBinaryClass) {
        Intrinsics.checkNotNullParameter(kotlinJvmBinaryClass, "kotlinJvmBinaryClass");
        this.f19405d = kotlinJvmBinaryClass;
    }

    public i(Context context) {
        String d6;
        b a = b.a(context);
        this.f19405d = a;
        a.b();
        String d7 = a.d("defaultGoogleSignInAccount");
        if (TextUtils.isEmpty(d7) || (d6 = a.d(b.f("googleSignInOptions", d7))) == null) {
            return;
        }
        try {
            GoogleSignInOptions.h(d6);
        } catch (JSONException unused) {
        }
    }

    public i(gk.n nVar) {
        LinearLayout linearLayout = (LinearLayout) nVar.findViewById(R.id.pickerWrapper);
        this.f19405d = linearLayout;
        linearLayout.setWillNotDraw(false);
    }

    public i(CookieHandler cookieHandler) {
        Intrinsics.checkNotNullParameter(cookieHandler, "cookieHandler");
        this.f19405d = cookieHandler;
    }

    public i(Handler handler) {
        this.f19405d = new af.n(handler, 1);
    }

    public i(int i5) {
        switch (i5) {
            case 18:
                this.f19405d = new j0(j2.f11638d);
                break;
            case 19:
            default:
                this.f19405d = bk.a.f3033e;
                break;
            case 20:
                this.f19405d = new j4.e();
                break;
        }
    }

    @Override // io.sentry.y2
    public y2 f0() {
        return this;
    }

    public i(View view) {
        if (Build.VERSION.SDK_INT >= 30) {
            z zVar = new z(view);
            zVar.f1661e = view;
            this.f19405d = zVar;
            return;
        }
        this.f19405d = new u4.c(view);
    }

    public i(WindowInsetsController windowInsetsController) {
        z zVar = new z(null);
        zVar.f1662i = windowInsetsController;
        this.f19405d = zVar;
    }

    @Override // io.sentry.y2
    public void R(String str) {
    }

    @Override // io.sentry.y2
    public void x(boolean z5) {
    }

    public i(HashMap hashMap) {
        ArrayDeque arrayDeque = new ArrayDeque();
        this.f19405d = arrayDeque;
        arrayDeque.addLast(hashMap);
    }

    public i(GZIPInputStream stream) {
        Intrinsics.checkNotNullParameter(stream, "stream");
        this.f19405d = new ds.j(stream, Charsets.UTF_8);
    }
}
