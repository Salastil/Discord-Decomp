package com.discord.security_key;

import androidx.credentials.CredentialManager;
import com.discord.codegen.NativeSecurityKeyManagerModuleSpec;
import com.discord.logging.Log;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReadableArray;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import n1.v;
import org.json.JSONArray;
import org.json.JSONObject;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.security_key.SecurityKeyManagerModule$signalAllAcceptedCredentials$1", f = "SecurityKeyManagerModule.kt", l = {398}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class SecurityKeyManagerModule$signalAllAcceptedCredentials$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ ReadableArray $allAcceptedCredentialIds;
    final /* synthetic */ Promise $promise;
    final /* synthetic */ String $rpId;
    final /* synthetic */ String $userId;
    int label;
    final /* synthetic */ SecurityKeyManagerModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SecurityKeyManagerModule$signalAllAcceptedCredentials$1(ReadableArray readableArray, SecurityKeyManagerModule securityKeyManagerModule, Promise promise, String str, String str2, Continuation continuation) {
        super(2, continuation);
        this.$allAcceptedCredentialIds = readableArray;
        this.this$0 = securityKeyManagerModule;
        this.$promise = promise;
        this.$rpId = str;
        this.$userId = str2;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new SecurityKeyManagerModule$signalAllAcceptedCredentials$1(this.$allAcceptedCredentialIds, this.this$0, this.$promise, this.$rpId, this.$userId, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        CredentialManager credentialManager;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        try {
            if (i5 == 0) {
                ki.b.R(obj);
                JSONArray jSONArray = new JSONArray();
                int size = this.$allAcceptedCredentialIds.size();
                for (int i6 = 0; i6 < size; i6++) {
                    jSONArray.put(this.$allAcceptedCredentialIds.getString(i6));
                }
                JSONObject jSONObject = new JSONObject();
                String str = this.$rpId;
                String str2 = this.$userId;
                jSONObject.put("rpId", str);
                jSONObject.put("userId", str2);
                jSONObject.put("allAcceptedCredentialIds", jSONArray);
                String jSONObject2 = jSONObject.toString();
                Intrinsics.checkNotNullExpressionValue(jSONObject2, "toString(...)");
                credentialManager = this.this$0.credentialManager;
                v vVar = new v(jSONObject2);
                this.label = 1;
                if (credentialManager.g(vVar, this) == aVar) {
                    return aVar;
                }
            } else {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
            }
        } catch (Exception e9) {
            Log.INSTANCE.w(NativeSecurityKeyManagerModuleSpec.NAME, "signalAllAcceptedCredentials failed", e9);
        }
        this.$promise.resolve(null);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((SecurityKeyManagerModule$signalAllAcceptedCredentials$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
