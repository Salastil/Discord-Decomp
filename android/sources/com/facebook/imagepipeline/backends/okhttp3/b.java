package com.facebook.imagepipeline.backends.okhttp3;

import android.os.SystemClock;
import com.facebook.imagepipeline.backends.okhttp3.OkHttpNetworkFetcher;
import com.facebook.imagepipeline.common.BytesRange;
import com.facebook.imagepipeline.producers.NetworkFetcher;
import com.facebook.react.devsupport.StackTraceHelper;
import fo.u;
import java.io.IOException;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Call;
import okhttp3.Response;
import okhttp3.ResponseBody;
import ps.h;

/* loaded from: classes3.dex */
public final class b implements h {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ OkHttpNetworkFetcher.OkHttpNetworkFetchState f4567d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ OkHttpNetworkFetcher f4568e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ NetworkFetcher.Callback f4569i;

    public b(OkHttpNetworkFetcher.OkHttpNetworkFetchState okHttpNetworkFetchState, OkHttpNetworkFetcher okHttpNetworkFetcher, NetworkFetcher.Callback callback) {
        this.f4567d = okHttpNetworkFetchState;
        this.f4568e = okHttpNetworkFetcher;
        this.f4569i = callback;
    }

    @Override // ps.h
    public final void onFailure(Call call, IOException e9) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(e9, "e");
        OkHttpNetworkFetcher.access$handleException(this.f4568e, call, e9, this.f4569i);
    }

    @Override // ps.h
    public final void onResponse(Call call, Response response) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(response, "response");
        long elapsedRealtime = SystemClock.elapsedRealtime();
        OkHttpNetworkFetcher.OkHttpNetworkFetchState okHttpNetworkFetchState = this.f4567d;
        okHttpNetworkFetchState.f4564g = elapsedRealtime;
        ResponseBody responseBody = response.f16091y;
        NetworkFetcher.Callback callback = this.f4569i;
        OkHttpNetworkFetcher okHttpNetworkFetcher = this.f4568e;
        try {
            if (responseBody == null) {
                OkHttpNetworkFetcher.access$handleException(okHttpNetworkFetcher, call, OkHttpNetworkFetcher.access$makeExceptionFromResponse(okHttpNetworkFetcher, "Response body null: " + response, response), callback);
                return;
            }
            try {
                if (response.g()) {
                    u uVar = BytesRange.f4575c;
                    Intrinsics.checkNotNullParameter("Content-Range", StackTraceHelper.NAME_KEY);
                    BytesRange i5 = j8.b.i(response.f("Content-Range", null));
                    if (i5 != null && (i5.a != 0 || i5.f4576b != Integer.MAX_VALUE)) {
                        okHttpNetworkFetchState.f4694e = i5;
                        okHttpNetworkFetchState.f4693d = 8;
                    }
                    callback.b(responseBody.byteStream(), responseBody.contentLength() < 0 ? 0 : (int) responseBody.contentLength());
                } else {
                    OkHttpNetworkFetcher.access$handleException(okHttpNetworkFetcher, call, OkHttpNetworkFetcher.access$makeExceptionFromResponse(okHttpNetworkFetcher, "Unexpected HTTP code " + response, response), callback);
                }
            } catch (Exception e9) {
                OkHttpNetworkFetcher.access$handleException(okHttpNetworkFetcher, call, e9, callback);
            }
            Unit unit = Unit.a;
            responseBody.close();
        } finally {
        }
    }
}
