package com.discord.security_key;

import androidx.credentials.CredentialManager;
import com.discord.codegen.NativeSecurityKeyManagerModuleSpec;
import com.discord.logging.Log;
import com.facebook.react.bridge.Promise;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import n1.z;
import org.json.JSONObject;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.security_key.SecurityKeyManagerModule$signalUnknownCredential$1", f = "SecurityKeyManagerModule.kt", l = {434}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class SecurityKeyManagerModule$signalUnknownCredential$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $credentialId;
    final /* synthetic */ Promise $promise;
    final /* synthetic */ String $rpId;
    int label;
    final /* synthetic */ SecurityKeyManagerModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SecurityKeyManagerModule$signalUnknownCredential$1(SecurityKeyManagerModule securityKeyManagerModule, Promise promise, String str, String str2, Continuation continuation) {
        super(2, continuation);
        this.this$0 = securityKeyManagerModule;
        this.$promise = promise;
        this.$rpId = str;
        this.$credentialId = str2;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new SecurityKeyManagerModule$signalUnknownCredential$1(this.this$0, this.$promise, this.$rpId, this.$credentialId, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        CredentialManager credentialManager;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        try {
            if (i5 == 0) {
                ki.b.R(obj);
                JSONObject jSONObject = new JSONObject();
                String str = this.$rpId;
                String str2 = this.$credentialId;
                jSONObject.put("rpId", str);
                jSONObject.put("credentialId", str2);
                String jSONObject2 = jSONObject.toString();
                Intrinsics.checkNotNullExpressionValue(jSONObject2, "toString(...)");
                credentialManager = this.this$0.credentialManager;
                z zVar = new z(jSONObject2);
                this.label = 1;
                if (credentialManager.g(zVar, this) == aVar) {
                    return aVar;
                }
            } else {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
            }
        } catch (Exception e9) {
            Log.INSTANCE.w(NativeSecurityKeyManagerModuleSpec.NAME, "signalUnknownCredential failed", e9);
        }
        this.$promise.resolve(null);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((SecurityKeyManagerModule$signalUnknownCredential$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
