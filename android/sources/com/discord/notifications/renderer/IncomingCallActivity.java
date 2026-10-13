package com.discord.notifications.renderer;

import android.app.KeyguardManager;
import android.app.KeyguardManager$KeyguardDismissCallback;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Build;
import android.os.Bundle;
import android.os.PowerManager;
import com.discord.icons.IconUrlUtils;
import com.discord.image.fresco.FrescoFetchDecodedImageKt;
import com.discord.image.fresco.FrescoModuleDiscord;
import com.discord.image.fresco.postprocessors.PostProcessor;
import com.discord.misc.utilities.activity.ActivityUtilities;
import com.discord.misc.utilities.intent.IntentUtilsKt;
import com.discord.notifications.actions.intents.ContentAction;
import com.discord.primitives.GuildId;
import com.discord.primitives.UserId;
import com.discord.react_activities.ReactActivity;
import com.discord.telecom.TelecomModule;
import com.discord.tti_manager.TTIModule;
import i.h;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.g;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000W\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\b\u0005*\u0001)\u0018\u0000 ,2\u00020\u0001:\u0001,B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u000f\u0010\u0005\u001a\u00020\u0004H\u0002¢\u0006\u0004\b\u0005\u0010\u0003J\u000f\u0010\u0006\u001a\u00020\u0004H\u0002¢\u0006\u0004\b\u0006\u0010\u0003J\u000f\u0010\u0007\u001a\u00020\u0004H\u0002¢\u0006\u0004\b\u0007\u0010\u0003J\u001a\u0010\u000b\u001a\u0004\u0018\u00010\n2\u0006\u0010\t\u001a\u00020\bH\u0082@¢\u0006\u0004\b\u000b\u0010\fJ\u000f\u0010\r\u001a\u00020\u0004H\u0002¢\u0006\u0004\b\r\u0010\u0003J\u000f\u0010\u000e\u001a\u00020\u0004H\u0003¢\u0006\u0004\b\u000e\u0010\u0003JG\u0010\u001b\u001a\u00020\b2\u0006\u0010\u0010\u001a\u00020\u000f2\b\u0010\u0011\u001a\u0004\u0018\u00010\b2\b\u0010\u0013\u001a\u0004\u0018\u00010\u00122\b\u0010\u0015\u001a\u0004\u0018\u00010\u00142\b\u0010\u0016\u001a\u0004\u0018\u00010\b2\u0006\u0010\u0018\u001a\u00020\u0017H\u0002¢\u0006\u0004\b\u0019\u0010\u001aJ\u0017\u0010\u001d\u001a\u00020\u00042\u0006\u0010\u001c\u001a\u00020\u000fH\u0014¢\u0006\u0004\b\u001d\u0010\u001eJ\u0019\u0010!\u001a\u00020\u00042\b\u0010 \u001a\u0004\u0018\u00010\u001fH\u0014¢\u0006\u0004\b!\u0010\"J\u000f\u0010$\u001a\u00020\u0004H\u0000¢\u0006\u0004\b#\u0010\u0003J\u000f\u0010%\u001a\u00020\u0004H\u0014¢\u0006\u0004\b%\u0010\u0003R\u0018\u0010'\u001a\u0004\u0018\u00010&8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b'\u0010(R\u0014\u0010*\u001a\u00020)8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b*\u0010+¨\u0006-"}, d2 = {"Lcom/discord/notifications/renderer/IncomingCallActivity;", "Li/h;", "<init>", "()V", "", "turnScreenOnAndKeyguardOff", "turnScreenOffAndKeyguardOn", "initView", "", "uri", "Landroid/graphics/Bitmap;", "fetchImage", "(Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "configureUser", "configureActions", "Landroid/content/Context;", "context", "userGuildAvatar", "Lcom/discord/primitives/GuildId;", "guildId", "Lcom/discord/primitives/UserId;", "userId", "userAvatar", "", "userDiscriminator", "getIconUrlForAvatar-r1nfqec", "(Landroid/content/Context;Ljava/lang/String;Lcom/discord/primitives/GuildId;Lcom/discord/primitives/UserId;Ljava/lang/String;I)Ljava/lang/String;", "getIconUrlForAvatar", "newBase", "attachBaseContext", "(Landroid/content/Context;)V", "Landroid/os/Bundle;", "savedInstanceState", "onCreate", "(Landroid/os/Bundle;)V", "performAcceptAction$notification_renderer_release", "performAcceptAction", "onDestroy", "Lcom/discord/notifications/actions/intents/ContentAction;", "acceptAction", "Lcom/discord/notifications/actions/intents/ContentAction;", "com/discord/notifications/renderer/IncomingCallActivity$screenOffReceiver$1", "screenOffReceiver", "Lcom/discord/notifications/renderer/IncomingCallActivity$screenOffReceiver$1;", "Companion", "notification_renderer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nIncomingCallActivity.kt\nKotlin\n*S Kotlin\n*F\n+ 1 IncomingCallActivity.kt\ncom/discord/notifications/renderer/IncomingCallActivity\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,311:1\n1#2:312\n*E\n"})
/* loaded from: classes.dex */
public final class IncomingCallActivity extends h {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private static IncomingCallActivity selfIntent;
    private ContentAction acceptAction;

    @NotNull
    private final IncomingCallActivity$screenOffReceiver$1 screenOffReceiver = new BroadcastReceiver() { // from class: com.discord.notifications.renderer.IncomingCallActivity$screenOffReceiver$1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(intent, "intent");
            IncomingCallActivity.this.finishAndRemoveTask();
        }
    };

    @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/discord/notifications/renderer/IncomingCallActivity$Companion;", "", "<init>", "()V", "selfIntent", "Lcom/discord/notifications/renderer/IncomingCallActivity;", "getSelfIntent", "()Lcom/discord/notifications/renderer/IncomingCallActivity;", "setSelfIntent", "(Lcom/discord/notifications/renderer/IncomingCallActivity;)V", "notification_renderer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        public final IncomingCallActivity getSelfIntent() {
            return IncomingCallActivity.selfIntent;
        }

        public final void setSelfIntent(IncomingCallActivity incomingCallActivity) {
            IncomingCallActivity.selfIntent = incomingCallActivity;
        }

        private Companion() {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void configureActions() {
        x.w(g.f13538d, new IncomingCallActivity$configureActions$1(this, null));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void configureUser() {
        x.w(g.f13538d, new IncomingCallActivity$configureUser$1(this, null));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object fetchImage(String str, Continuation continuation) {
        FrescoModuleDiscord.Companion companion = FrescoModuleDiscord.INSTANCE;
        Context applicationContext = getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
        companion.initializeFresco(applicationContext);
        Context applicationContext2 = getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext2, "getApplicationContext(...)");
        return FrescoFetchDecodedImageKt.fetchDecodedImage(applicationContext2, str, (PostProcessor) PostProcessor.Circle.INSTANCE, true, continuation);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* renamed from: getIconUrlForAvatar-r1nfqec, reason: not valid java name */
    public final String m1146getIconUrlForAvatarr1nfqec(Context context, String userGuildAvatar, GuildId guildId, UserId userId, String userAvatar, int userDiscriminator) {
        IconUrlUtils iconUrlUtils = IconUrlUtils.INSTANCE;
        IconUrlUtils.init$default(iconUrlUtils, context, null, null, 6, null);
        String m997getForGuildMember2tNb6hE$default = IconUrlUtils.m997getForGuildMember2tNb6hE$default(iconUrlUtils, userGuildAvatar, guildId, userId, null, false, 24, null);
        return m997getForGuildMember2tNb6hE$default.length() == 0 ? IconUrlUtils.m998getForUser_fRzTXg$default(iconUrlUtils, context, userId, userAvatar, Integer.valueOf(userDiscriminator), false, null, 32, null) : m997getForGuildMember2tNb6hE$default;
    }

    private final void initView() {
        x.w(g.f13538d, new IncomingCallActivity$initView$1(this, null));
    }

    private final void turnScreenOffAndKeyguardOn() {
        if (Build.VERSION.SDK_INT < 27) {
            getWindow().clearFlags(129);
        } else {
            setShowWhenLocked(false);
            setTurnScreenOn(false);
        }
    }

    private final void turnScreenOnAndKeyguardOff() {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 27) {
            setShowWhenLocked(true);
            if (!((PowerManager) getSystemService(PowerManager.class)).isInteractive()) {
                setTurnScreenOn(true);
            }
        } else {
            getWindow().addFlags(129);
        }
        Object systemService = getSystemService("keyguard");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.app.KeyguardManager");
        KeyguardManager keyguardManager = (KeyguardManager) systemService;
        if (i5 >= 26) {
            keyguardManager.requestDismissKeyguard(this, null);
        }
    }

    @Override // i.h, android.app.Activity, android.view.ContextThemeWrapper, android.content.ContextWrapper
    public void attachBaseContext(@NotNull Context newBase) {
        Intrinsics.checkNotNullParameter(newBase, "newBase");
        if (Build.VERSION.SDK_INT < 28) {
            TTIModule.Companion companion = TTIModule.INSTANCE;
            String name = IncomingCallActivity.class.getName();
            Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
            companion.markActivityBeforeMain(name);
        }
        super.attachBaseContext(newBase);
    }

    @Override // androidx.fragment.app.FragmentActivity, androidx.activity.ComponentActivity, x0.h, android.app.Activity
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.incoming_call_screen);
        initView();
        turnScreenOnAndKeyguardOff();
        selfIntent = this;
        TelecomModule.INSTANCE.setAcceptIncomingCallHandler(new IncomingCallActivity$onCreate$1(this));
        registerReceiver(this.screenOffReceiver, new IntentFilter("android.intent.action.SCREEN_OFF"));
    }

    @Override // i.h, androidx.fragment.app.FragmentActivity, android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        IncomingCallActivity$screenOffReceiver$1 incomingCallActivity$screenOffReceiver$1 = this.screenOffReceiver;
        if (incomingCallActivity$screenOffReceiver$1 != null) {
            unregisterReceiver(incomingCallActivity$screenOffReceiver$1);
        }
        turnScreenOffAndKeyguardOn();
        if (Intrinsics.areEqual(selfIntent, this)) {
            selfIntent = null;
        }
        TelecomModule.INSTANCE.setAcceptIncomingCallHandler(null);
    }

    public final void performAcceptAction$notification_renderer_release() {
        ContentAction contentAction = this.acceptAction;
        if (contentAction == null) {
            return;
        }
        Intent addFlags = IntentUtilsKt.putExtra(new Intent("android.intent.action.VIEW", null, getBaseContext(), ReactActivity.INSTANCE.getMainActivity()), Reflection.getOrCreateKotlinClass(ContentAction.class)).addCategory("android.intent.category.HOME").addFlags(268435456);
        Intrinsics.checkNotNullExpressionValue(addFlags, "addFlags(...)");
        final Intent putIntentParcelable = IntentUtilsKt.putIntentParcelable(addFlags, "action_intent_arg_key", contentAction);
        KeyguardManager keyguardManager = (KeyguardManager) getSystemService(KeyguardManager.class);
        if (!keyguardManager.isKeyguardLocked()) {
            ActivityUtilities activityUtilities = ActivityUtilities.INSTANCE;
            Context baseContext = getBaseContext();
            Intrinsics.checkNotNullExpressionValue(baseContext, "getBaseContext(...)");
            ActivityUtilities.startActivityAsync$default(activityUtilities, baseContext, putIntentParcelable, null, 4, null);
            return;
        }
        if (Build.VERSION.SDK_INT >= 26) {
            keyguardManager.requestDismissKeyguard(this, new KeyguardManager$KeyguardDismissCallback() { // from class: com.discord.notifications.renderer.IncomingCallActivity$performAcceptAction$1
                public void onDismissSucceeded() {
                    super.onDismissSucceeded();
                    ActivityUtilities activityUtilities2 = ActivityUtilities.INSTANCE;
                    Context baseContext2 = IncomingCallActivity.this.getBaseContext();
                    Intrinsics.checkNotNullExpressionValue(baseContext2, "getBaseContext(...)");
                    ActivityUtilities.startActivityAsync$default(activityUtilities2, baseContext2, putIntentParcelable, null, 4, null);
                }
            });
            return;
        }
        ActivityUtilities activityUtilities2 = ActivityUtilities.INSTANCE;
        Context baseContext2 = getBaseContext();
        Intrinsics.checkNotNullExpressionValue(baseContext2, "getBaseContext(...)");
        ActivityUtilities.startActivityAsync$default(activityUtilities2, baseContext2, putIntentParcelable, null, 4, null);
    }
}
