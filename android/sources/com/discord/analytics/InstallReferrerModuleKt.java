package com.discord.analytics;

import com.android.installreferrer.api.InstallReferrerClient;
import com.android.installreferrer.api.InstallReferrerStateListener;
import fo.q;
import ki.b;
import ko.a;
import ko.f;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CancellableContinuation;
import nr.j;

@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0012\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0082@¢\u0006\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"await", "", "Lcom/android/installreferrer/api/InstallReferrerClient;", "(Lcom/android/installreferrer/api/InstallReferrerClient;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "analytics_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nInstallReferrerModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 InstallReferrerModule.kt\ncom/discord/analytics/InstallReferrerModuleKt\n+ 2 CancellableContinuation.kt\nkotlinx/coroutines/CancellableContinuationKt\n*L\n1#1,98:1\n426#2,11:99\n*S KotlinDebug\n*F\n+ 1 InstallReferrerModule.kt\ncom/discord/analytics/InstallReferrerModuleKt\n*L\n74#1:99,11\n*E\n"})
/* loaded from: classes.dex */
public final class InstallReferrerModuleKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Object await(final InstallReferrerClient installReferrerClient, Continuation frame) {
        Object i5;
        final j jVar = new j(1, f.b(frame));
        jVar.t();
        InstallReferrerStateListener installReferrerStateListener = new InstallReferrerStateListener() { // from class: com.discord.analytics.InstallReferrerModuleKt$await$2$listener$1
            @Override // com.android.installreferrer.api.InstallReferrerStateListener
            public void onInstallReferrerServiceDisconnected() {
                if (CancellableContinuation.this.c()) {
                    CancellableContinuation.this.m(null);
                }
            }

            @Override // com.android.installreferrer.api.InstallReferrerStateListener
            public void onInstallReferrerSetupFinished(int responseCode) {
                Integer valueOf = Integer.valueOf(responseCode);
                CancellableContinuation cancellableContinuation = CancellableContinuation.this;
                q qVar = Result.f13476e;
                cancellableContinuation.resumeWith(valueOf);
            }
        };
        jVar.v(new Function1<Throwable, Unit>() { // from class: com.discord.analytics.InstallReferrerModuleKt$await$2$1
            @Override // kotlin.jvm.functions.Function1
            public /* bridge */ /* synthetic */ Object invoke(Object obj) {
                invoke((Throwable) obj);
                return Unit.a;
            }

            public final void invoke(Throwable th2) {
                InstallReferrerClient installReferrerClient2 = InstallReferrerClient.this;
                try {
                    q qVar = Result.f13476e;
                    installReferrerClient2.endConnection();
                    Unit unit = Unit.a;
                } catch (Throwable th3) {
                    q qVar2 = Result.f13476e;
                    b.i(th3);
                }
            }
        });
        try {
            q qVar = Result.f13476e;
            installReferrerClient.startConnection(installReferrerStateListener);
            i5 = Unit.a;
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = b.i(th2);
        }
        Throwable a = Result.a(i5);
        if (a != null) {
            jVar.resumeWith(b.i(a));
        }
        Object r5 = jVar.r();
        if (r5 == a.f13464d) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return r5;
    }
}
