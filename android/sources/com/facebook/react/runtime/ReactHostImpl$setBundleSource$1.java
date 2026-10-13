package com.facebook.react.runtime;

import com.facebook.react.devsupport.DevSupportManagerBase;
import com.facebook.react.devsupport.interfaces.DevSupportManager;
import com.facebook.react.packagerconnection.PackagerConnectionSettings;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.facebook.react.runtime.ReactHostImpl$setBundleSource$1", f = "ReactHostImpl.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes3.dex */
public final class ReactHostImpl$setBundleSource$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $debugServerHost;
    final /* synthetic */ String $moduleName;
    final /* synthetic */ Function1<Map<String, String>, Map<String, String>> $queryMapper;
    int label;
    final /* synthetic */ ReactHostImpl this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public ReactHostImpl$setBundleSource$1(ReactHostImpl reactHostImpl, Function1<? super Map<String, String>, ? extends Map<String, String>> function1, String str, String str2, Continuation continuation) {
        super(2, continuation);
        this.this$0 = reactHostImpl;
        this.$queryMapper = function1;
        this.$debugServerHost = str;
        this.$moduleName = str2;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ReactHostImpl$setBundleSource$1(this.this$0, this.$queryMapper, this.$debugServerHost, this.$moduleName, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ki.b.R(obj);
        DevSupportManager devSupportManager = this.this$0.getDevSupportManager();
        Intrinsics.checkNotNull(devSupportManager, "null cannot be cast to non-null type com.facebook.react.devsupport.DevSupportManagerBase");
        ((DevSupportManagerBase) devSupportManager).getDevServerHelper().closePackagerConnection();
        PackagerConnectionSettings packagerConnectionSettings = ((DevSupportManagerBase) this.this$0.getDevSupportManager()).getDevSettings().getPackagerConnectionSettings();
        packagerConnectionSettings.setPackagerOptionsUpdater(this.$queryMapper);
        packagerConnectionSettings.setDebugServerHost(this.$debugServerHost);
        ((DevSupportManagerBase) this.this$0.getDevSupportManager()).setJsAppBundleName(this.$moduleName);
        this.this$0.reload("Changed bundle source");
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ReactHostImpl$setBundleSource$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
