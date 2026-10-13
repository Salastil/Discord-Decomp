package com.facebook.react.common.network;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Call;
import okhttp3.Dispatcher;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import org.jetbrains.annotations.NotNull;
import ts.f;

@Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0018\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u0001H\u0007¨\u0006\t"}, d2 = {"Lcom/facebook/react/common/network/OkHttpCallUtil;", "", "<init>", "()V", "cancelTag", "", "client", "Lokhttp3/OkHttpClient;", "tag", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class OkHttpCallUtil {

    @NotNull
    public static final OkHttpCallUtil INSTANCE = new OkHttpCallUtil();

    private OkHttpCallUtil() {
    }

    public static final void cancelTag(@NotNull OkHttpClient client, @NotNull Object tag) {
        List<Call> unmodifiableList;
        List<Call> unmodifiableList2;
        Intrinsics.checkNotNullParameter(client, "client");
        Intrinsics.checkNotNullParameter(tag, "tag");
        Dispatcher dispatcher = client.f16046d;
        synchronized (dispatcher) {
            try {
                ArrayDeque arrayDeque = dispatcher.f16028d;
                ArrayList arrayList = new ArrayList(d0.l(arrayDeque, 10));
                Iterator it = arrayDeque.iterator();
                while (it.hasNext()) {
                    arrayList.add(((f) it.next()).f18725i);
                }
                unmodifiableList = Collections.unmodifiableList(arrayList);
                Intrinsics.checkNotNullExpressionValue(unmodifiableList, "unmodifiableList(readyAsyncCalls.map { it.call })");
            } finally {
            }
        }
        for (Call call : unmodifiableList) {
            Request i5 = call.i();
            i5.getClass();
            Intrinsics.checkNotNullParameter(Object.class, "type");
            if (Intrinsics.areEqual(tag, Object.class.cast(i5.f16079e.get(Object.class)))) {
                call.cancel();
                return;
            }
        }
        synchronized (dispatcher) {
            try {
                ArrayDeque arrayDeque2 = dispatcher.f16030f;
                ArrayDeque arrayDeque3 = dispatcher.f16029e;
                ArrayList arrayList2 = new ArrayList(d0.l(arrayDeque3, 10));
                Iterator it2 = arrayDeque3.iterator();
                while (it2.hasNext()) {
                    arrayList2.add(((f) it2.next()).f18725i);
                }
                unmodifiableList2 = Collections.unmodifiableList(CollectionsKt.V(arrayDeque2, arrayList2));
                Intrinsics.checkNotNullExpressionValue(unmodifiableList2, "unmodifiableList(running…yncCalls.map { it.call })");
            } finally {
            }
        }
        for (Call call2 : unmodifiableList2) {
            Request i6 = call2.i();
            i6.getClass();
            Intrinsics.checkNotNullParameter(Object.class, "type");
            if (Intrinsics.areEqual(tag, Object.class.cast(i6.f16079e.get(Object.class)))) {
                call2.cancel();
                return;
            }
        }
    }
}
