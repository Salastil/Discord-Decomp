package com.discord.analytics;

import android.content.SharedPreferences;
import com.android.installreferrer.api.InstallReferrerClient;
import com.android.installreferrer.api.ReferrerDetails;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import fo.q;
import java.util.concurrent.CancellationException;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import nr.s1;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.analytics.InstallReferrerModule$get$1", f = "InstallReferrerModule.kt", l = {ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class InstallReferrerModule$get$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ int $attempts;
    final /* synthetic */ Ref.ObjectRef<InstallReferrerClient> $client;
    final /* synthetic */ SharedPreferences $prefs;
    final /* synthetic */ Promise $promise;
    final /* synthetic */ Ref.ObjectRef<String> $referrer;
    int label;
    final /* synthetic */ InstallReferrerModule this$0;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @d(c = "com.discord.analytics.InstallReferrerModule$get$1$1", f = "InstallReferrerModule.kt", l = {41}, m = "invokeSuspend")
    @SourceDebugExtension({"SMAP\nInstallReferrerModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 InstallReferrerModule.kt\ncom/discord/analytics/InstallReferrerModule$get$1$1\n+ 2 SharedPreferences.kt\nandroidx/core/content/SharedPreferencesKt\n*L\n1#1,98:1\n40#2,13:99\n40#2,13:112\n*S KotlinDebug\n*F\n+ 1 InstallReferrerModule.kt\ncom/discord/analytics/InstallReferrerModule$get$1$1\n*L\n45#1:99,13\n48#1:112,13\n*E\n"})
    /* renamed from: com.discord.analytics.InstallReferrerModule$get$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ int $attempts;
        final /* synthetic */ Ref.ObjectRef<InstallReferrerClient> $client;
        final /* synthetic */ SharedPreferences $prefs;
        final /* synthetic */ Promise $promise;
        final /* synthetic */ Ref.ObjectRef<String> $referrer;
        private /* synthetic */ Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        int label;
        final /* synthetic */ InstallReferrerModule this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(Ref.ObjectRef<InstallReferrerClient> objectRef, InstallReferrerModule installReferrerModule, Ref.ObjectRef<String> objectRef2, SharedPreferences sharedPreferences, Promise promise, int i5, Continuation continuation) {
            super(2, continuation);
            this.$client = objectRef;
            this.this$0 = installReferrerModule;
            this.$referrer = objectRef2;
            this.$prefs = sharedPreferences;
            this.$promise = promise;
            this.$attempts = i5;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.$client, this.this$0, this.$referrer, this.$prefs, this.$promise, this.$attempts, continuation);
            anonymousClass1.L$0 = obj;
            return anonymousClass1;
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference failed for: r1v5, types: [T, com.android.installreferrer.api.InstallReferrerClient] */
        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            Object i5;
            Ref.ObjectRef<InstallReferrerClient> objectRef;
            Ref.ObjectRef<String> objectRef2;
            SharedPreferences sharedPreferences;
            Promise promise;
            ReactApplicationContext reactApplicationContext;
            Integer num;
            SharedPreferences sharedPreferences2;
            Promise promise2;
            ReferrerDetails installReferrer;
            a aVar = a.f13464d;
            int i6 = this.label;
            try {
            } catch (Throwable th2) {
                q qVar = Result.f13476e;
                i5 = b.i(th2);
            }
            if (i6 == 0) {
                b.R(obj);
                CoroutineScope coroutineScope = (CoroutineScope) this.L$0;
                objectRef = this.$client;
                InstallReferrerModule installReferrerModule = this.this$0;
                objectRef2 = this.$referrer;
                sharedPreferences = this.$prefs;
                promise = this.$promise;
                q qVar2 = Result.f13476e;
                reactApplicationContext = installReferrerModule.getReactApplicationContext();
                ?? build = InstallReferrerClient.newBuilder(reactApplicationContext).build();
                objectRef.element = build;
                if (build == 0) {
                    num = null;
                    if (num != null || num.intValue() != 0) {
                        throw new IllegalStateException("Check failed.");
                    }
                    InstallReferrerClient installReferrerClient = objectRef.element;
                    objectRef2.element = (installReferrerClient == null || (installReferrer = installReferrerClient.getInstallReferrer()) == null) ? 0 : installReferrer.getInstallReferrer();
                    Intrinsics.checkNotNull(sharedPreferences);
                    SharedPreferences.Editor edit = sharedPreferences.edit();
                    edit.putString("referrer", objectRef2.element);
                    edit.apply();
                    promise.resolve(objectRef2.element);
                    i5 = Unit.a;
                    q qVar3 = Result.f13476e;
                    SharedPreferences sharedPreferences3 = this.$prefs;
                    Promise promise3 = this.$promise;
                    int i10 = this.$attempts;
                    Throwable a = Result.a(i5);
                    if (a != null) {
                        Intrinsics.checkNotNull(sharedPreferences3);
                        SharedPreferences.Editor edit2 = sharedPreferences3.edit();
                        edit2.putInt("attempts", i10 + 1);
                        edit2.apply();
                        promise3.resolve(null);
                        if (a instanceof CancellationException) {
                            throw a;
                        }
                    }
                    try {
                        InstallReferrerClient installReferrerClient2 = this.$client.element;
                        if (installReferrerClient2 != null) {
                            installReferrerClient2.endConnection();
                            Unit unit = Unit.a;
                        }
                    } catch (Throwable th3) {
                        q qVar4 = Result.f13476e;
                        b.i(th3);
                    }
                    return Unit.a;
                }
                this.L$0 = coroutineScope;
                this.L$1 = objectRef;
                this.L$2 = objectRef2;
                this.L$3 = sharedPreferences;
                this.L$4 = promise;
                this.label = 1;
                obj = InstallReferrerModuleKt.await(build, this);
                if (obj == aVar) {
                    return aVar;
                }
                sharedPreferences2 = sharedPreferences;
                promise2 = promise;
            } else {
                if (i6 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                promise2 = (Promise) this.L$4;
                sharedPreferences2 = (SharedPreferences) this.L$3;
                objectRef2 = (Ref.ObjectRef) this.L$2;
                objectRef = (Ref.ObjectRef) this.L$1;
                b.R(obj);
            }
            num = (Integer) obj;
            promise = promise2;
            sharedPreferences = sharedPreferences2;
            if (num != null) {
            }
            throw new IllegalStateException("Check failed.");
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public InstallReferrerModule$get$1(Ref.ObjectRef<InstallReferrerClient> objectRef, InstallReferrerModule installReferrerModule, Ref.ObjectRef<String> objectRef2, SharedPreferences sharedPreferences, Promise promise, int i5, Continuation continuation) {
        super(2, continuation);
        this.$client = objectRef;
        this.this$0 = installReferrerModule;
        this.$referrer = objectRef2;
        this.$prefs = sharedPreferences;
        this.$promise = promise;
        this.$attempts = i5;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new InstallReferrerModule$get$1(this.$client, this.this$0, this.$referrer, this.$prefs, this.$promise, this.$attempts, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        a aVar = a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.$client, this.this$0, this.$referrer, this.$prefs, this.$promise, this.$attempts, null);
            this.label = 1;
            if (s1.b(1000L, anonymousClass1, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((InstallReferrerModule$get$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
