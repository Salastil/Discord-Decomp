package com.discord.samsung;

import android.net.Uri;
import com.discord.samsung.SamsungModule;
import e4.f;
import java.util.ArrayList;
import java.util.Map;
import java.util.regex.Pattern;
import ki.b;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.v0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import okhttp3.MediaType;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.RequestBody;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.samsung.SamsungModule$finishSamsungAuthorization$1$1$1", f = "SamsungModule.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nSamsungModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 SamsungModule.kt\ncom/discord/samsung/SamsungModule$finishSamsungAuthorization$1$1$1\n+ 2 _Maps.kt\nkotlin/collections/MapsKt___MapsKt\n*L\n1#1,303:1\n126#2:304\n153#2,3:305\n*S KotlinDebug\n*F\n+ 1 SamsungModule.kt\ncom/discord/samsung/SamsungModule$finishSamsungAuthorization$1$1$1\n*L\n195#1:304\n195#1:305,3\n*E\n"})
/* loaded from: classes.dex */
public final class SamsungModule$finishSamsungAuthorization$1$1$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $authCode;
    final /* synthetic */ OkHttpClient $client;
    final /* synthetic */ String $location;
    final /* synthetic */ String $state;
    int label;
    final /* synthetic */ SamsungModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SamsungModule$finishSamsungAuthorization$1$1$1(String str, SamsungModule samsungModule, OkHttpClient okHttpClient, String str2, String str3, Continuation continuation) {
        super(2, continuation);
        this.$location = str;
        this.this$0 = samsungModule;
        this.$client = okHttpClient;
        this.$state = str2;
        this.$authCode = str3;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new SamsungModule$finishSamsungAuthorization$1$1$1(this.$location, this.this$0, this.$client, this.$state, this.$authCode, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Uri handleSamsungCallback;
        String queryParameter;
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        Request.Builder builder = new Request.Builder();
        builder.f("GET", null);
        String str = this.$location;
        Intrinsics.checkNotNull(str);
        builder.i(str);
        handleSamsungCallback = this.this$0.handleSamsungCallback(this.$client.a(builder.b()).e());
        if (handleSamsungCallback == null || (queryParameter = handleSamsungCallback.getQueryParameter("redirect_uri")) == null) {
            throw new SamsungModule.Companion.SamsungCallbackException("no_redirect_uri", "No redirect uri returned from GET /callback");
        }
        Map g6 = v0.g(new Pair("state", this.$state), new Pair("code", s4.h.f("{\"code\":\"", this.$authCode, "\"}")));
        ArrayList arrayList = new ArrayList(g6.size());
        for (Map.Entry entry : g6.entrySet()) {
            arrayList.add(((String) entry.getKey()) + "=" + ((String) entry.getValue()));
        }
        String O = CollectionsKt.O(arrayList, "&", null, null, null, 62);
        RequestBody.Companion companion = RequestBody.Companion;
        Pattern pattern = MediaType.f16040d;
        MediaType s2 = f.s("application/x-www-form-urlencoded");
        companion.getClass();
        okhttp3.d body = RequestBody.Companion.a(O, s2);
        Request.Builder builder2 = new Request.Builder();
        Intrinsics.checkNotNullParameter(body, "body");
        builder2.f("POST", body);
        builder2.i(queryParameter);
        this.this$0.handleSamsungCallback(this.$client.a(builder2.b()).e());
        SamsungModule.resolveConnection$default(this.this$0, null, 1, null);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((SamsungModule$finishSamsungAuthorization$1$1$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
