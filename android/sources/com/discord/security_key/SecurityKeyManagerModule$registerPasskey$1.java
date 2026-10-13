package com.discord.security_key;

import android.app.Activity;
import androidx.credentials.CredentialManager;
import com.discord.codegen.NativeSecurityKeyManagerModuleSpec;
import com.discord.logging.Log;
import fo.q;
import java.util.concurrent.CancellationException;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import n1.c;
import o1.e;
import o1.f;
import o1.g;
import o1.i;
import org.json.JSONObject;
import org.json.JSONTokener;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.security_key.SecurityKeyManagerModule$registerPasskey$1", f = "SecurityKeyManagerModule.kt", l = {150}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class SecurityKeyManagerModule$registerPasskey$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $requestJson;
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ SecurityKeyManagerModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SecurityKeyManagerModule$registerPasskey$1(String str, SecurityKeyManagerModule securityKeyManagerModule, Continuation continuation) {
        super(2, continuation);
        this.$requestJson = str;
        this.this$0 = securityKeyManagerModule;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        SecurityKeyManagerModule$registerPasskey$1 securityKeyManagerModule$registerPasskey$1 = new SecurityKeyManagerModule$registerPasskey$1(this.$requestJson, this.this$0, continuation);
        securityKeyManagerModule$registerPasskey$1.L$0 = obj;
        return securityKeyManagerModule$registerPasskey$1;
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0135  */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Object i5;
        Throwable a;
        o1.d dVar;
        SecurityKeyManagerModule securityKeyManagerModule;
        q1.a aVar;
        i iVar;
        o1.h hVar;
        g gVar;
        f fVar;
        e eVar;
        o1.b bVar;
        CredentialManager credentialManager;
        ko.a aVar2 = ko.a.f13464d;
        int i6 = this.label;
        try {
            if (i6 == 0) {
                ki.b.R(obj);
                String str = this.$requestJson;
                SecurityKeyManagerModule securityKeyManagerModule2 = this.this$0;
                q qVar = Result.f13476e;
                String jSONObject = new JSONObject(new JSONTokener(str)).getJSONObject("publicKey").toString();
                Intrinsics.checkNotNullExpressionValue(jSONObject, "toString(...)");
                n1.e eVar2 = new n1.e(jSONObject);
                try {
                    credentialManager = securityKeyManagerModule2.credentialManager;
                    Activity currentActivity = securityKeyManagerModule2.getReactContext().getCurrentActivity();
                    Intrinsics.checkNotNull(currentActivity);
                    this.L$0 = securityKeyManagerModule2;
                    this.label = 1;
                    obj = credentialManager.d(currentActivity, eVar2, this);
                    if (obj == aVar2) {
                        return aVar2;
                    }
                    securityKeyManagerModule = securityKeyManagerModule2;
                } catch (o1.b e9) {
                    bVar = e9;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotAllowedError, bVar);
                    i5 = Unit.a;
                    q qVar2 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule3 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (e e10) {
                    eVar = e10;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotAllowedError, eVar);
                    i5 = Unit.a;
                    q qVar22 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule32 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (f e11) {
                    fVar = e11;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotAllowedError, fVar);
                    i5 = Unit.a;
                    q qVar222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule322 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (g e12) {
                    gVar = e12;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotSupportedError, gVar);
                    i5 = Unit.a;
                    q qVar2222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule3222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (o1.h e13) {
                    hVar = e13;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    securityKeyManagerModule.reject(WebAuthnDOMException.UnknownError, hVar);
                    i5 = Unit.a;
                    q qVar22222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule32222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (i e14) {
                    iVar = e14;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotSupportedError, iVar);
                    i5 = Unit.a;
                    q qVar222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule322222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (q1.a e15) {
                    aVar = e15;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    String simpleName = aVar.f16646e.getClass().getSimpleName();
                    Intrinsics.checkNotNullExpressionValue(simpleName, "getSimpleName(...)");
                    securityKeyManagerModule.reject(simpleName, null, aVar);
                    i5 = Unit.a;
                    q qVar2222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule3222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (o1.d e16) {
                    dVar = e16;
                    securityKeyManagerModule = securityKeyManagerModule2;
                    securityKeyManagerModule.reject(WebAuthnDOMException.UnknownError, dVar);
                    i5 = Unit.a;
                    q qVar22222222 = Result.f13476e;
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
                } catch (o1.b e17) {
                    bVar = e17;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotAllowedError, bVar);
                    i5 = Unit.a;
                    q qVar222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule322222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (e e18) {
                    eVar = e18;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotAllowedError, eVar);
                    i5 = Unit.a;
                    q qVar2222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule3222222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (f e19) {
                    fVar = e19;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotAllowedError, fVar);
                    i5 = Unit.a;
                    q qVar22222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule32222222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (g e20) {
                    gVar = e20;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotSupportedError, gVar);
                    i5 = Unit.a;
                    q qVar222222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule322222222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (o1.h e21) {
                    hVar = e21;
                    securityKeyManagerModule.reject(WebAuthnDOMException.UnknownError, hVar);
                    i5 = Unit.a;
                    q qVar2222222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule3222222222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (i e22) {
                    iVar = e22;
                    securityKeyManagerModule.reject(WebAuthnDOMException.NotSupportedError, iVar);
                    i5 = Unit.a;
                    q qVar22222222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule32222222222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (q1.a e23) {
                    aVar = e23;
                    String simpleName2 = aVar.f16646e.getClass().getSimpleName();
                    Intrinsics.checkNotNullExpressionValue(simpleName2, "getSimpleName(...)");
                    securityKeyManagerModule.reject(simpleName2, null, aVar);
                    i5 = Unit.a;
                    q qVar222222222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule322222222222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (o1.d e24) {
                    dVar = e24;
                    securityKeyManagerModule.reject(WebAuthnDOMException.UnknownError, dVar);
                    i5 = Unit.a;
                    q qVar2222222222222222 = Result.f13476e;
                    SecurityKeyManagerModule securityKeyManagerModule3222222222222222 = this.this$0;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                }
            }
            c cVar = (c) obj;
            if (cVar instanceof n1.f) {
                securityKeyManagerModule.resolve(((n1.f) cVar).f14715b);
            } else {
                Log.e$default(Log.INSTANCE, NativeSecurityKeyManagerModuleSpec.NAME, "Received unsupported response type: " + cVar.a, (Throwable) null, 4, (Object) null);
                securityKeyManagerModule.reject(WebAuthnDOMException.UnknownError, "Unknown credential type " + cVar.a);
            }
            i5 = Unit.a;
            q qVar22222222222222222 = Result.f13476e;
        } catch (Throwable th2) {
            q qVar3 = Result.f13476e;
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
        return ((SecurityKeyManagerModule$registerPasskey$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
