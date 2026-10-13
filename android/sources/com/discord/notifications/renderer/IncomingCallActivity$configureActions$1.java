package com.discord.notifications.renderer;

import android.content.Context;
import android.content.Intent;
import android.content.res.ColorStateList;
import android.graphics.Bitmap;
import android.view.View;
import android.widget.ImageButton;
import android.widget.TextView;
import com.discord.fonts.DiscordFont;
import com.discord.fonts.DiscordFontUtilsKt;
import com.discord.misc.utilities.intent.IntentUtilsKt;
import com.discord.notifications.actions.NotificationActions;
import com.discord.notifications.actions.intents.ContentAction;
import com.discord.notifications.actions.intents.DismissCallAction;
import com.discord.react_asset_fetcher.ReactAsset;
import com.discord.react_asset_fetcher.ReactAssetExtensionsKt;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.react_strings.I18nMessage;
import com.discord.react_strings.I18nUtilsKt;
import com.discord.theme.ThemeManagerKt;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Deferred;
import lo.d;
import lo.h;
import nr.e;
import nr.x;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.notifications.renderer.IncomingCallActivity$configureActions$1", f = "IncomingCallActivity.kt", l = {189}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nIncomingCallActivity.kt\nKotlin\n*S Kotlin\n*F\n+ 1 IncomingCallActivity.kt\ncom/discord/notifications/renderer/IncomingCallActivity$configureActions$1\n+ 2 Bitmap.kt\nandroidx/core/graphics/BitmapKt\n*L\n1#1,311:1\n70#2,2:312\n70#2,2:314\n*S KotlinDebug\n*F\n+ 1 IncomingCallActivity.kt\ncom/discord/notifications/renderer/IncomingCallActivity$configureActions$1\n*L\n194#1:312,2\n198#1:314,2\n*E\n"})
/* loaded from: classes.dex */
public final class IncomingCallActivity$configureActions$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    private /* synthetic */ Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    Object L$4;
    int label;
    final /* synthetic */ IncomingCallActivity this$0;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Landroid/graphics/Bitmap;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @d(c = "com.discord.notifications.renderer.IncomingCallActivity$configureActions$1$1", f = "IncomingCallActivity.kt", l = {190}, m = "invokeSuspend")
    /* renamed from: com.discord.notifications.renderer.IncomingCallActivity$configureActions$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ String $callDisconnectUrl;
        int label;
        final /* synthetic */ IncomingCallActivity this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(IncomingCallActivity incomingCallActivity, String str, Continuation continuation) {
            super(2, continuation);
            this.this$0 = incomingCallActivity;
            this.$callDisconnectUrl = str;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass1(this.this$0, this.$callDisconnectUrl, continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            Object fetchImage;
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 != 0) {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                return obj;
            }
            ki.b.R(obj);
            IncomingCallActivity incomingCallActivity = this.this$0;
            String str = this.$callDisconnectUrl;
            this.label = 1;
            fetchImage = incomingCallActivity.fetchImage(str, this);
            return fetchImage == aVar ? aVar : fetchImage;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Landroid/graphics/Bitmap;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @d(c = "com.discord.notifications.renderer.IncomingCallActivity$configureActions$1$2", f = "IncomingCallActivity.kt", l = {191}, m = "invokeSuspend")
    /* renamed from: com.discord.notifications.renderer.IncomingCallActivity$configureActions$1$2, reason: invalid class name */
    public static final class AnonymousClass2 extends h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ String $callConnectUrl;
        int label;
        final /* synthetic */ IncomingCallActivity this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass2(IncomingCallActivity incomingCallActivity, String str, Continuation continuation) {
            super(2, continuation);
            this.this$0 = incomingCallActivity;
            this.$callConnectUrl = str;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass2(this.this$0, this.$callConnectUrl, continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            Object fetchImage;
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 != 0) {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                return obj;
            }
            ki.b.R(obj);
            IncomingCallActivity incomingCallActivity = this.this$0;
            String str = this.$callConnectUrl;
            this.label = 1;
            fetchImage = incomingCallActivity.fetchImage(str, this);
            return fetchImage == aVar ? aVar : fetchImage;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public IncomingCallActivity$configureActions$1(IncomingCallActivity incomingCallActivity, Continuation continuation) {
        super(2, continuation);
        this.this$0 = incomingCallActivity;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void invokeSuspend$lambda$1(IncomingCallActivity incomingCallActivity, DismissCallAction dismissCallAction, View view) {
        Intent addCategory = IntentUtilsKt.putExtra(new Intent("com.discord.intent.action.NOTIFICATION_ACTION", null, incomingCallActivity.getBaseContext(), NotificationActions.class), Reflection.getOrCreateKotlinClass(DismissCallAction.class)).addCategory("android.intent.category.HOME");
        Intrinsics.checkNotNullExpressionValue(addCategory, "addCategory(...)");
        incomingCallActivity.getBaseContext().sendBroadcast(IntentUtilsKt.putIntentParcelable(addCategory, "action_intent_arg_key", dismissCallAction));
        incomingCallActivity.finishAndRemoveTask();
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        IncomingCallActivity$configureActions$1 incomingCallActivity$configureActions$1 = new IncomingCallActivity$configureActions$1(this.this$0, continuation);
        incomingCallActivity$configureActions$1.L$0 = obj;
        return incomingCallActivity$configureActions$1;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v27 */
    /* JADX WARN: Type inference failed for: r2v4 */
    /* JADX WARN: Type inference failed for: r2v5, types: [boolean, int] */
    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        final DismissCallAction dismissCallAction;
        ImageButton imageButton;
        ImageButton imageButton2;
        TextView textView;
        int i5;
        ?? r22;
        Object a;
        TextView textView2;
        ko.a aVar = ko.a.f13464d;
        int i6 = this.label;
        if (i6 == 0) {
            ki.b.R(obj);
            CoroutineScope coroutineScope = (CoroutineScope) this.L$0;
            IncomingCallActivity incomingCallActivity = this.this$0;
            Object parcelableExtra = incomingCallActivity.getIntent().getParcelableExtra("acceptAction", ContentAction.class);
            Intrinsics.checkNotNull(parcelableExtra, "null cannot be cast to non-null type com.discord.notifications.actions.intents.ContentAction");
            incomingCallActivity.acceptAction = (ContentAction) parcelableExtra;
            Object parcelableExtra2 = this.this$0.getIntent().getParcelableExtra("dismissAction", DismissCallAction.class);
            Intrinsics.checkNotNull(parcelableExtra2, "null cannot be cast to non-null type com.discord.notifications.actions.intents.DismissCallAction");
            dismissCallAction = (DismissCallAction) parcelableExtra2;
            imageButton = (ImageButton) this.this$0.findViewById(R.id.acceptCallContainer);
            imageButton2 = (ImageButton) this.this$0.findViewById(R.id.declineCallContainer);
            textView = (TextView) this.this$0.findViewById(R.id.acceptCallText);
            TextView textView3 = (TextView) this.this$0.findViewById(R.id.declineCallText);
            Context applicationContext = this.this$0.getApplicationContext();
            Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
            ReactAsset reactAsset = ReactAsset.PhoneHangUpIcon;
            Context applicationContext2 = this.this$0.getApplicationContext();
            Intrinsics.checkNotNullExpressionValue(applicationContext2, "getApplicationContext(...)");
            String reactImageUrl = ReactAssetUtilsKt.getReactImageUrl(applicationContext, ReactAssetExtensionsKt.getUri(reactAsset, applicationContext2));
            Context applicationContext3 = this.this$0.getApplicationContext();
            Intrinsics.checkNotNullExpressionValue(applicationContext3, "getApplicationContext(...)");
            ReactAsset reactAsset2 = ReactAsset.PhoneCallIcon;
            i5 = 0;
            Context applicationContext4 = this.this$0.getApplicationContext();
            Intrinsics.checkNotNullExpressionValue(applicationContext4, "getApplicationContext(...)");
            Deferred[] deferredArr = {x.d(coroutineScope, null, new AnonymousClass1(this.this$0, reactImageUrl, null), 3), x.d(coroutineScope, null, new AnonymousClass2(this.this$0, ReactAssetUtilsKt.getReactImageUrl(applicationContext3, ReactAssetExtensionsKt.getUri(reactAsset2, applicationContext4)), null), 3)};
            this.L$0 = dismissCallAction;
            this.L$1 = imageButton;
            this.L$2 = imageButton2;
            this.L$3 = textView;
            this.L$4 = textView3;
            r22 = 1;
            this.label = 1;
            a = new e(deferredArr).a(this);
            if (a == aVar) {
                return aVar;
            }
            textView2 = textView3;
        } else {
            if (i6 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            textView2 = (TextView) this.L$4;
            TextView textView4 = (TextView) this.L$3;
            imageButton2 = (ImageButton) this.L$2;
            imageButton = (ImageButton) this.L$1;
            dismissCallAction = (DismissCallAction) this.L$0;
            ki.b.R(obj);
            a = obj;
            textView = textView4;
            r22 = 1;
            i5 = 0;
        }
        List list = (List) a;
        Bitmap bitmap = (Bitmap) list.get(i5);
        Bitmap bitmap2 = (Bitmap) list.get(r22);
        Intrinsics.checkNotNull(bitmap);
        imageButton2.setImageBitmap(Bitmap.createScaledBitmap(bitmap, 110, 110, r22));
        imageButton2.setImageTintList(ColorStateList.valueOf(ThemeManagerKt.getTheme().getWhite()));
        Intrinsics.checkNotNull(bitmap2);
        imageButton.setImageBitmap(Bitmap.createScaledBitmap(bitmap2, 110, 110, r22));
        imageButton.setImageTintList(ColorStateList.valueOf(ThemeManagerKt.getTheme().getWhite()));
        imageButton.setBackgroundTintList(ColorStateList.valueOf(ThemeManagerKt.getTheme().getStatusPositive()));
        imageButton2.setBackgroundTintList(ColorStateList.valueOf(ThemeManagerKt.getTheme().getBackgroundFeedbackCritical()));
        Context applicationContext5 = this.this$0.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext5, "getApplicationContext(...)");
        CharSequence i18nFormat$default = I18nUtilsKt.i18nFormat$default(applicationContext5, I18nMessage.JOIN_CALL, null, 2, null);
        Context applicationContext6 = this.this$0.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext6, "getApplicationContext(...)");
        CharSequence i18nFormat$default2 = I18nUtilsKt.i18nFormat$default(applicationContext6, I18nMessage.DECLINE, null, 2, null);
        imageButton.setContentDescription(i18nFormat$default);
        imageButton2.setContentDescription(i18nFormat$default2);
        textView.setText(i18nFormat$default);
        Intrinsics.checkNotNull(textView);
        DiscordFont discordFont = DiscordFont.PrimaryMedium;
        DiscordFontUtilsKt.setDiscordFont(textView, discordFont);
        textView.setTextColor(ThemeManagerKt.getTheme().getWhite());
        textView2.setText(i18nFormat$default2);
        Intrinsics.checkNotNull(textView2);
        DiscordFontUtilsKt.setDiscordFont(textView2, discordFont);
        textView2.setTextColor(ThemeManagerKt.getTheme().getWhite());
        final IncomingCallActivity incomingCallActivity2 = this.this$0;
        imageButton.setOnClickListener(new View.OnClickListener() { // from class: com.discord.notifications.renderer.a
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                IncomingCallActivity.this.performAcceptAction$notification_renderer_release();
            }
        });
        final IncomingCallActivity incomingCallActivity3 = this.this$0;
        imageButton2.setOnClickListener(new View.OnClickListener() { // from class: com.discord.notifications.renderer.b
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                IncomingCallActivity$configureActions$1.invokeSuspend$lambda$1(IncomingCallActivity.this, dismissCallAction, view);
            }
        });
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((IncomingCallActivity$configureActions$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
