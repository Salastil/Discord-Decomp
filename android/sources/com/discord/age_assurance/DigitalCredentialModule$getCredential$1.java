package com.discord.age_assurance;

import android.app.Activity;
import androidx.credentials.CredentialManager;
import com.discord.logging.Log;
import com.facebook.react.bridge.Promise;
import fo.q;
import java.util.concurrent.CancellationException;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.b0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.h;
import n1.p;
import n1.r;
import o1.j;
import o1.l;
import o1.m;
import o1.n;
import o1.o;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.age_assurance.DigitalCredentialModule$getCredential$1", f = "DigitalCredentialModule.kt", l = {62}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class DigitalCredentialModule$getCredential$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Activity $activity;
    final /* synthetic */ Promise $promise;
    final /* synthetic */ String $requestJson;
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ DigitalCredentialModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public DigitalCredentialModule$getCredential$1(String str, DigitalCredentialModule digitalCredentialModule, Activity activity, Promise promise, Continuation continuation) {
        super(2, continuation);
        this.$requestJson = str;
        this.this$0 = digitalCredentialModule;
        this.$activity = activity;
        this.$promise = promise;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        DigitalCredentialModule$getCredential$1 digitalCredentialModule$getCredential$1 = new DigitalCredentialModule$getCredential$1(this.$requestJson, this.this$0, this.$activity, this.$promise, continuation);
        digitalCredentialModule$getCredential$1.L$0 = obj;
        return digitalCredentialModule$getCredential$1;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0139  */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Object i5;
        Throwable a;
        Promise promise;
        CredentialManager credentialManager;
        Object c6;
        ko.a aVar = ko.a.f13464d;
        int i6 = this.label;
        try {
            if (i6 == 0) {
                ki.b.R(obj);
                String str = this.$requestJson;
                DigitalCredentialModule digitalCredentialModule = this.this$0;
                Activity activity = this.$activity;
                Promise promise2 = this.$promise;
                q qVar = Result.f13476e;
                p pVar = new p(b0.c(new r(str)));
                try {
                    credentialManager = digitalCredentialModule.credentialManager;
                    this.L$0 = promise2;
                    this.label = 1;
                    c6 = credentialManager.c(activity, pVar, this);
                    if (c6 == aVar) {
                        return aVar;
                    }
                    promise = promise2;
                } catch (j e9) {
                    e = e9;
                    promise = promise2;
                    promise.reject(DigitalCredentialModule.CODE_CANCELLED, "User cancelled the credential request", e);
                    i5 = Unit.a;
                    q qVar2 = Result.f13476e;
                    Promise promise3 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (m e10) {
                    e = e10;
                    promise = promise2;
                    Log.INSTANCE.e(DigitalCredentialModule.TAG, "Credential request was interrupted", e);
                    promise.reject(DigitalCredentialModule.CODE_FAILED, "Credential request was interrupted", e);
                    i5 = Unit.a;
                    q qVar22 = Result.f13476e;
                    Promise promise32 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (n e11) {
                    e = e11;
                    promise = promise2;
                    Log.INSTANCE.e(DigitalCredentialModule.TAG, "Provider configuration error", e);
                    promise.reject(DigitalCredentialModule.CODE_NOT_AVAILABLE, "Credential provider not configured", e);
                    i5 = Unit.a;
                    q qVar222 = Result.f13476e;
                    Promise promise322 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (o e12) {
                    e = e12;
                    promise = promise2;
                    Log.INSTANCE.e(DigitalCredentialModule.TAG, "Unknown credential error", e);
                    promise.reject(DigitalCredentialModule.CODE_FAILED, "Unknown credential error", e);
                    i5 = Unit.a;
                    q qVar2222 = Result.f13476e;
                    Promise promise3222 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (o1.p e13) {
                    e = e13;
                    promise = promise2;
                    Log.INSTANCE.e(DigitalCredentialModule.TAG, "Credential manager not supported", e);
                    promise.reject(DigitalCredentialModule.CODE_NOT_AVAILABLE, "Credential manager not supported on this device", e);
                    i5 = Unit.a;
                    q qVar22222 = Result.f13476e;
                    Promise promise32222 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (o1.q e14) {
                    e = e14;
                    promise = promise2;
                    promise.reject(DigitalCredentialModule.CODE_NOT_AVAILABLE, "No matching credential available", e);
                    i5 = Unit.a;
                    q qVar222222 = Result.f13476e;
                    Promise promise322222 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (l e15) {
                    e = e15;
                    promise = promise2;
                    Log.INSTANCE.e(DigitalCredentialModule.TAG, "Credential error: " + e.a(), e);
                    promise.reject(DigitalCredentialModule.CODE_FAILED, "Credential error: " + e.a(), e);
                    i5 = Unit.a;
                    q qVar2222222 = Result.f13476e;
                    Promise promise3222222 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                }
            } else {
                if (i6 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                promise = (Promise) this.L$0;
                try {
                    ki.b.R(obj);
                    c6 = obj;
                } catch (j e16) {
                    e = e16;
                    promise.reject(DigitalCredentialModule.CODE_CANCELLED, "User cancelled the credential request", e);
                    i5 = Unit.a;
                    q qVar22222222 = Result.f13476e;
                    Promise promise32222222 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (m e17) {
                    e = e17;
                    Log.INSTANCE.e(DigitalCredentialModule.TAG, "Credential request was interrupted", e);
                    promise.reject(DigitalCredentialModule.CODE_FAILED, "Credential request was interrupted", e);
                    i5 = Unit.a;
                    q qVar222222222 = Result.f13476e;
                    Promise promise322222222 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (n e18) {
                    e = e18;
                    Log.INSTANCE.e(DigitalCredentialModule.TAG, "Provider configuration error", e);
                    promise.reject(DigitalCredentialModule.CODE_NOT_AVAILABLE, "Credential provider not configured", e);
                    i5 = Unit.a;
                    q qVar2222222222 = Result.f13476e;
                    Promise promise3222222222 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (o e19) {
                    e = e19;
                    Log.INSTANCE.e(DigitalCredentialModule.TAG, "Unknown credential error", e);
                    promise.reject(DigitalCredentialModule.CODE_FAILED, "Unknown credential error", e);
                    i5 = Unit.a;
                    q qVar22222222222 = Result.f13476e;
                    Promise promise32222222222 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (o1.p e20) {
                    e = e20;
                    Log.INSTANCE.e(DigitalCredentialModule.TAG, "Credential manager not supported", e);
                    promise.reject(DigitalCredentialModule.CODE_NOT_AVAILABLE, "Credential manager not supported on this device", e);
                    i5 = Unit.a;
                    q qVar222222222222 = Result.f13476e;
                    Promise promise322222222222 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (o1.q e21) {
                    e = e21;
                    promise.reject(DigitalCredentialModule.CODE_NOT_AVAILABLE, "No matching credential available", e);
                    i5 = Unit.a;
                    q qVar2222222222222 = Result.f13476e;
                    Promise promise3222222222222 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                } catch (l e22) {
                    e = e22;
                    Log.INSTANCE.e(DigitalCredentialModule.TAG, "Credential error: " + e.a(), e);
                    promise.reject(DigitalCredentialModule.CODE_FAILED, "Credential error: " + e.a(), e);
                    i5 = Unit.a;
                    q qVar22222222222222 = Result.f13476e;
                    Promise promise32222222222222 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                }
            }
            bq.b bVar = ((n1.q) c6).a;
            String str2 = (String) bVar.f3143e;
            if (bVar instanceof n1.o) {
                promise.resolve(((n1.o) bVar).f14723i);
            } else {
                Log.e$default(Log.INSTANCE, DigitalCredentialModule.TAG, "Unexpected credential type: " + str2, (Throwable) null, 4, (Object) null);
                promise.reject(DigitalCredentialModule.CODE_FAILED, "Unexpected credential type: " + str2);
            }
            i5 = Unit.a;
            q qVar222222222222222 = Result.f13476e;
        } catch (Throwable th2) {
            q qVar3 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        Promise promise322222222222222 = this.$promise;
        a = Result.a(i5);
        if (a != null) {
            if (a instanceof CancellationException) {
                throw a;
            }
            Log.INSTANCE.e(DigitalCredentialModule.TAG, "Unexpected error during credential request", a);
            promise322222222222222.reject(DigitalCredentialModule.CODE_FAILED, "Unexpected error during credential request", a);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((DigitalCredentialModule$getCredential$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
