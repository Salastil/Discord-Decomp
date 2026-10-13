package com.discord.security_key;

import android.app.Activity;
import androidx.credentials.CredentialManager;
import com.discord.codegen.NativeSecurityKeyManagerModuleSpec;
import com.discord.logging.Log;
import java.util.ArrayList;
import java.util.concurrent.CancellationException;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import n1.s;
import n1.u;
import o1.j;
import o1.l;
import o1.m;
import o1.n;
import o1.o;
import o1.p;
import o1.q;
import org.json.JSONObject;
import org.json.JSONTokener;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.security_key.SecurityKeyManagerModule$authenticatePasskey$1", f = "SecurityKeyManagerModule.kt", l = {282}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class SecurityKeyManagerModule$authenticatePasskey$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $requestJson;
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ SecurityKeyManagerModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SecurityKeyManagerModule$authenticatePasskey$1(String str, SecurityKeyManagerModule securityKeyManagerModule, Continuation continuation) {
        super(2, continuation);
        this.$requestJson = str;
        this.this$0 = securityKeyManagerModule;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        SecurityKeyManagerModule$authenticatePasskey$1 securityKeyManagerModule$authenticatePasskey$1 = new SecurityKeyManagerModule$authenticatePasskey$1(this.$requestJson, this.this$0, continuation);
        securityKeyManagerModule$authenticatePasskey$1.L$0 = obj;
        return securityKeyManagerModule$authenticatePasskey$1;
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0167  */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Object i5;
        Throwable a;
        l lVar;
        SecurityKeyManagerModule securityKeyManagerModule;
        q1.b bVar;
        q qVar;
        p pVar;
        o oVar;
        n nVar;
        m mVar;
        j jVar;
        CredentialManager credentialManager;
        ko.a aVar = ko.a.f13464d;
        int i6 = this.label;
        try {
            if (i6 == 0) {
                ki.b.R(obj);
                String str = this.$requestJson;
                SecurityKeyManagerModule securityKeyManagerModule2 = this.this$0;
                fo.q qVar2 = Result.f13476e;
                String jSONObject = new JSONObject(new JSONTokener(str)).getJSONObject("publicKey").toString();
                Intrinsics.checkNotNullExpressionValue(jSONObject, "toString(...)");
                s credentialOption = new s(jSONObject);
                ArrayList arrayList = new ArrayList();
                Intrinsics.checkNotNullParameter(credentialOption, "credentialOption");
                arrayList.add(credentialOption);
                n1.p pVar2 = new n1.p(CollectionsKt.i0(arrayList));
                try {
                    credentialManager = securityKeyManagerModule2.credentialManager;
                    Activity currentActivity = securityKeyManagerModule2.getReactContext().getCurrentActivity();
                    Intrinsics.checkNotNull(currentActivity);
                    this.L$0 = securityKeyManagerModule2;
                    this.label = 1;
                    obj = credentialManager.c(currentActivity, pVar2, this);
                    if (obj == aVar) {
                        return aVar;
                    }
                    securityKeyManagerModule = securityKeyManagerModule2;
                } catch (j e9) {
                    jVar = e9;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotAllowedError, jVar);
                    i5 = Unit.a;
                    fo.q qVar3 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule3 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (m e10) {
                    mVar = e10;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotAllowedError, mVar);
                    i5 = Unit.a;
                    fo.q qVar32 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule32 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (n e11) {
                    nVar = e11;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    Log.INSTANCE.e(NativeSecurityKeyManagerModuleSpec.NAME, "authenticatePasskey error", nVar);
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotSupportedError, nVar);
                    i5 = Unit.a;
                    fo.q qVar322 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule322 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (o e12) {
                    oVar = e12;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    Log.INSTANCE.e(NativeSecurityKeyManagerModuleSpec.NAME, "authenticatePasskey error", oVar);
                    securityKeyManagerModule.reject(WebAuthnDOMException.UnknownError, oVar);
                    i5 = Unit.a;
                    fo.q qVar3222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule3222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (p e13) {
                    pVar = e13;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotSupportedError, pVar);
                    i5 = Unit.a;
                    fo.q qVar32222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule32222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (q e14) {
                    qVar = e14;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    Log.INSTANCE.i(NativeSecurityKeyManagerModuleSpec.NAME, "No credential found", qVar);
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotAllowedError, qVar);
                    i5 = Unit.a;
                    fo.q qVar322222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule322222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (q1.b e15) {
                    bVar = e15;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    String simpleName = bVar.f16650v.getClass().getSimpleName();
                    Intrinsics.checkNotNullExpressionValue(simpleName, "getSimpleName(...)");
                    securityKeyManagerModule.reject(simpleName, null, bVar);
                    i5 = Unit.a;
                    fo.q qVar3222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule3222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (l e16) {
                    lVar = e16;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    Log.INSTANCE.e(NativeSecurityKeyManagerModuleSpec.NAME, "authenticatePasskey error", lVar);
                    securityKeyManagerModule.reject(WebAuthnDOMException.UnknownError, lVar);
                    i5 = Unit.a;
                    fo.q qVar32222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule32222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                }
            } else {
                if (i6 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                securityKeyManagerModule = (SecurityKeyManagerModule) this.L$0;
                try {
                    ki.b.R(obj);
                } catch (j e17) {
                    jVar = e17;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotAllowedError, jVar);
                    i5 = Unit.a;
                    fo.q qVar322222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule322222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (m e18) {
                    mVar = e18;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotAllowedError, mVar);
                    i5 = Unit.a;
                    fo.q qVar3222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule3222222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (n e19) {
                    nVar = e19;
                    Log.INSTANCE.e(NativeSecurityKeyManagerModuleSpec.NAME, "authenticatePasskey error", nVar);
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotSupportedError, nVar);
                    i5 = Unit.a;
                    fo.q qVar32222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule32222222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (o e20) {
                    oVar = e20;
                    Log.INSTANCE.e(NativeSecurityKeyManagerModuleSpec.NAME, "authenticatePasskey error", oVar);
                    securityKeyManagerModule.reject(WebAuthnDOMException.UnknownError, oVar);
                    i5 = Unit.a;
                    fo.q qVar322222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule322222222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (p e21) {
                    pVar = e21;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotSupportedError, pVar);
                    i5 = Unit.a;
                    fo.q qVar3222222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule3222222222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (q e22) {
                    qVar = e22;
                    Log.INSTANCE.i(NativeSecurityKeyManagerModuleSpec.NAME, "No credential found", qVar);
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotAllowedError, qVar);
                    i5 = Unit.a;
                    fo.q qVar32222222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule32222222222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (q1.b e23) {
                    bVar = e23;
                    String simpleName2 = bVar.f16650v.getClass().getSimpleName();
                    Intrinsics.checkNotNullExpressionValue(simpleName2, "getSimpleName(...)");
                    securityKeyManagerModule.reject(simpleName2, null, bVar);
                    i5 = Unit.a;
                    fo.q qVar322222222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule322222222222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (l e24) {
                    lVar = e24;
                    Log.INSTANCE.e(NativeSecurityKeyManagerModuleSpec.NAME, "authenticatePasskey error", lVar);
                    securityKeyManagerModule.reject(WebAuthnDOMException.UnknownError, lVar);
                    i5 = Unit.a;
                    fo.q qVar3222222222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule3222222222222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                }
            }
            bq.b bVar2 = ((n1.q) obj).a;
            String str2 = (String) bVar2.f3143e;
            if (bVar2 instanceof u) {
                securityKeyManagerModule.resolve(((u) bVar2).f14726i);
            } else {
                Log.e$default(Log.INSTANCE, NativeSecurityKeyManagerModuleSpec.NAME, "Unsupported credential type returned: " + str2, (Throwable) null, 4, (Object) null);
                securityKeyManagerModule.reject(WebAuthnDOMException.UnknownError, "Unknown credential type " + str2);
            }
            i5 = Unit.a;
            fo.q qVar32222222222222222 = Result.f13476e;
        } catch (Throwable th2) {
            fo.q qVar4 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        SecurityKeyManagerModule securityKeyManagerModule32222222222222222 = this.this$0;
        a = Result.a(i5);
        if (a != null) {
            if (a instanceof CancellationException) {
                throw a;
            }
            securityKeyManagerModule32222222222222222.reject(WebAuthnDOMException.UnknownError, a);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((SecurityKeyManagerModule$authenticatePasskey$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
