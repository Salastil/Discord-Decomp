package com.discord.security_key;

import androidx.credentials.CredentialManager;
import com.discord.codegen.NativeSecurityKeyManagerModuleSpec;
import com.discord.logging.Log;
import com.facebook.react.bridge.Promise;
import com.facebook.react.devsupport.StackTraceHelper;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import n1.y;
import org.json.JSONObject;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.security_key.SecurityKeyManagerModule$signalCurrentUserDetails$1", f = "SecurityKeyManagerModule.kt", l = {417}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class SecurityKeyManagerModule$signalCurrentUserDetails$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $displayName;
    final /* synthetic */ String $name;
    final /* synthetic */ Promise $promise;
    final /* synthetic */ String $rpId;
    final /* synthetic */ String $userId;
    int label;
    final /* synthetic */ SecurityKeyManagerModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SecurityKeyManagerModule$signalCurrentUserDetails$1(SecurityKeyManagerModule securityKeyManagerModule, Promise promise, String str, String str2, String str3, String str4, Continuation continuation) {
        super(2, continuation);
        this.this$0 = securityKeyManagerModule;
        this.$promise = promise;
        this.$rpId = str;
        this.$userId = str2;
        this.$name = str3;
        this.$displayName = str4;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new SecurityKeyManagerModule$signalCurrentUserDetails$1(this.this$0, this.$promise, this.$rpId, this.$userId, this.$name, this.$displayName, continuation);
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
                String str2 = this.$userId;
                String str3 = this.$name;
                String str4 = this.$displayName;
                jSONObject.put("rpId", str);
                jSONObject.put("userId", str2);
                jSONObject.put(StackTraceHelper.NAME_KEY, str3);
                jSONObject.put("displayName", str4);
                String jSONObject2 = jSONObject.toString();
                Intrinsics.checkNotNullExpressionValue(jSONObject2, "toString(...)");
                credentialManager = this.this$0.credentialManager;
                y yVar = new y(jSONObject2);
                this.label = 1;
                if (credentialManager.g(yVar, this) == aVar) {
                    return aVar;
                }
            } else {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
            }
        } catch (Exception e9) {
            Log.INSTANCE.w(NativeSecurityKeyManagerModuleSpec.NAME, "signalCurrentUserDetails failed", e9);
        }
        this.$promise.resolve(null);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((SecurityKeyManagerModule$signalCurrentUserDetails$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
