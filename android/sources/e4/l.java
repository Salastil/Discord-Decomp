package e4;

import a5.a0;
import ad.b0;
import ad.c0;
import ad.d0;
import ad.e0;
import ad.g0;
import android.app.Activity;
import android.app.PendingIntent;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ServiceInfo;
import android.content.res.Resources;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.util.Log;
import android.util.SparseArray;
import androidx.work.impl.WorkDatabase_Impl;
import c5.s;
import c5.v;
import com.discord.js_watchdog.SharedPreferencesKey;
import com.facebook.imagepipeline.common.ImageDecodeOptions;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.react.bridge.Promise;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.modules.core.PermissionListener;
import com.google.android.datatransport.cct.CctBackendFactory;
import com.google.android.datatransport.runtime.backends.TransportBackendDiscovery;
import com.google.android.exoplayer2.video.VideoSize;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.android.play.core.common.PlayCoreDialogWrapperActivity;
import com.google.android.play.core.review.ReviewManager;
import cq.k0;
import cq.l0;
import cq.m0;
import cq.n0;
import io.sentry.SentryLevel;
import io.sentry.c5;
import io.sentry.k4;
import io.sentry.o4;
import io.sentry.p6;
import io.sentry.v4;
import io.sentry.v5;
import io.sentry.y4;
import j$.util.DesugarTimeZone;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.lang.reflect.InvocationTargetException;
import java.net.MalformedURLException;
import java.net.SocketTimeoutException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Date;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.TreeMap;
import java.util.concurrent.Callable;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicLong;
import ke.w;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.json.JSONException;
import org.json.JSONObject;
import th.q0;
import th.r0;
import th.s0;
import th.t0;
import th.u0;
import th.u1;
import th.v0;
import yq.y;

/* loaded from: classes.dex */
public final class l implements b0, wd.e, ReviewManager, OnCompleteListener, eq.g, io.sentry.clientreport.f, PermissionListener, u0, ma.b, jg.f {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7958d;

    /* renamed from: e, reason: collision with root package name */
    public Object f7959e;

    /* renamed from: i, reason: collision with root package name */
    public Object f7960i;

    public /* synthetic */ l(int i5) {
        this.f7958d = i5;
    }

    public static /* synthetic */ void m(int i5) {
        String str = (i5 == 4 || i5 == 5 || i5 == 6 || i5 == 7) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 4 || i5 == 5 || i5 == 6 || i5 == 7) ? 2 : 3];
        switch (i5) {
            case 1:
                objArr[0] = "valueParameters";
                break;
            case 2:
                objArr[0] = "typeParameters";
                break;
            case 3:
                objArr[0] = "signatureErrors";
                break;
            case 4:
            case 5:
            case 6:
            case 7:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/load/java/components/SignaturePropagator$PropagatedSignature";
                break;
            default:
                objArr[0] = "returnType";
                break;
        }
        if (i5 == 4) {
            objArr[1] = "getReturnType";
        } else if (i5 == 5) {
            objArr[1] = "getValueParameters";
        } else if (i5 == 6) {
            objArr[1] = "getTypeParameters";
        } else if (i5 != 7) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/load/java/components/SignaturePropagator$PropagatedSignature";
        } else {
            objArr[1] = "getErrors";
        }
        if (i5 != 4 && i5 != 5 && i5 != 6 && i5 != 7) {
            objArr[2] = "<init>";
        }
        String format = String.format(str, objArr);
        if (i5 != 4 && i5 != 5 && i5 != 6 && i5 != 7) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    public static io.sentry.l t(v4 v4Var) {
        return v4.Event.equals(v4Var) ? io.sentry.l.Error : v4.Session.equals(v4Var) ? io.sentry.l.Session : v4.Transaction.equals(v4Var) ? io.sentry.l.Transaction : v4.UserFeedback.equals(v4Var) ? io.sentry.l.UserReport : v4.Feedback.equals(v4Var) ? io.sentry.l.Feedback : v4.Profile.equals(v4Var) ? io.sentry.l.Profile : v4.ProfileChunk.equals(v4Var) ? io.sentry.l.ProfileChunkUi : v4.Attachment.equals(v4Var) ? io.sentry.l.Attachment : v4.CheckIn.equals(v4Var) ? io.sentry.l.Monitor : v4.ReplayVideo.equals(v4Var) ? io.sentry.l.Replay : v4.Log.equals(v4Var) ? io.sentry.l.LogItem : v4.Span.equals(v4Var) ? io.sentry.l.Span : v4.TraceMetric.equals(v4Var) ? io.sentry.l.TraceMetric : io.sentry.l.Default;
    }

    @Override // wd.e
    public int A() {
        return ((ArrayList) this.f7960i).size();
    }

    public int B() {
        return ((int[]) this.f7960i).length - 1;
    }

    public int C(String str) {
        Integer intOrNull;
        ConcurrentHashMap concurrentHashMap = (ConcurrentHashMap) this.f7960i;
        Object obj = concurrentHashMap.get(str);
        if (obj == null) {
            Uri parse = Uri.parse(str);
            Intrinsics.checkNotNullExpressionValue(parse, "parse(...)");
            if (!"res".equals(w8.a.b(parse)) && !"android.resource".equals(w8.a.b(parse))) {
                throw new IllegalStateException(("Unsupported uri " + parse).toString());
            }
            List<String> pathSegments = parse.getPathSegments();
            Intrinsics.checkNotNullExpressionValue(pathSegments, "getPathSegments(...)");
            String str2 = (String) CollectionsKt.S(pathSegments);
            if (str2 == null || (intOrNull = StringsKt.toIntOrNull(str2)) == null) {
                throw new IllegalStateException(("Unable to read resource ID from " + parse.getPath()).toString());
            }
            concurrentHashMap.put(str, intOrNull);
            obj = intOrNull;
        }
        return ((Number) obj).intValue();
    }

    public void D(aj.b bVar) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("Fid", bVar.a);
            jSONObject.put("Status", f0.e.b(bVar.f641b));
            jSONObject.put("AuthToken", bVar.f642c);
            jSONObject.put("RefreshToken", bVar.f643d);
            jSONObject.put("TokenCreationEpochInSecs", bVar.f645f);
            jSONObject.put("ExpiresInSecs", bVar.f644e);
            jSONObject.put("FisError", bVar.f646g);
            ki.g gVar = (ki.g) this.f7960i;
            gVar.a();
            File createTempFile = File.createTempFile("PersistedInstallation", "tmp", gVar.a.getFilesDir());
            FileOutputStream fileOutputStream = new FileOutputStream(createTempFile);
            fileOutputStream.write(jSONObject.toString().getBytes("UTF-8"));
            fileOutputStream.close();
            if (createTempFile.renameTo(z())) {
            } else {
                throw new IOException("unable to rename the tmpfile to PersistedInstallation");
            }
        } catch (IOException | JSONException unused) {
        }
    }

    public boolean E() {
        return ((int[]) this.f7960i)[0] == 0;
    }

    public l F(int i5) {
        int[] iArr = (int[]) this.f7960i;
        bk.a aVar = (bk.a) this.f7959e;
        if (i5 == 0) {
            return aVar.f3035c;
        }
        if (i5 == 1) {
            return this;
        }
        int length = iArr.length;
        int[] iArr2 = new int[length];
        for (int i6 = 0; i6 < length; i6++) {
            iArr2[i6] = aVar.c(iArr[i6], i5);
        }
        return new l(aVar, iArr2);
    }

    public l G(l lVar) {
        bk.a aVar = (bk.a) this.f7959e;
        if (!aVar.equals((bk.a) lVar.f7959e)) {
            throw new IllegalArgumentException("ModulusPolys do not have same ModulusGF field");
        }
        if (E() || lVar.E()) {
            return aVar.f3035c;
        }
        int[] iArr = (int[]) this.f7960i;
        int length = iArr.length;
        int[] iArr2 = (int[]) lVar.f7960i;
        int length2 = iArr2.length;
        int[] iArr3 = new int[(length + length2) - 1];
        for (int i5 = 0; i5 < length; i5++) {
            int i6 = iArr[i5];
            for (int i10 = 0; i10 < length2; i10++) {
                int i11 = i5 + i10;
                iArr3[i11] = aVar.a(iArr3[i11], aVar.c(i6, iArr2[i10]));
            }
        }
        return new l(aVar, iArr3);
    }

    /* JADX WARN: Removed duplicated region for block: B:51:0x00d9  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x01cd A[LOOP:0: B:2:0x0004->B:56:0x01cd, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:57:0x01e9 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:63:0x00e9  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public c5.h H(c5.m mVar) {
        Object obj;
        r rVar;
        String str;
        int timeoutMs;
        int i5;
        Map map;
        long elapsedRealtime = SystemClock.elapsedRealtime();
        while (true) {
            d5.a aVar = null;
            try {
                c5.b cacheEntry = mVar.getCacheEntry();
                if (cacheEntry == null) {
                    try {
                        map = Collections.EMPTY_MAP;
                    } catch (IOException e9) {
                        e = e9;
                        e = e;
                        obj = null;
                        if (e instanceof SocketTimeoutException) {
                        }
                        str = (String) rVar.f8000e;
                        c5.r retryPolicy = mVar.getRetryPolicy();
                        timeoutMs = mVar.getTimeoutMs();
                        try {
                            s sVar = (s) rVar.f8001i;
                            c5.e eVar = (c5.e) retryPolicy;
                            i5 = eVar.f3329c + 1;
                            eVar.f3329c = i5;
                            int i6 = eVar.f3328b;
                            eVar.f3328b = i6 + ((int) (i6 * 1.0f));
                            if (i5 > 1) {
                            }
                        } catch (s e10) {
                            mVar.addMarker(str + "-timeout-giveup [timeout=" + timeoutMs + "]");
                            throw e10;
                        }
                    }
                } else {
                    HashMap hashMap = new HashMap();
                    String str2 = cacheEntry.f3314b;
                    if (str2 != null) {
                        hashMap.put("If-None-Match", str2);
                    }
                    long j = cacheEntry.f3316d;
                    if (j > 0) {
                        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("EEE, dd MMM yyyy HH:mm:ss 'GMT'", Locale.US);
                        simpleDateFormat.setTimeZone(DesugarTimeZone.getTimeZone("GMT"));
                        hashMap.put("If-Modified-Since", simpleDateFormat.format(new Date(j)));
                    }
                    map = hashMap;
                }
                try {
                    d5.a h6 = ((j8.b) this.f7959e).h(mVar, map);
                    try {
                        int i10 = h6.a;
                        List unmodifiableList = Collections.unmodifiableList(h6.f7416b);
                        if (i10 == 304) {
                            SystemClock.elapsedRealtime();
                            return ks.n.n(mVar, unmodifiableList);
                        }
                        InputStream inputStream = (InputStream) h6.f7418d;
                        if (inputStream == null) {
                            inputStream = null;
                        }
                        byte[] q5 = inputStream != null ? ks.n.q(inputStream, h6.f7417c, (d5.a) this.f7960i) : new byte[0];
                        long elapsedRealtime2 = SystemClock.elapsedRealtime() - elapsedRealtime;
                        if (v.a || elapsedRealtime2 > 3000) {
                            v.b("HTTP response for request=<%s> [lifetime=%d], [size=%s], [rc=%d], [retryCount=%s]", mVar, Long.valueOf(elapsedRealtime2), q5 != null ? Integer.valueOf(q5.length) : "null", Integer.valueOf(i10), Integer.valueOf(((c5.e) mVar.getRetryPolicy()).f3329c));
                        }
                        if (i10 < 200 || i10 > 299) {
                            throw new IOException();
                        }
                        SystemClock.elapsedRealtime();
                        return new c5.h(q5, false, unmodifiableList);
                    } catch (IOException e11) {
                        e = e11;
                        obj = null;
                        aVar = h6;
                        if (e instanceof SocketTimeoutException) {
                            rVar = new r(7, "socket", new c5.a());
                        } else {
                            if (e instanceof MalformedURLException) {
                                throw new RuntimeException("Bad URL " + mVar.getUrl(), e);
                            }
                            if (aVar != null) {
                                int i11 = aVar.a;
                                v.c("Unexpected response code %d for %s", Integer.valueOf(i11), mVar.getUrl());
                                if (obj != null) {
                                    List<c5.f> unmodifiableList2 = Collections.unmodifiableList(aVar.f7416b);
                                    SystemClock.elapsedRealtime();
                                    if (unmodifiableList2 != null) {
                                        if (unmodifiableList2.isEmpty()) {
                                            Map map2 = Collections.EMPTY_MAP;
                                        } else {
                                            TreeMap treeMap = new TreeMap(String.CASE_INSENSITIVE_ORDER);
                                            for (c5.f fVar : unmodifiableList2) {
                                                treeMap.put(fVar.a, fVar.f3330b);
                                            }
                                        }
                                    }
                                    if (unmodifiableList2 != null) {
                                        Collections.unmodifiableList(unmodifiableList2);
                                    }
                                    if (i11 == 401 || i11 == 403) {
                                        rVar = new r(7, "auth", new c5.a());
                                    } else {
                                        if (i11 >= 400 && i11 <= 499) {
                                            throw new c5.d();
                                        }
                                        if (i11 < 500 || i11 > 599 || !mVar.shouldRetryServerErrors()) {
                                            throw new c5.a();
                                        }
                                        rVar = new r(7, "server", new c5.a());
                                    }
                                } else {
                                    rVar = new r(7, "network", new c5.a());
                                }
                            } else {
                                if (!mVar.shouldRetryConnectionErrors()) {
                                    throw new c5.i(e);
                                }
                                rVar = new r(7, "connection", new c5.i());
                            }
                        }
                        str = (String) rVar.f8000e;
                        c5.r retryPolicy2 = mVar.getRetryPolicy();
                        timeoutMs = mVar.getTimeoutMs();
                        s sVar2 = (s) rVar.f8001i;
                        c5.e eVar2 = (c5.e) retryPolicy2;
                        i5 = eVar2.f3329c + 1;
                        eVar2.f3329c = i5;
                        int i62 = eVar2.f3328b;
                        eVar2.f3328b = i62 + ((int) (i62 * 1.0f));
                        if (i5 > 1) {
                            throw sVar2;
                        }
                        mVar.addMarker(str + "-retry [timeout=" + timeoutMs + "]");
                    }
                } catch (IOException e12) {
                    e = e12;
                    e = e;
                    obj = null;
                    if (e instanceof SocketTimeoutException) {
                    }
                    str = (String) rVar.f8000e;
                    c5.r retryPolicy22 = mVar.getRetryPolicy();
                    timeoutMs = mVar.getTimeoutMs();
                    s sVar22 = (s) rVar.f8001i;
                    c5.e eVar22 = (c5.e) retryPolicy22;
                    i5 = eVar22.f3329c + 1;
                    eVar22.f3329c = i5;
                    int i622 = eVar22.f3328b;
                    eVar22.f3328b = i622 + ((int) (i622 * 1.0f));
                    if (i5 > 1) {
                    }
                }
            } catch (IOException e13) {
                e = e13;
            }
            mVar.addMarker(str + "-retry [timeout=" + timeoutMs + "]");
        }
    }

    public aj.b I() {
        JSONObject jSONObject;
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        byte[] bArr = new byte[16384];
        try {
            FileInputStream fileInputStream = new FileInputStream(z());
            while (true) {
                try {
                    int read = fileInputStream.read(bArr, 0, 16384);
                    if (read < 0) {
                        break;
                    }
                    byteArrayOutputStream.write(bArr, 0, read);
                } finally {
                }
            }
            jSONObject = new JSONObject(byteArrayOutputStream.toString());
            fileInputStream.close();
        } catch (IOException | JSONException unused) {
            jSONObject = new JSONObject();
        }
        String optString = jSONObject.optString("Fid", null);
        int optInt = jSONObject.optInt("Status", 0);
        String optString2 = jSONObject.optString("AuthToken", null);
        String optString3 = jSONObject.optString("RefreshToken", null);
        long optLong = jSONObject.optLong("TokenCreationEpochInSecs", 0L);
        long optLong2 = jSONObject.optLong("ExpiresInSecs", 0L);
        String optString4 = jSONObject.optString("FisError", null);
        int i5 = f0.e.c(5)[optInt];
        if (i5 == 0) {
            throw new NullPointerException("Null registrationStatus");
        }
        String str = i5 == 0 ? " registrationStatus" : "";
        if (str.isEmpty()) {
            return new aj.b(optString, i5, optString2, optString3, optLong2, optLong, optString4);
        }
        throw new IllegalStateException("Missing required properties:".concat(str));
    }

    public void J(Long l6, String str, String str2) {
        AtomicLong atomicLong = (AtomicLong) ((Map) ((io.sentry.util.e) ((ha.l) this.f7959e).f9613d).a()).get(new io.sentry.clientreport.c(str, str2));
        if (atomicLong != null) {
            atomicLong.addAndGet(l6.longValue());
        }
    }

    public void K(io.sentry.clientreport.b bVar) {
        if (bVar == null) {
            return;
        }
        Iterator it = bVar.f11463e.iterator();
        while (it.hasNext()) {
            io.sentry.clientreport.e eVar = (io.sentry.clientreport.e) it.next();
            J(eVar.f11468i, eVar.f11466d, eVar.f11467e);
        }
    }

    public l L(l lVar) {
        if (!((bk.a) this.f7959e).equals((bk.a) lVar.f7959e)) {
            throw new IllegalArgumentException("ModulusPolys do not have same ModulusGF field");
        }
        if (lVar.E()) {
            return this;
        }
        bk.a aVar = (bk.a) lVar.f7959e;
        int[] iArr = (int[]) lVar.f7960i;
        int length = iArr.length;
        int[] iArr2 = new int[length];
        for (int i5 = 0; i5 < length; i5++) {
            int i6 = iArr[i5];
            aVar.getClass();
            iArr2[i5] = (929 - i6) % 929;
        }
        return r(new l(aVar, iArr2));
    }

    public fo.v M(int i5) {
        LinkedList linkedList = new LinkedList();
        LinkedList linkedList2 = new LinkedList();
        boolean z5 = false;
        while (i5 != -1) {
            l0 l0Var = (l0) ((m0) this.f7960i).f7177e.get(i5);
            String str = (String) ((n0) this.f7959e).f7189e.get(l0Var.f7166v);
            k0 k0Var = l0Var.f7167w;
            Intrinsics.checkNotNull(k0Var);
            int ordinal = k0Var.ordinal();
            if (ordinal == 0) {
                linkedList2.addFirst(str);
            } else if (ordinal == 1) {
                linkedList.addFirst(str);
            } else {
                if (ordinal != 2) {
                    throw new fo.n();
                }
                linkedList2.addFirst(str);
                z5 = true;
            }
            i5 = l0Var.f7165i;
        }
        return new fo.v(linkedList, linkedList2, Boolean.valueOf(z5));
    }

    public void N(VideoSize videoSize) {
        Handler handler = (Handler) this.f7959e;
        if (handler != null) {
            handler.post(new jc.b0(2, this, videoSize));
        }
    }

    @Override // th.u0
    public Object a() {
        v0 v0Var = (v0) this.f7959e;
        Bundle bundle = (Bundle) this.f7960i;
        int i5 = bundle.getInt(SharedPreferencesKey.SESSION_ID);
        if (i5 == 0) {
            return Boolean.FALSE;
        }
        HashMap hashMap = v0Var.f18600c;
        uh.f fVar = v0Var.f18602e;
        Integer valueOf = Integer.valueOf(i5);
        if (hashMap.containsKey(valueOf)) {
            r0 r0Var = v0Var.a(i5).f18571c;
            String str = r0Var.a;
            int i6 = bundle.getInt(a5.k0.b("status", str));
            int i10 = r0Var.f18561d;
            if (th.m0.d(i10, i6)) {
                v0.f18598g.a("Found stale update for session %s with status %d.", valueOf, Integer.valueOf(i10));
                int i11 = r0Var.f18561d;
                if (i11 == 4) {
                    ((u1) fVar.a()).c(i5, str);
                } else if (i11 == 5) {
                    ((u1) fVar.a()).b(i5);
                } else if (i11 == 6) {
                    ((u1) fVar.a()).e(Arrays.asList(str));
                }
            } else {
                r0Var.f18561d = i6;
                if (i6 == 5 || i6 == 6 || i6 == 4) {
                    v0Var.b(new a0(i5, 17, v0Var));
                    v0Var.f18599b.b(str);
                } else {
                    Iterator it = r0Var.f18563f.iterator();
                    while (it.hasNext()) {
                        t0 t0Var = (t0) it.next();
                        ArrayList parcelableArrayList = bundle.getParcelableArrayList(a5.k0.j("chunk_intents", str, t0Var.a));
                        if (parcelableArrayList != null) {
                            for (int i12 = 0; i12 < parcelableArrayList.size(); i12++) {
                                if (parcelableArrayList.get(i12) != null && ((Intent) parcelableArrayList.get(i12)).getData() != null) {
                                    ((q0) t0Var.f18584d.get(i12)).a = true;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            ArrayList<String> stringArrayList = bundle.getStringArrayList("pack_names");
            if (stringArrayList == null || stringArrayList.isEmpty()) {
                throw new th.l0("Session without pack received.");
            }
            String str2 = stringArrayList.get(0);
            long j = bundle.getLong(a5.k0.b("pack_version", str2));
            String string = bundle.getString(a5.k0.b("pack_version_tag", str2), "");
            int i13 = bundle.getInt(a5.k0.b("status", str2));
            long j5 = bundle.getLong(a5.k0.b("total_bytes_to_download", str2));
            List<String> stringArrayList2 = bundle.getStringArrayList(a5.k0.b("slice_ids", str2));
            ArrayList arrayList = new ArrayList();
            if (stringArrayList2 == null) {
                stringArrayList2 = Collections.EMPTY_LIST;
            }
            for (String str3 : stringArrayList2) {
                List parcelableArrayList2 = bundle.getParcelableArrayList(a5.k0.j("chunk_intents", str2, str3));
                ArrayList arrayList2 = new ArrayList();
                if (parcelableArrayList2 == null) {
                    parcelableArrayList2 = Collections.EMPTY_LIST;
                }
                Iterator it2 = parcelableArrayList2.iterator();
                while (it2.hasNext()) {
                    boolean z5 = ((Intent) it2.next()) != null;
                    long j7 = j5;
                    q0 q0Var = new q0();
                    q0Var.a = z5;
                    arrayList2.add(q0Var);
                    j5 = j7;
                }
                long j10 = j5;
                String string2 = bundle.getString(a5.k0.j("uncompressed_hash_sha256", str2, str3));
                long j11 = bundle.getLong(a5.k0.j("uncompressed_size", str2, str3));
                int i14 = bundle.getInt(a5.k0.j("patch_format", str2, str3), 0);
                arrayList.add(i14 != 0 ? new t0(str3, string2, j11, arrayList2, 0, i14) : new t0(str3, string2, j11, arrayList2, bundle.getInt(a5.k0.j("compression_format", str2, str3), 0), 0));
                j5 = j10;
            }
            v0Var.f18600c.put(Integer.valueOf(i5), new s0(i5, bundle.getInt("app_version_code"), new r0(str2, j, i13, j5, arrayList, string)));
        }
        return Boolean.TRUE;
    }

    @Override // ad.b0
    public void c(w wVar) {
        e0 e0Var = (e0) this.f7960i;
        SparseArray sparseArray = e0Var.f344f;
        ke.v vVar = (ke.v) this.f7959e;
        if (wVar.u() == 0 && (wVar.u() & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            wVar.G(6);
            int a = wVar.a() / 4;
            for (int i5 = 0; i5 < a; i5++) {
                wVar.e(vVar.f13356b, 0, 4);
                vVar.p(0);
                int i6 = vVar.i(16);
                vVar.s(3);
                if (i6 == 0) {
                    vVar.s(13);
                } else {
                    int i10 = vVar.i(13);
                    if (sparseArray.get(i10) == null) {
                        sparseArray.put(i10, new c0(new d0(e0Var, i10)));
                        e0Var.f348l++;
                    }
                }
            }
            if (e0Var.a != 2) {
                sparseArray.remove(0);
            }
        }
    }

    @Override // wd.e
    public int d(long j) {
        int i5;
        ArrayList arrayList = (ArrayList) this.f7960i;
        Long valueOf = Long.valueOf(j);
        int i6 = ke.d0.a;
        int binarySearch = Collections.binarySearch(arrayList, valueOf);
        if (binarySearch < 0) {
            i5 = ~binarySearch;
        } else {
            int size = arrayList.size();
            do {
                binarySearch++;
                if (binarySearch >= size) {
                    break;
                }
            } while (((Comparable) arrayList.get(binarySearch)).compareTo(valueOf) == 0);
            i5 = binarySearch;
        }
        if (i5 < arrayList.size()) {
            return i5;
        }
        return -1;
    }

    @Override // com.google.android.play.core.review.ReviewManager
    public jg.l e(Activity activity, zh.b bVar) {
        switch (this.f7958d) {
            case 6:
                return bVar != ((zh.c) this.f7960i) ? a5.k0.r(new zh.a(-2)) : a5.k0.s(null);
            default:
                zh.c cVar = (zh.c) bVar;
                if (cVar.f21243e) {
                    return a5.k0.s(null);
                }
                Intent intent = new Intent(activity, (Class<?>) PlayCoreDialogWrapperActivity.class);
                intent.putExtra("confirmation_intent", cVar.f21242d);
                intent.putExtra("window_flags", activity.getWindow().getDecorView().getWindowSystemUiVisibility());
                jg.g gVar = new jg.g();
                intent.putExtra("result_receiver", new qh.c((Handler) this.f7960i, gVar));
                activity.startActivity(intent);
                return gVar.a;
        }
    }

    @Override // io.sentry.clientreport.f
    public void f(io.sentry.clientreport.d dVar, io.sentry.l lVar) {
        n(dVar, lVar, 1L);
    }

    @Override // jg.f
    public jg.l g(Object obj) {
        com.google.android.play.core.integrity.a aVar = (com.google.android.play.core.integrity.a) this.f7959e;
        return a5.k0.s(new com.google.android.play.core.integrity.e(aVar.f6175b, ((xh.r) this.f7960i).a, ((Long) obj).longValue()));
    }

    @Override // eq.g
    public String getString(int i5) {
        String str = (String) ((n0) this.f7959e).f7189e.get(i5);
        Intrinsics.checkNotNullExpressionValue(str, "getString(...)");
        return str;
    }

    @Override // eq.g
    public String h(int i5) {
        fo.v M = M(i5);
        List list = (List) M.f8840d;
        String O = CollectionsKt.O((List) M.f8841e, ".", null, null, null, 62);
        if (list.isEmpty()) {
            return O;
        }
        return CollectionsKt.O(list, "/", null, null, null, 62) + '/' + O;
    }

    @Override // wd.e
    public long i(int i5) {
        ArrayList arrayList = (ArrayList) this.f7960i;
        ke.b.g(i5 >= 0);
        ke.b.g(i5 < arrayList.size());
        return ((Long) arrayList.get(i5)).longValue();
    }

    @Override // io.sentry.clientreport.f
    public void j(io.sentry.clientreport.d dVar, io.sentry.internal.debugmeta.c cVar) {
        if (cVar == null) {
            return;
        }
        try {
            Iterator it = ((Iterable) cVar.f11623i).iterator();
            while (it.hasNext()) {
                o(dVar, (o4) it.next());
            }
        } catch (Throwable th2) {
            ((v5) this.f7960i).getLogger().i(SentryLevel.ERROR, th2, "Unable to record lost envelope.", new Object[0]);
        }
    }

    @Override // com.google.android.play.core.review.ReviewManager
    public jg.l k() {
        switch (this.f7958d) {
            case 6:
                zh.c cVar = new zh.c(PendingIntent.getBroadcast((Context) this.f7959e, 0, new Intent(), 67108864), false);
                this.f7960i = cVar;
                return a5.k0.s(cVar);
            default:
                zh.e eVar = (zh.e) this.f7959e;
                ai.e eVar2 = zh.e.f21247c;
                eVar2.b("requestInAppReview (%s)", eVar.f21248b);
                if (eVar.a == null) {
                    Object[] objArr = new Object[0];
                    if (Log.isLoggable("PlayCore", 6)) {
                        Log.e("PlayCore", ai.e.c(eVar2.a, "Play Store app is either not installed or not the official version", objArr));
                    }
                    return a5.k0.r(new zh.a(-1));
                }
                jg.g gVar = new jg.g();
                ai.j jVar = eVar.a;
                ai.h hVar = new ai.h(eVar, gVar, gVar, 2);
                synchronized (jVar.f628f) {
                    jVar.f627e.add(gVar);
                    gVar.a.addOnCompleteListener(new e(3, jVar, gVar));
                }
                synchronized (jVar.f628f) {
                    try {
                        if (jVar.k.getAndIncrement() > 0) {
                            ai.e eVar3 = jVar.f624b;
                            Object[] objArr2 = new Object[0];
                            eVar3.getClass();
                            if (Log.isLoggable("PlayCore", 3)) {
                                Log.d("PlayCore", ai.e.c(eVar3.a, "Already connected to the service.", objArr2));
                            }
                        }
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                jVar.a().post(new ai.h(jVar, gVar, hVar, 0));
                return gVar.a;
        }
    }

    @Override // eq.g
    public boolean l(int i5) {
        return ((Boolean) M(i5).f8842i).booleanValue();
    }

    @Override // io.sentry.clientreport.f
    public void n(io.sentry.clientreport.d dVar, io.sentry.l lVar, long j) {
        try {
            J(Long.valueOf(j), dVar.getReason(), lVar.getCategory());
            w();
        } catch (Throwable th2) {
            ((v5) this.f7960i).getLogger().i(SentryLevel.ERROR, th2, "Unable to record lost event.", new Object[0]);
        }
    }

    @Override // io.sentry.clientreport.f
    public void o(io.sentry.clientreport.d dVar, o4 o4Var) {
        v5 v5Var = (v5) this.f7960i;
        if (o4Var == null) {
            return;
        }
        try {
            v4 v4Var = o4Var.a.f11731w;
            if (v4.ClientReport.equals(v4Var)) {
                try {
                    K(o4Var.e(v5Var.getSerializer()));
                    return;
                } catch (Exception unused) {
                    v5Var.getLogger().u(SentryLevel.ERROR, "Unable to restore counts from previous client report.", new Object[0]);
                    return;
                }
            }
            io.sentry.l t5 = t(v4Var);
            if (t5.equals(io.sentry.l.Transaction)) {
                io.sentry.protocol.d0 j = o4Var.j(v5Var.getSerializer());
                if (j != null) {
                    ArrayList arrayList = j.P;
                    J(Long.valueOf(arrayList.size() + 1), dVar.getReason(), io.sentry.l.Span.getCategory());
                    arrayList.size();
                    w();
                }
                J(1L, dVar.getReason(), t5.getCategory());
                w();
                return;
            }
            if (t5.equals(io.sentry.l.LogItem)) {
                y4 h6 = o4Var.h(v5Var.getSerializer());
                if (h6 == null) {
                    v5Var.getLogger().u(SentryLevel.ERROR, "Unable to parse lost logs envelope item.", new Object[0]);
                    return;
                }
                J(Long.valueOf(h6.f12090d.size()), dVar.getReason(), t5.getCategory());
                J(Long.valueOf(o4Var.f().length), dVar.getReason(), io.sentry.l.LogByte.getCategory());
                w();
                return;
            }
            if (!t5.equals(io.sentry.l.TraceMetric)) {
                J(1L, dVar.getReason(), t5.getCategory());
                w();
                return;
            }
            c5 i5 = o4Var.i(v5Var.getSerializer());
            if (i5 == null) {
                v5Var.getLogger().u(SentryLevel.ERROR, "Unable to parse lost metrics envelope item.", new Object[0]);
                return;
            }
            J(Long.valueOf(i5.f11427d.size()), dVar.getReason(), t5.getCategory());
            w();
        } catch (Throwable th2) {
            v5Var.getLogger().i(SentryLevel.ERROR, th2, "Unable to record lost envelope item.", new Object[0]);
        }
    }

    @Override // com.google.android.gms.tasks.OnCompleteListener
    public void onComplete(Task task) {
        di.c cVar = (di.c) this.f7959e;
        jg.g gVar = (jg.g) this.f7960i;
        synchronized (cVar.f7571f) {
            cVar.f7570e.remove(gVar);
        }
    }

    @Override // com.facebook.react.modules.core.PermissionListener
    public boolean onRequestPermissionsResult(int i5, String[] strArr, int[] iArr) {
        Promise promise = (Promise) this.f7959e;
        if (i5 == 1) {
            for (int i6 = 0; i6 < strArr.length; i6++) {
                String str = strArr[i6];
                if (iArr[i6] == -1) {
                    if (str.equals("android.permission.CAMERA")) {
                        promise.reject("E_NO_CAMERA_PERMISSION", "User did not grant camera permission.");
                    } else if (str.equals("android.permission.WRITE_EXTERNAL_STORAGE")) {
                        promise.reject("E_NO_LIBRARY_PERMISSION", "User did not grant library permission.");
                    } else {
                        promise.reject("E_NO_LIBRARY_PERMISSION", "Required permission missing");
                    }
                    return true;
                }
            }
            try {
                ((Callable) this.f7960i).call();
            } catch (Exception e9) {
                promise.reject("E_CALLBACK_ERROR", "Unknown error", e9);
            }
        }
        return true;
    }

    @Override // ma.b
    public oa.c p(EncodedImage encodedImage, int i5, oa.k qualityInfo, ImageDecodeOptions options) {
        Intrinsics.checkNotNullParameter(encodedImage, "encodedImage");
        Intrinsics.checkNotNullParameter(qualityInfo, "qualityInfo");
        Intrinsics.checkNotNullParameter(options, "options");
        try {
            String source = encodedImage.getSource();
            if (source == null) {
                throw new IllegalStateException("No source in encoded image");
            }
            int C = C(source);
            Resources resources = (Resources) this.f7959e;
            ThreadLocal threadLocal = a1.n.a;
            Drawable drawable = resources.getDrawable(C, null);
            if (drawable == null) {
                return null;
            }
            oa.h hVar = new oa.h();
            hVar.f15809v = drawable;
            return hVar;
        } catch (Throwable th2) {
            p8.a.h("XmlFormatDecoder", "Cannot decode xml", th2);
            return null;
        }
    }

    @Override // wd.e
    public List q(long j) {
        int c6 = ke.d0.c(Long.valueOf(j), false, (ArrayList) this.f7960i);
        return c6 == -1 ? Collections.EMPTY_LIST : (List) ((ArrayList) this.f7959e).get(c6);
    }

    public l r(l lVar) {
        bk.a aVar = (bk.a) this.f7959e;
        if (!aVar.equals((bk.a) lVar.f7959e)) {
            throw new IllegalArgumentException("ModulusPolys do not have same ModulusGF field");
        }
        if (E()) {
            return lVar;
        }
        if (lVar.E()) {
            return this;
        }
        int[] iArr = (int[]) this.f7960i;
        int[] iArr2 = (int[]) lVar.f7960i;
        if (iArr.length <= iArr2.length) {
            iArr = iArr2;
            iArr2 = iArr;
        }
        int[] iArr3 = new int[iArr.length];
        int length = iArr.length - iArr2.length;
        System.arraycopy(iArr, 0, iArr3, 0, length);
        for (int i5 = length; i5 < iArr.length; i5++) {
            iArr3[i5] = aVar.a(iArr2[i5 - length], iArr[i5]);
        }
        return new l(aVar, iArr3);
    }

    @Override // io.sentry.clientreport.f
    public io.sentry.internal.debugmeta.c s(io.sentry.internal.debugmeta.c cVar) {
        v5 v5Var = (v5) this.f7960i;
        Date r5 = ki.b.r();
        ha.l lVar = (ha.l) this.f7959e;
        lVar.getClass();
        ArrayList arrayList = new ArrayList();
        for (Map.Entry entry : ((Map) ((io.sentry.util.e) lVar.f9613d).a()).entrySet()) {
            long andSet = ((AtomicLong) entry.getValue()).getAndSet(0L);
            Long valueOf = Long.valueOf(andSet);
            if (andSet > 0) {
                arrayList.add(new io.sentry.clientreport.e(valueOf, ((io.sentry.clientreport.c) entry.getKey()).a, ((io.sentry.clientreport.c) entry.getKey()).f11465b));
            }
        }
        io.sentry.clientreport.b bVar = arrayList.isEmpty() ? null : new io.sentry.clientreport.b(r5, arrayList);
        if (bVar == null) {
            return cVar;
        }
        try {
            v5Var.getLogger().u(SentryLevel.DEBUG, "Attaching client report to envelope.", new Object[0]);
            ArrayList arrayList2 = new ArrayList();
            Iterator it = ((Iterable) cVar.f11623i).iterator();
            while (it.hasNext()) {
                arrayList2.add((o4) it.next());
            }
            arrayList2.add(o4.b(v5Var.getSerializer(), bVar));
            return new io.sentry.internal.debugmeta.c((k4) cVar.f11622e, arrayList2);
        } catch (Throwable th2) {
            v5Var.getLogger().i(SentryLevel.ERROR, th2, "Unable to attach client report to envelope.", new Object[0]);
            return cVar;
        }
    }

    public String toString() {
        switch (this.f7958d) {
            case 5:
                StringBuilder sb2 = new StringBuilder(B() * 8);
                for (int B = B(); B >= 0; B--) {
                    int y5 = y(B);
                    if (y5 != 0) {
                        if (y5 < 0) {
                            sb2.append(" - ");
                            y5 = -y5;
                        } else if (sb2.length() > 0) {
                            sb2.append(" + ");
                        }
                        if (B == 0 || y5 != 1) {
                            sb2.append(y5);
                        }
                        if (B != 0) {
                            if (B == 1) {
                                sb2.append('x');
                            } else {
                                sb2.append("x^");
                                sb2.append(B);
                            }
                        }
                    }
                }
                return sb2.toString();
            default:
                return super.toString();
        }
    }

    public void u() {
        this.f7959e = null;
        this.f7960i = null;
    }

    public int v(int i5) {
        bk.a aVar = (bk.a) this.f7959e;
        int[] iArr = (int[]) this.f7960i;
        if (i5 == 0) {
            return y(0);
        }
        if (i5 == 1) {
            int i6 = 0;
            for (int i10 : iArr) {
                i6 = aVar.a(i6, i10);
            }
            return i6;
        }
        int i11 = iArr[0];
        int length = iArr.length;
        for (int i12 = 1; i12 < length; i12++) {
            i11 = aVar.a(aVar.c(i5, i11), iArr[i12]);
        }
        return i11;
    }

    public void w() {
        ((v5) this.f7960i).getOnDiscard();
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x003e  */
    /* JADX WARN: Removed duplicated region for block: B:12:0x0046  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public CctBackendFactory x(String str) {
        Bundle bundle;
        Map map;
        PackageManager packageManager;
        if (((Map) this.f7960i) == null) {
            Context context = (Context) this.f7959e;
            try {
                packageManager = context.getPackageManager();
            } catch (PackageManager.NameNotFoundException unused) {
                Log.w("BackendRegistry", "Application info not found.");
            }
            if (packageManager == null) {
                Log.w("BackendRegistry", "Context has no PackageManager.");
            } else {
                ServiceInfo serviceInfo = packageManager.getServiceInfo(new ComponentName(context, (Class<?>) TransportBackendDiscovery.class), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                if (serviceInfo == null) {
                    Log.w("BackendRegistry", "TransportBackendDiscovery has no service info.");
                } else {
                    bundle = serviceInfo.metaData;
                    if (bundle != null) {
                        Log.w("BackendRegistry", "Could not retrieve metadata, returning empty list of transport backends.");
                        map = Collections.EMPTY_MAP;
                    } else {
                        HashMap hashMap = new HashMap();
                        for (String str2 : bundle.keySet()) {
                            Object obj = bundle.get(str2);
                            if ((obj instanceof String) && str2.startsWith("backend:")) {
                                for (String str3 : ((String) obj).split(",", -1)) {
                                    String trim = str3.trim();
                                    if (!trim.isEmpty()) {
                                        hashMap.put(trim, str2.substring(8));
                                    }
                                }
                            }
                        }
                        map = hashMap;
                    }
                    this.f7960i = map;
                }
            }
            bundle = null;
            if (bundle != null) {
            }
            this.f7960i = map;
        }
        String str4 = (String) ((Map) this.f7960i).get(str);
        if (str4 == null) {
            return null;
        }
        try {
            return (CctBackendFactory) Class.forName(str4).asSubclass(CctBackendFactory.class).getDeclaredConstructor(null).newInstance(null);
        } catch (ClassNotFoundException e9) {
            Log.w("BackendRegistry", "Class " + str4 + " is not found.", e9);
            return null;
        } catch (IllegalAccessException e10) {
            Log.w("BackendRegistry", "Could not instantiate " + str4 + ".", e10);
            return null;
        } catch (InstantiationException e11) {
            Log.w("BackendRegistry", "Could not instantiate " + str4 + ".", e11);
            return null;
        } catch (NoSuchMethodException e12) {
            Log.w("BackendRegistry", "Could not instantiate ".concat(str4), e12);
            return null;
        } catch (InvocationTargetException e13) {
            Log.w("BackendRegistry", "Could not instantiate ".concat(str4), e13);
            return null;
        }
    }

    public int y(int i5) {
        return ((int[]) this.f7960i)[(r0.length - 1) - i5];
    }

    public File z() {
        if (((File) this.f7959e) == null) {
            synchronized (this) {
                try {
                    if (((File) this.f7959e) == null) {
                        ki.g gVar = (ki.g) this.f7960i;
                        gVar.a();
                        this.f7959e = new File(gVar.a.getFilesDir(), "PersistedInstallation." + ((ki.g) this.f7960i).c() + ".json");
                    }
                } finally {
                }
            }
        }
        return (File) this.f7959e;
    }

    public /* synthetic */ l(int i5, Object obj, Object obj2) {
        this.f7958d = i5;
        this.f7959e = obj;
        this.f7960i = obj2;
    }

    public l(Activity activity) {
        this.f7958d = 6;
        this.f7959e = activity;
    }

    public l(zh.e eVar) {
        this.f7958d = 28;
        this.f7960i = new Handler(Looper.getMainLooper());
        this.f7959e = eVar;
    }

    public l(n0 strings, m0 qualifiedNames) {
        this.f7958d = 9;
        Intrinsics.checkNotNullParameter(strings, "strings");
        Intrinsics.checkNotNullParameter(qualifiedNames, "qualifiedNames");
        this.f7959e = strings;
        this.f7960i = qualifiedNames;
    }

    public l() {
        this.f7958d = 27;
        this.f7960i = new HashMap();
    }

    public l(Resources resources) {
        this.f7958d = 24;
        Intrinsics.checkNotNullParameter(resources, "resources");
        this.f7959e = resources;
        this.f7960i = new ConcurrentHashMap();
    }

    public l(WorkDatabase_Impl database) {
        this.f7958d = 0;
        this.f7959e = database;
        Intrinsics.checkNotNullParameter(database, "database");
        this.f7960i = new b(database, false, 3);
    }

    public l(bk.a aVar, int[] iArr) {
        this.f7958d = 5;
        if (iArr.length != 0) {
            this.f7959e = aVar;
            int length = iArr.length;
            int i5 = 1;
            if (length > 1 && iArr[0] == 0) {
                while (i5 < length && iArr[i5] == 0) {
                    i5++;
                }
                if (i5 == length) {
                    this.f7960i = new int[]{0};
                    return;
                }
                int i6 = length - i5;
                int[] iArr2 = new int[i6];
                this.f7960i = iArr2;
                System.arraycopy(iArr, i5, iArr2, 0, i6);
                return;
            }
            this.f7960i = iArr;
            return;
        }
        throw new IllegalArgumentException();
    }

    public l(v5 v5Var) {
        this.f7958d = 13;
        this.f7960i = v5Var;
        this.f7959e = new ha.l(15, false);
    }

    public l(p6 p6Var, Double d6) {
        this.f7958d = 12;
        this.f7959e = p6Var;
        this.f7960i = d6;
        Map map = Collections.EMPTY_MAP;
    }

    public l(y yVar, List list, ArrayList arrayList) {
        this.f7958d = 21;
        List list2 = Collections.EMPTY_LIST;
        if (yVar == null) {
            m(0);
            throw null;
        }
        if (list == null) {
            m(1);
            throw null;
        }
        if (list2 != null) {
            this.f7959e = list;
            this.f7960i = list2;
        } else {
            m(3);
            throw null;
        }
    }

    public l(j8.b bVar) {
        this.f7958d = 7;
        d5.a aVar = new d5.a();
        this.f7959e = bVar;
        this.f7960i = aVar;
    }

    public l(ki.g gVar) {
        this.f7958d = 3;
        this.f7960i = gVar;
    }

    public l(String userId, String str) {
        this.f7958d = 16;
        Intrinsics.checkNotNullParameter(userId, "userId");
        this.f7959e = userId;
        this.f7960i = str;
        if (userId.length() <= 0) {
            throw new IllegalArgumentException("userId should not be empty");
        }
    }

    public l(Context context) {
        this.f7958d = 25;
        this.f7960i = null;
        this.f7959e = context;
    }

    public l(e0 e0Var) {
        this.f7958d = 2;
        this.f7960i = e0Var;
        this.f7959e = new ke.v(new byte[4], 4);
    }

    @Override // ad.b0
    public void b(ke.b0 b0Var, qc.l lVar, g0 g0Var) {
    }
}
