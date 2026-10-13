package com.facebook.react.devsupport.inspector;

import com.facebook.imagepipeline.nativecode.c;
import java.io.IOException;
import java.io.InputStream;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Set;
import java.util.TreeSet;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.text.Charsets;
import okhttp3.Call;
import okhttp3.Headers;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.ResponseBody;
import org.jetbrains.annotations.NotNull;
import ps.h;

@Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0018\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0007¨\u0006\n"}, d2 = {"Lcom/facebook/react/devsupport/inspector/InspectorNetworkHelper;", "", "<init>", "()V", "loadNetworkResource", "", "url", "", "listener", "Lcom/facebook/react/devsupport/inspector/InspectorNetworkRequestListener;", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class InspectorNetworkHelper {

    @NotNull
    public static final InspectorNetworkHelper INSTANCE = new InspectorNetworkHelper();

    private InspectorNetworkHelper() {
    }

    public static final void loadNetworkResource(@NotNull String url, @NotNull final InspectorNetworkRequestListener listener) {
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(listener, "listener");
        try {
            Request.Builder builder = new Request.Builder();
            builder.i(url);
            DevSupportHttpClient.INSTANCE.getHttpClient$ReactAndroid_release().a(builder.b()).d(new h() { // from class: com.facebook.react.devsupport.inspector.InspectorNetworkHelper$loadNetworkResource$1
                @Override // ps.h
                public void onFailure(Call call, IOException e9) {
                    Intrinsics.checkNotNullParameter(call, "call");
                    Intrinsics.checkNotNullParameter(e9, "e");
                    if (call.x()) {
                        return;
                    }
                    InspectorNetworkRequestListener.this.onError(e9.getMessage());
                }

                @Override // ps.h
                public void onResponse(Call call, Response response) {
                    Intrinsics.checkNotNullParameter(call, "call");
                    Intrinsics.checkNotNullParameter(response, "response");
                    Headers headers = response.f16090x;
                    HashMap hashMap = new HashMap();
                    Intrinsics.checkNotNullParameter(StringCompanionObject.INSTANCE, "<this>");
                    Comparator CASE_INSENSITIVE_ORDER = String.CASE_INSENSITIVE_ORDER;
                    Intrinsics.checkNotNullExpressionValue(CASE_INSENSITIVE_ORDER, "CASE_INSENSITIVE_ORDER");
                    TreeSet treeSet = new TreeSet(CASE_INSENSITIVE_ORDER);
                    int size = headers.size();
                    for (int i5 = 0; i5 < size; i5++) {
                        treeSet.add(headers.b(i5));
                    }
                    Set<String> unmodifiableSet = Collections.unmodifiableSet(treeSet);
                    Intrinsics.checkNotNullExpressionValue(unmodifiableSet, "unmodifiableSet(result)");
                    for (String str : unmodifiableSet) {
                        hashMap.put(str, headers.a(str));
                    }
                    InspectorNetworkRequestListener.this.onHeaders(response.f16088v, hashMap);
                    try {
                        ResponseBody responseBody = response.f16091y;
                        InspectorNetworkRequestListener inspectorNetworkRequestListener = InspectorNetworkRequestListener.this;
                        if (responseBody != null) {
                            try {
                                InputStream byteStream = responseBody.byteStream();
                                byte[] bArr = new byte[8192];
                                while (true) {
                                    try {
                                        int read = byteStream.read(bArr);
                                        if (read == -1) {
                                            break;
                                        } else {
                                            inspectorNetworkRequestListener.onData(new String(bArr, 0, read, Charsets.UTF_8));
                                        }
                                    } finally {
                                    }
                                }
                                Unit unit = Unit.a;
                                byteStream.close();
                            } finally {
                            }
                        }
                        inspectorNetworkRequestListener.onCompletion();
                        Unit unit2 = Unit.a;
                        c.j(responseBody, null);
                    } catch (IOException e9) {
                        InspectorNetworkRequestListener.this.onError(e9.getMessage());
                    }
                }
            });
        } catch (IllegalArgumentException unused) {
            listener.onError("Not a valid URL: " + url);
        }
    }
}
