package c5;

import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* loaded from: classes.dex */
public abstract class m implements Comparable {
    private static final String DEFAULT_PARAMS_ENCODING = "UTF-8";
    private b mCacheEntry;
    private boolean mCanceled;
    private final int mDefaultTrafficStatsTag;
    private o mErrorListener;
    private final u mEventLog;
    private final Object mLock;
    private final int mMethod;
    private k mRequestCompleteListener;
    private n mRequestQueue;
    private boolean mResponseDelivered;
    private r mRetryPolicy;
    private Integer mSequence;
    private boolean mShouldCache;
    private boolean mShouldRetryConnectionErrors;
    private boolean mShouldRetryServerErrors;
    private Object mTag;
    private final String mUrl;

    public m(String str, o oVar) {
        Uri parse;
        String host;
        this.mEventLog = u.f3357c ? new u() : null;
        this.mLock = new Object();
        this.mShouldCache = true;
        int i5 = 0;
        this.mCanceled = false;
        this.mResponseDelivered = false;
        this.mShouldRetryServerErrors = false;
        this.mShouldRetryConnectionErrors = false;
        this.mCacheEntry = null;
        this.mMethod = 0;
        this.mUrl = str;
        this.mErrorListener = oVar;
        e eVar = new e(0);
        eVar.f3328b = 2500;
        setRetryPolicy(eVar);
        if (!TextUtils.isEmpty(str) && (parse = Uri.parse(str)) != null && (host = parse.getHost()) != null) {
            i5 = host.hashCode();
        }
        this.mDefaultTrafficStatsTag = i5;
    }

    public static byte[] a(String str, Map map) {
        StringBuilder sb2 = new StringBuilder();
        try {
            for (Map.Entry entry : map.entrySet()) {
                if (entry.getKey() == null || entry.getValue() == null) {
                    throw new IllegalArgumentException(String.format("Request#getParams() or Request#getPostParams() returned a map containing a null key or value: (%s, %s). All keys and values must be non-null.", entry.getKey(), entry.getValue()));
                }
                sb2.append(URLEncoder.encode((String) entry.getKey(), str));
                sb2.append('=');
                sb2.append(URLEncoder.encode((String) entry.getValue(), str));
                sb2.append('&');
            }
            return sb2.toString().getBytes(str);
        } catch (UnsupportedEncodingException e9) {
            throw new RuntimeException(a3.e.k("Encoding not supported: ", str), e9);
        }
    }

    public void addMarker(String str) {
        if (u.f3357c) {
            this.mEventLog.a(Thread.currentThread().getId(), str);
        }
    }

    public void cancel() {
        synchronized (this.mLock) {
            this.mCanceled = true;
            this.mErrorListener = null;
        }
    }

    public void deliverError(s sVar) {
        o oVar;
        synchronized (this.mLock) {
            oVar = this.mErrorListener;
        }
        if (oVar != null) {
            oVar.d(sVar);
        }
    }

    public abstract void deliverResponse(Object obj);

    public void finish(String str) {
        n nVar = this.mRequestQueue;
        if (nVar != null) {
            synchronized (nVar.f3344b) {
                nVar.f3344b.remove(this);
            }
            synchronized (nVar.j) {
                Iterator it = nVar.j.iterator();
                if (it.hasNext()) {
                    if (it.next() != null) {
                        throw new ClassCastException();
                    }
                    throw null;
                }
            }
            nVar.b();
        }
        if (u.f3357c) {
            long id2 = Thread.currentThread().getId();
            if (Looper.myLooper() != Looper.getMainLooper()) {
                new Handler(Looper.getMainLooper()).post(new j(this, str, id2));
            } else {
                this.mEventLog.a(id2, str);
                this.mEventLog.b(toString());
            }
        }
    }

    public byte[] getBody() {
        Map<String, String> params = getParams();
        if (params == null || params.size() <= 0) {
            return null;
        }
        return a(getParamsEncoding(), params);
    }

    public String getBodyContentType() {
        return "application/x-www-form-urlencoded; charset=" + getParamsEncoding();
    }

    public b getCacheEntry() {
        return this.mCacheEntry;
    }

    public String getCacheKey() {
        String url = getUrl();
        int method = getMethod();
        if (method == 0 || method == -1) {
            return url;
        }
        return Integer.toString(method) + '-' + url;
    }

    public o getErrorListener() {
        o oVar;
        synchronized (this.mLock) {
            oVar = this.mErrorListener;
        }
        return oVar;
    }

    public Map<String, String> getHeaders() {
        return Collections.EMPTY_MAP;
    }

    public int getMethod() {
        return this.mMethod;
    }

    public Map<String, String> getParams() {
        return null;
    }

    public String getParamsEncoding() {
        return DEFAULT_PARAMS_ENCODING;
    }

    @Deprecated
    public byte[] getPostBody() {
        Map<String, String> postParams = getPostParams();
        if (postParams == null || postParams.size() <= 0) {
            return null;
        }
        return a(getPostParamsEncoding(), postParams);
    }

    @Deprecated
    public String getPostBodyContentType() {
        return getBodyContentType();
    }

    @Deprecated
    public Map<String, String> getPostParams() {
        return getParams();
    }

    @Deprecated
    public String getPostParamsEncoding() {
        return getParamsEncoding();
    }

    public l getPriority() {
        return l.f3342d;
    }

    public r getRetryPolicy() {
        return this.mRetryPolicy;
    }

    public final int getSequence() {
        Integer num = this.mSequence;
        if (num != null) {
            return num.intValue();
        }
        throw new IllegalStateException("getSequence called before setSequence");
    }

    public Object getTag() {
        return this.mTag;
    }

    public final int getTimeoutMs() {
        return ((e) getRetryPolicy()).f3328b;
    }

    public int getTrafficStatsTag() {
        return this.mDefaultTrafficStatsTag;
    }

    public String getUrl() {
        return this.mUrl;
    }

    public boolean hasHadResponseDelivered() {
        boolean z5;
        synchronized (this.mLock) {
            z5 = this.mResponseDelivered;
        }
        return z5;
    }

    public boolean isCanceled() {
        boolean z5;
        synchronized (this.mLock) {
            z5 = this.mCanceled;
        }
        return z5;
    }

    public void markDelivered() {
        synchronized (this.mLock) {
            this.mResponseDelivered = true;
        }
    }

    public void notifyListenerResponseNotUsable() {
        k kVar;
        synchronized (this.mLock) {
            kVar = this.mRequestCompleteListener;
        }
        if (kVar != null) {
            ((e4.i) kVar).F(this);
        }
    }

    public void notifyListenerResponseReceived(q qVar) {
        k kVar;
        List list;
        synchronized (this.mLock) {
            kVar = this.mRequestCompleteListener;
        }
        if (kVar != null) {
            e4.i iVar = (e4.i) kVar;
            b bVar = qVar.f3352b;
            if (bVar != null) {
                if (bVar.f3317e >= System.currentTimeMillis()) {
                    String cacheKey = getCacheKey();
                    synchronized (iVar) {
                        list = (List) ((HashMap) iVar.f7952d).remove(cacheKey);
                    }
                    if (list != null) {
                        if (v.a) {
                            v.d("Releasing %d waiting requests for cacheKey=%s.", Integer.valueOf(list.size()), cacheKey);
                        }
                        Iterator it = list.iterator();
                        while (it.hasNext()) {
                            ((ve.i) iVar.f7953e).e((m) it.next(), qVar, null);
                        }
                        return;
                    }
                    return;
                }
            }
            iVar.F(this);
        }
    }

    public abstract q parseNetworkResponse(h hVar);

    public void sendEvent(int i5) {
        n nVar = this.mRequestQueue;
        if (nVar != null) {
            nVar.b();
        }
    }

    public m setCacheEntry(b bVar) {
        this.mCacheEntry = bVar;
        return this;
    }

    public void setNetworkRequestCompleteListener(k kVar) {
        synchronized (this.mLock) {
            this.mRequestCompleteListener = kVar;
        }
    }

    public m setRequestQueue(n nVar) {
        this.mRequestQueue = nVar;
        return this;
    }

    public m setRetryPolicy(r rVar) {
        this.mRetryPolicy = rVar;
        return this;
    }

    public final m setSequence(int i5) {
        this.mSequence = Integer.valueOf(i5);
        return this;
    }

    public final m setShouldCache(boolean z5) {
        this.mShouldCache = z5;
        return this;
    }

    public final m setShouldRetryConnectionErrors(boolean z5) {
        this.mShouldRetryConnectionErrors = z5;
        return this;
    }

    public final m setShouldRetryServerErrors(boolean z5) {
        this.mShouldRetryServerErrors = z5;
        return this;
    }

    public m setTag(Object obj) {
        this.mTag = obj;
        return this;
    }

    public final boolean shouldCache() {
        return this.mShouldCache;
    }

    public final boolean shouldRetryConnectionErrors() {
        return this.mShouldRetryConnectionErrors;
    }

    public final boolean shouldRetryServerErrors() {
        return this.mShouldRetryServerErrors;
    }

    public String toString() {
        String str = "0x" + Integer.toHexString(getTrafficStatsTag());
        StringBuilder sb2 = new StringBuilder();
        sb2.append(isCanceled() ? "[X] " : "[ ] ");
        sb2.append(getUrl());
        sb2.append(" ");
        sb2.append(str);
        sb2.append(" ");
        sb2.append(getPriority());
        sb2.append(" ");
        sb2.append(this.mSequence);
        return sb2.toString();
    }

    @Override // java.lang.Comparable
    public int compareTo(m mVar) {
        l priority = getPriority();
        l priority2 = mVar.getPriority();
        return priority == priority2 ? this.mSequence.intValue() - mVar.mSequence.intValue() : priority2.ordinal() - priority.ordinal();
    }

    public s parseNetworkError(s sVar) {
        return sVar;
    }
}
