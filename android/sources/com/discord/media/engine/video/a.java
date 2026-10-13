package com.discord.media.engine.video;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.CancellationSignal;
import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import androidx.credentials.playservices.controllers.identityauth.HiddenActivity;
import com.discord.media.engine.MediaEngine;
import com.discord.media.engine.types.VideoSink;
import com.discord.media.engine.video.AttachedVideoSinks;
import com.discord.permissions.NativePermissionManagerModule$createMultiPromiseResolver$1;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.WritableMap;
import java.util.concurrent.Executor;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import n1.h;
import sf.f;
import sf.m;
import t1.d;
import w1.e;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4240d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4241e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4242i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f4243v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f4244w;

    public /* synthetic */ a(int i5, Object obj, Object obj2, Object obj3, Object obj4) {
        this.f4240d = i5;
        this.f4242i = obj;
        this.f4243v = obj2;
        this.f4244w = obj3;
        this.f4241e = obj4;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        AttachedVideoSinks.VideoOutputSinks addSink$lambda$1;
        Unit reject$lambda$12;
        switch (this.f4240d) {
            case 0:
                addSink$lambda$1 = AttachedVideoSinks.addSink$lambda$1((Ref.BooleanRef) this.f4242i, (VideoSink) this.f4243v, (MediaEngine) this.f4244w, (String) this.f4241e, (String) obj);
                break;
            case 1:
                reject$lambda$12 = NativePermissionManagerModule$createMultiPromiseResolver$1.reject$lambda$12((String) this.f4241e, (String) this.f4242i, (Throwable) this.f4243v, (WritableMap) this.f4244w, (Promise) obj);
                break;
            case 2:
                CancellationSignal cancellationSignal = (CancellationSignal) this.f4242i;
                e eVar = (e) this.f4243v;
                Context context = eVar.f19615e;
                Executor executor = (Executor) this.f4244w;
                h hVar = (h) this.f4241e;
                f fVar = (f) obj;
                PendingIntent pendingIntent = fVar.f17987d;
                sf.h response = fVar.f17988e;
                if (pendingIntent != null || response != null) {
                    if (pendingIntent != null) {
                        Intent intent = new Intent(context, (Class<?>) HiddenActivity.class);
                        d.a(eVar.f19619i, intent, "CREATE_PUBLIC_KEY_CREDENTIAL");
                        intent.putExtra("EXTRA_FLOW_PENDING_INTENT", pendingIntent);
                        try {
                            context.startActivity(intent);
                        } catch (Exception unused) {
                            w1.d onResultOrException = new w1.d(eVar, 1);
                            Intrinsics.checkNotNullParameter(onResultOrException, "onResultOrException");
                            CredentialProviderPlayServicesImpl.Companion.getClass();
                            if (!s1.f.a(cancellationSignal)) {
                                onResultOrException.invoke();
                            }
                        }
                    }
                    if (response != null) {
                        Intrinsics.checkNotNullParameter(response, "response");
                        n1.c g6 = nf.e.g(response.f17995d, response.f17996e);
                        if (g6 instanceof n1.f) {
                            com.discord.chat.presentation.list.delegate.c onResultOrException2 = new com.discord.chat.presentation.list.delegate.c(executor, hVar, (n1.f) g6, 8);
                            Intrinsics.checkNotNullParameter(onResultOrException2, "onResultOrException");
                            CredentialProviderPlayServicesImpl.Companion.getClass();
                            if (!s1.f.a(cancellationSignal)) {
                                onResultOrException2.invoke();
                            }
                            break;
                        }
                    }
                    if (pendingIntent == null) {
                        s1.b onResultOrException3 = new s1.b(executor, hVar, 5);
                        Intrinsics.checkNotNullParameter(onResultOrException3, "onResultOrException");
                        CredentialProviderPlayServicesImpl.Companion.getClass();
                        if (!s1.f.a(cancellationSignal)) {
                            onResultOrException3.invoke();
                        }
                    }
                    break;
                } else {
                    s1.b onResultOrException4 = new s1.b(executor, hVar, 6);
                    Intrinsics.checkNotNullParameter(onResultOrException4, "onResultOrException");
                    CredentialProviderPlayServicesImpl.Companion.getClass();
                    if (!s1.f.a(cancellationSignal)) {
                        onResultOrException4.invoke();
                    }
                    break;
                }
            default:
                CancellationSignal cancellationSignal2 = (CancellationSignal) this.f4242i;
                x1.a aVar = (x1.a) this.f4243v;
                Context context2 = aVar.f20244e;
                Executor executor2 = (Executor) this.f4244w;
                h hVar2 = (h) this.f4241e;
                m mVar = (m) obj;
                CredentialProviderPlayServicesImpl.Companion.getClass();
                if (!s1.f.a(cancellationSignal2)) {
                    Intent intent2 = new Intent(context2, (Class<?>) HiddenActivity.class);
                    d.a(aVar.f20248i, intent2, "BEGIN_SIGN_IN");
                    intent2.putExtra("EXTRA_FLOW_PENDING_INTENT", mVar.f18006d);
                    try {
                        context2.startActivity(intent2);
                    } catch (Exception unused2) {
                        s1.b onResultOrException5 = new s1.b(executor2, hVar2, 7);
                        Intrinsics.checkNotNullParameter(onResultOrException5, "onResultOrException");
                        CredentialProviderPlayServicesImpl.Companion.getClass();
                        if (!s1.f.a(cancellationSignal2)) {
                            onResultOrException5.invoke();
                        }
                    }
                    break;
                } else {
                    break;
                }
        }
        return Unit.a;
    }

    public /* synthetic */ a(String str, String str2, Throwable th2, WritableMap writableMap) {
        this.f4240d = 1;
        this.f4241e = str;
        this.f4242i = str2;
        this.f4243v = th2;
        this.f4244w = writableMap;
    }
}
