package com.discord.avatar.react;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.bridge.Promise;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Deferred;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.avatar.react.APNGPreloadModule$preload$1", f = "APNGPreloadModule.kt", l = {ChatViewRecyclerTypes.POLL_IMAGE_ONLY}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class APNGPreloadModule$preload$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Promise $promise;
    final /* synthetic */ String $url;
    int label;
    final /* synthetic */ APNGPreloadModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public APNGPreloadModule$preload$1(APNGPreloadModule aPNGPreloadModule, String str, Promise promise, Continuation continuation) {
        super(2, continuation);
        this.this$0 = aPNGPreloadModule;
        this.$url = str;
        this.$promise = promise;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new APNGPreloadModule$preload$1(this.this$0, this.$url, this.$promise, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Deferred orStartDownload;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        try {
            if (i5 == 0) {
                b.R(obj);
                orStartDownload = this.this$0.getOrStartDownload(this.$url);
                this.label = 1;
                if (orStartDownload.A(this) == aVar) {
                    return aVar;
                }
            } else {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                b.R(obj);
            }
            this.$promise.resolve(null);
        } catch (Throwable th2) {
            this.$promise.reject(th2);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((APNGPreloadModule$preload$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
