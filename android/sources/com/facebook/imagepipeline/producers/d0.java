package com.facebook.imagepipeline.producers;

import android.net.Uri;
import com.facebook.common.time.RealtimeSinceBootClock;
import com.facebook.imagepipeline.producers.NetworkFetcher;
import com.facebook.react.views.image.ReactImageView;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* loaded from: classes3.dex */
public final class d0 extends d {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final ExecutorService f4714b;

    /* renamed from: c, reason: collision with root package name */
    public final RealtimeSinceBootClock f4715c;

    public d0(int i5) {
        RealtimeSinceBootClock realtimeSinceBootClock = RealtimeSinceBootClock.get();
        this.f4714b = Executors.newFixedThreadPool(3);
        this.f4715c = realtimeSinceBootClock;
        this.a = i5;
    }

    public final HttpURLConnection a(Uri uri, int i5) {
        URL url;
        String format;
        Uri uri2 = w8.a.a;
        if (uri == null) {
            url = null;
        } else {
            try {
                url = new URL(uri.toString());
            } catch (MalformedURLException e9) {
                throw new RuntimeException(e9);
            }
        }
        HttpURLConnection httpURLConnection = (HttpURLConnection) url.openConnection();
        httpURLConnection.setConnectTimeout(this.a);
        int responseCode = httpURLConnection.getResponseCode();
        if (responseCode >= 200 && responseCode < 300) {
            return httpURLConnection;
        }
        if (responseCode != 307 && responseCode != 308) {
            switch (responseCode) {
                case ReactImageView.REMOTE_IMAGE_FADE_DURATION_MS /* 300 */:
                case 301:
                case 302:
                case 303:
                    break;
                default:
                    httpURLConnection.disconnect();
                    throw new IOException(String.format("Image URL %s returned HTTP code %d", uri.toString(), Integer.valueOf(responseCode)));
            }
        }
        String headerField = httpURLConnection.getHeaderField("Location");
        httpURLConnection.disconnect();
        Uri parse = headerField != null ? Uri.parse(headerField) : null;
        String scheme = uri.getScheme();
        if (i5 > 0 && parse != null && !o8.h.f(parse.getScheme(), scheme)) {
            return a(parse, i5 - 1);
        }
        if (i5 == 0) {
            String uri3 = uri.toString();
            Locale.getDefault();
            format = "URL " + uri3 + " follows too many redirects";
        } else {
            format = String.format(Locale.getDefault(), "URL %s returned %d without a valid redirect", uri.toString(), Integer.valueOf(responseCode));
        }
        throw new IOException(format);
    }

    @Override // com.facebook.imagepipeline.producers.NetworkFetcher
    public final FetchState createFetchState(Consumer consumer, ProducerContext producerContext) {
        return new c0(consumer, producerContext);
    }

    @Override // com.facebook.imagepipeline.producers.NetworkFetcher
    public final void fetch(FetchState fetchState, NetworkFetcher.Callback callback) {
        c0 c0Var = (c0) fetchState;
        c0Var.f4707f = this.f4715c.now();
        v0 v0Var = (v0) callback;
        c0Var.f4691b.i(new b0(this.f4714b.submit(new a0(this, c0Var, v0Var)), v0Var));
    }

    @Override // com.facebook.imagepipeline.producers.NetworkFetcher
    public final Map getExtraMap(FetchState fetchState, int i5) {
        c0 c0Var = (c0) fetchState;
        HashMap hashMap = new HashMap(4);
        hashMap.put("queue_time", Long.toString(c0Var.f4708g - c0Var.f4707f));
        hashMap.put("fetch_time", Long.toString(c0Var.f4709h - c0Var.f4708g));
        hashMap.put("total_time", Long.toString(c0Var.f4709h - c0Var.f4707f));
        hashMap.put("image_size", Integer.toString(i5));
        return hashMap;
    }

    @Override // com.facebook.imagepipeline.producers.NetworkFetcher
    public final void onFetchCompletion(FetchState fetchState, int i5) {
        ((c0) fetchState).f4709h = this.f4715c.now();
    }
}
