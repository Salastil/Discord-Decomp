package com.discord.samsung;

import fo.q;
import java.util.concurrent.CancellationException;
import ki.b;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import nr.g0;
import nr.x;
import okhttp3.OkHttpClient;
import ur.e;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.samsung.SamsungModule$finishSamsungAuthorization$1", f = "SamsungModule.kt", l = {176}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class SamsungModule$finishSamsungAuthorization$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $authCode;
    final /* synthetic */ String $location;
    final /* synthetic */ String $state;
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ SamsungModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SamsungModule$finishSamsungAuthorization$1(String str, SamsungModule samsungModule, String str2, String str3, Continuation continuation) {
        super(2, continuation);
        this.$location = str;
        this.this$0 = samsungModule;
        this.$state = str2;
        this.$authCode = str3;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        SamsungModule$finishSamsungAuthorization$1 samsungModule$finishSamsungAuthorization$1 = new SamsungModule$finishSamsungAuthorization$1(this.$location, this.this$0, this.$state, this.$authCode, continuation);
        samsungModule$finishSamsungAuthorization$1.L$0 = obj;
        return samsungModule$finishSamsungAuthorization$1;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Object i5;
        ko.a aVar = ko.a.f13464d;
        int i6 = this.label;
        try {
            if (i6 == 0) {
                b.R(obj);
                String str = this.$location;
                SamsungModule samsungModule = this.this$0;
                String str2 = this.$state;
                String str3 = this.$authCode;
                q qVar = Result.f13476e;
                OkHttpClient.Builder builder = new OkHttpClient.Builder();
                builder.f16059h = false;
                OkHttpClient okHttpClient = new OkHttpClient(builder);
                e eVar = g0.a;
                ur.d dVar = ur.d.f19093i;
                SamsungModule$finishSamsungAuthorization$1$1$1 samsungModule$finishSamsungAuthorization$1$1$1 = new SamsungModule$finishSamsungAuthorization$1$1$1(str, samsungModule, okHttpClient, str2, str3, null);
                this.label = 1;
                if (x.A(dVar, samsungModule$finishSamsungAuthorization$1$1$1, this) == aVar) {
                    return aVar;
                }
            } else {
                if (i6 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                b.R(obj);
            }
            i5 = Unit.a;
            q qVar2 = Result.f13476e;
        } catch (Throwable th2) {
            q qVar3 = Result.f13476e;
            i5 = b.i(th2);
        }
        SamsungModule samsungModule2 = this.this$0;
        Throwable a = Result.a(i5);
        if (a != null) {
            if (a instanceof CancellationException) {
                throw a;
            }
            samsungModule2.rejectConnection(a);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((SamsungModule$finishSamsungAuthorization$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
