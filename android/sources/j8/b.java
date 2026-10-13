package j8;

import android.view.View;
import c5.f;
import c5.m;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.common.BytesRange;
import com.facebook.react.uimanager.PointerEvents;
import com.facebook.react.uimanager.ReactPointerEventsView;
import com.google.android.gms.internal.play_billing.l4;
import fo.n;
import fo.u;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.regex.Pattern;
import km.p;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import qc.l;
import qc.s;
import qc.v;
import tb.e;
import th.p0;
import uh.g;

/* loaded from: classes3.dex */
public final class b implements e, t2.b, tm.a, l, s8.a, g {

    /* renamed from: e, reason: collision with root package name */
    public static b f12425e;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12426d;

    public /* synthetic */ b(int i5, byte b10) {
        this.f12426d = i5;
    }

    public static final String b(int i5) {
        u uVar = BytesRange.f4575c;
        return i5 == Integer.MAX_VALUE ? "" : String.valueOf(i5);
    }

    public static void e(HttpURLConnection httpURLConnection, m mVar, byte[] bArr) {
        httpURLConnection.setDoOutput(true);
        if (!httpURLConnection.getRequestProperties().containsKey("Content-Type")) {
            httpURLConnection.setRequestProperty("Content-Type", mVar.getBodyContentType());
        }
        DataOutputStream dataOutputStream = new DataOutputStream(httpURLConnection.getOutputStream());
        dataOutputStream.write(bArr);
        dataOutputStream.close();
    }

    public static ArrayList f(Map map) {
        ArrayList arrayList = new ArrayList(map.size());
        for (Map.Entry entry : map.entrySet()) {
            if (entry.getKey() != null) {
                Iterator it = ((List) entry.getValue()).iterator();
                while (it.hasNext()) {
                    arrayList.add(new f((String) entry.getKey(), (String) it.next()));
                }
            }
        }
        return arrayList;
    }

    public static CloseableReference g(CloseableReference closeableReference) {
        CloseableReference g6;
        try {
            if (CloseableReference.t(closeableReference)) {
                Intrinsics.checkNotNull(closeableReference);
                if (closeableReference.q() instanceof oa.d) {
                    Object q5 = closeableReference.q();
                    Intrinsics.checkNotNull(q5, "null cannot be cast to non-null type com.facebook.imagepipeline.image.CloseableStaticBitmap");
                    oa.g gVar = (oa.g) ((oa.d) q5);
                    synchronized (gVar) {
                        g6 = CloseableReference.g(gVar.f15805v);
                    }
                    closeableReference.close();
                    return g6;
                }
            }
            CloseableReference.l(closeableReference);
            return null;
        } catch (Throwable th2) {
            CloseableReference.l(closeableReference);
            throw th2;
        }
    }

    public static BytesRange i(String str) {
        if (str == null) {
            return null;
        }
        try {
            Object value = BytesRange.f4575c.getValue();
            Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
            String[] split = ((Pattern) value).split(str);
            if (!(split.length == 4)) {
                throw new IllegalArgumentException();
            }
            if (!Intrinsics.areEqual(split[0], "bytes")) {
                throw new IllegalArgumentException();
            }
            String str2 = split[1];
            Intrinsics.checkNotNullExpressionValue(str2, "get(...)");
            int parseInt = Integer.parseInt(str2);
            String str3 = split[2];
            Intrinsics.checkNotNullExpressionValue(str3, "get(...)");
            int parseInt2 = Integer.parseInt(str3);
            String str4 = split[3];
            Intrinsics.checkNotNullExpressionValue(str4, "get(...)");
            int parseInt3 = Integer.parseInt(str4);
            if (!(parseInt2 > parseInt)) {
                throw new IllegalArgumentException();
            }
            if (parseInt3 > parseInt2) {
                return parseInt2 < parseInt3 - 1 ? new BytesRange(parseInt, parseInt2) : new BytesRange(parseInt, Integer.MAX_VALUE);
            }
            throw new IllegalArgumentException();
        } catch (IllegalArgumentException e9) {
            StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
            throw new IllegalArgumentException(a3.e.p(new Object[]{str}, 1, null, "Invalid Content-Range header value: \"%s\"", "format(...)"), e9);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static jm.u j(View view) {
        Intrinsics.checkNotNullParameter(view, "view");
        PointerEvents pointerEvents = view instanceof ReactPointerEventsView ? ((ReactPointerEventsView) view).getPointerEvents() : PointerEvents.AUTO;
        if (!view.isEnabled()) {
            if (pointerEvents == PointerEvents.AUTO) {
                return jm.u.f12947e;
            }
            if (pointerEvents == PointerEvents.BOX_ONLY) {
                return jm.u.f12946d;
            }
        }
        int i5 = p.a[pointerEvents.ordinal()];
        if (i5 == 1) {
            return jm.u.f12948i;
        }
        if (i5 == 2) {
            return jm.u.f12947e;
        }
        if (i5 == 3) {
            return jm.u.f12946d;
        }
        if (i5 == 4) {
            return jm.u.f12949v;
        }
        throw new n();
    }

    public static void k(HttpURLConnection httpURLConnection, m mVar) {
        switch (mVar.getMethod()) {
            case -1:
                byte[] postBody = mVar.getPostBody();
                if (postBody != null) {
                    httpURLConnection.setRequestMethod("POST");
                    e(httpURLConnection, mVar, postBody);
                    return;
                }
                return;
            case 0:
                httpURLConnection.setRequestMethod("GET");
                return;
            case 1:
                httpURLConnection.setRequestMethod("POST");
                byte[] body = mVar.getBody();
                if (body != null) {
                    e(httpURLConnection, mVar, body);
                    return;
                }
                return;
            case 2:
                httpURLConnection.setRequestMethod("PUT");
                byte[] body2 = mVar.getBody();
                if (body2 != null) {
                    e(httpURLConnection, mVar, body2);
                    return;
                }
                return;
            case 3:
                httpURLConnection.setRequestMethod("DELETE");
                return;
            case 4:
                httpURLConnection.setRequestMethod("HEAD");
                return;
            case 5:
                httpURLConnection.setRequestMethod("OPTIONS");
                return;
            case 6:
                httpURLConnection.setRequestMethod("TRACE");
                return;
            case 7:
                httpURLConnection.setRequestMethod("PATCH");
                byte[] body3 = mVar.getBody();
                if (body3 != null) {
                    e(httpURLConnection, mVar, body3);
                    return;
                }
                return;
            default:
                throw new IllegalStateException("Unknown method type.");
        }
    }

    public static final CharSequence m(Object obj) {
        Objects.requireNonNull(obj);
        return obj instanceof CharSequence ? (CharSequence) obj : obj.toString();
    }

    @Override // uh.g
    public /* synthetic */ Object a() {
        return new p0();
    }

    @Override // tb.e, dc.f
    public Object apply(Object obj) {
        return ((l4) obj).b();
    }

    @Override // qc.l
    public void c(s sVar) {
        throw new UnsupportedOperationException();
    }

    @Override // tm.a
    public String d() {
        switch (this.f12426d) {
            case 7:
                return "onWillDisappear";
            case 11:
                return "onTabSelectionRejected";
            case 13:
                return "onWillDisappear";
            default:
                return "onSyncFlush";
        }
    }

    @Override // tm.a
    /* renamed from: getEventName */
    public String getName() {
        switch (this.f12426d) {
            case 7:
                return "topWillDisappear";
            case 11:
                return "topTabSelectionRejected";
            case 13:
                return "topWillDisappear";
            default:
                return "topSyncFlush";
        }
    }

    public d5.a h(m mVar, Map map) {
        String url = mVar.getUrl();
        HashMap hashMap = new HashMap();
        hashMap.putAll(map);
        hashMap.putAll(mVar.getHeaders());
        URL url2 = new URL(url);
        HttpURLConnection httpURLConnection = (HttpURLConnection) url2.openConnection();
        httpURLConnection.setInstanceFollowRedirects(HttpURLConnection.getFollowRedirects());
        int timeoutMs = mVar.getTimeoutMs();
        httpURLConnection.setConnectTimeout(timeoutMs);
        httpURLConnection.setReadTimeout(timeoutMs);
        boolean z5 = false;
        httpURLConnection.setUseCaches(false);
        httpURLConnection.setDoInput(true);
        "https".equals(url2.getProtocol());
        try {
            for (String str : hashMap.keySet()) {
                httpURLConnection.setRequestProperty(str, (String) hashMap.get(str));
            }
            k(httpURLConnection, mVar);
            int responseCode = httpURLConnection.getResponseCode();
            if (responseCode == -1) {
                throw new IOException("Could not retrieve response code from HttpUrlConnection.");
            }
            if (mVar.getMethod() == 4 || ((100 <= responseCode && responseCode < 200) || responseCode == 204 || responseCode == 304)) {
                d5.a aVar = new d5.a(responseCode, f(httpURLConnection.getHeaderFields()), -1, null);
                httpURLConnection.disconnect();
                return aVar;
            }
            try {
                return new d5.a(responseCode, f(httpURLConnection.getHeaderFields()), httpURLConnection.getContentLength(), new d5.d(httpURLConnection));
            } catch (Throwable th2) {
                th = th2;
                z5 = true;
                if (!z5) {
                    httpURLConnection.disconnect();
                }
                throw th;
            }
        } catch (Throwable th3) {
            th = th3;
        }
    }

    @Override // s8.a
    public void o(s8.d dVar, Throwable th2) {
        Object a = dVar.a();
        p8.a.t(CloseableReference.class, "Finalized without closing: %x %x (type = %s)", Integer.valueOf(System.identityHashCode(this)), Integer.valueOf(System.identityHashCode(dVar)), a == null ? null : a.getClass().getName());
    }

    @Override // qc.l
    public void r() {
        throw new UnsupportedOperationException();
    }

    @Override // qc.l
    public v y(int i5, int i6) {
        throw new UnsupportedOperationException();
    }

    public b(int i5) {
        this.f12426d = 8;
        new LinkedHashSet(i5);
    }

    @Override // s8.a
    public void l() {
    }
}
