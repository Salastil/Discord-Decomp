package com.discord.intents;

import android.app.Activity;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Build;
import android.provider.Telephony;
import com.discord.codegen.NativeIntentsModuleSpec;
import com.discord.intents.packages.DiscordVariantPackage;
import com.discord.intents.packages.InstalledPackage;
import com.discord.misc.utilities.activity.ActivityUtilities;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0018\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bH\u0016J \u0010\f\u001a\u00020\u00072\u0006\u0010\r\u001a\u00020\t2\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bH\u0016J\b\u0010\u000e\u001a\u00020\u0007H\u0016J\b\u0010\u000f\u001a\u00020\u0007H\u0016J\u0010\u0010\u0010\u001a\u00020\u00072\u0006\u0010\u0011\u001a\u00020\tH\u0016J\n\u0010\u0012\u001a\u0004\u0018\u00010\tH\u0016J\u0010\u0010\u0013\u001a\u00020\u00072\u0006\u0010\u0014\u001a\u00020\tH\u0016J\u0010\u0010\u0015\u001a\u00020\u00072\u0006\u0010\u0014\u001a\u00020\tH\u0016J\u0010\u0010\u0016\u001a\u00020\u00072\u0006\u0010\u0017\u001a\u00020\tH\u0002J\u0014\u0010\u0018\u001a\u00020\u00192\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\tH\u0002J \u0010\u001a\u001a\u00020\u00192\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\tH\u0002J\u0010\u0010\u001b\u001a\u00020\u00072\u0006\u0010\u001c\u001a\u00020\u0019H\u0002J\u0010\u0010\u001d\u001a\u00020\u00072\u0006\u0010\u001c\u001a\u00020\u0019H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001e"}, d2 = {"Lcom/discord/intents/IntentsModule;", "Lcom/discord/codegen/NativeIntentsModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "sendSMS", "", "body", "", "recipients", "Lcom/facebook/react/bridge/ReadableArray;", "sendMail", "subject", "canSendSMS", "canSendMail", "canOpenUrlScheme", "urlScheme", "getCurrentDiscordVariant", "isDiscordVariantInstalled", "variant", "launchDiscordVariant", "isPackageInstalled", "packageName", "createSmsIntent", "Landroid/content/Intent;", "createEmailIntent", "canResolveActivityForIntent", "intent", "startActivityWithIntent", "intents_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nIntentsModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 IntentsModule.kt\ncom/discord/intents/IntentsModule\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 Uri.kt\nandroidx/core/net/UriKt\n*L\n1#1,108:1\n1#2:109\n29#3:110\n29#3:111\n*S KotlinDebug\n*F\n+ 1 IntentsModule.kt\ncom/discord/intents/IntentsModule\n*L\n83#1:110\n87#1:111\n*E\n"})
/* loaded from: classes.dex */
public final class IntentsModule extends NativeIntentsModuleSpec {

    @NotNull
    private final ReactApplicationContext reactContext;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public IntentsModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.reactContext = reactContext;
    }

    private final boolean canResolveActivityForIntent(Intent intent) {
        PackageManager packageManager = this.reactContext.getPackageManager();
        return (packageManager == null || intent.resolveActivity(packageManager) == null) ? false : true;
    }

    private final Intent createEmailIntent(String subject, String body) {
        Intent intent = new Intent("android.intent.action.SENDTO");
        intent.setData(Uri.parse("mailto:"));
        if (subject == null) {
            subject = "";
        }
        intent.putExtra("android.intent.extra.SUBJECT", subject);
        if (body == null) {
            body = "";
        }
        intent.putExtra("android.intent.extra.TEXT", body);
        return intent;
    }

    public static /* synthetic */ Intent createEmailIntent$default(IntentsModule intentsModule, String str, String str2, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = null;
        }
        if ((i5 & 2) != 0) {
            str2 = null;
        }
        return intentsModule.createEmailIntent(str, str2);
    }

    private final Intent createSmsIntent(String body) {
        Intent intent = new Intent("android.intent.action.VIEW");
        if (body == null) {
            body = "";
        }
        intent.setData(Uri.parse("sms:?body=".concat(body)));
        return intent;
    }

    public static /* synthetic */ Intent createSmsIntent$default(IntentsModule intentsModule, String str, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = null;
        }
        return intentsModule.createSmsIntent(str);
    }

    private final boolean isPackageInstalled(String packageName) {
        PackageManager packageManager = this.reactContext.getPackageManager();
        try {
            if (Build.VERSION.SDK_INT >= 33) {
                packageManager.getPackageInfo(packageName, PackageManager.PackageInfoFlags.of(0L));
                return true;
            }
            packageManager.getPackageInfo(packageName, 0);
            return true;
        } catch (PackageManager.NameNotFoundException unused) {
            return false;
        }
    }

    private final boolean startActivityWithIntent(Intent intent) {
        Activity currentActivity;
        if (!canResolveActivityForIntent(intent) || (currentActivity = this.reactContext.getCurrentActivity()) == null) {
            return false;
        }
        ActivityUtilities.startActivityAsync$default(ActivityUtilities.INSTANCE, currentActivity, intent, null, 4, null);
        return true;
    }

    @Override // com.discord.codegen.NativeIntentsModuleSpec
    public boolean canOpenUrlScheme(@NotNull String urlScheme) {
        Intrinsics.checkNotNullParameter(urlScheme, "urlScheme");
        String appPackage = InstalledPackage.INSTANCE.parse(urlScheme).getAppPackage();
        if (appPackage == null) {
            return false;
        }
        return isPackageInstalled(appPackage);
    }

    @Override // com.discord.codegen.NativeIntentsModuleSpec
    public boolean canSendMail() {
        return canResolveActivityForIntent(createEmailIntent$default(this, null, null, 3, null));
    }

    @Override // com.discord.codegen.NativeIntentsModuleSpec
    public boolean canSendSMS() {
        String defaultSmsPackage = Telephony.Sms.getDefaultSmsPackage(this.reactContext);
        if (defaultSmsPackage == null) {
            return false;
        }
        Intent createSmsIntent$default = createSmsIntent$default(this, null, 1, null);
        createSmsIntent$default.setPackage(defaultSmsPackage);
        return canResolveActivityForIntent(createSmsIntent$default);
    }

    @Override // com.discord.codegen.NativeIntentsModuleSpec
    public String getCurrentDiscordVariant() {
        DiscordVariantPackage.Companion companion = DiscordVariantPackage.INSTANCE;
        String packageName = this.reactContext.getPackageName();
        Intrinsics.checkNotNullExpressionValue(packageName, "getPackageName(...)");
        DiscordVariantPackage fromPackageName = companion.fromPackageName(packageName);
        if (fromPackageName != null) {
            return fromPackageName.getKey();
        }
        return null;
    }

    @Override // com.discord.codegen.NativeIntentsModuleSpec
    public boolean isDiscordVariantInstalled(@NotNull String variant) {
        Intrinsics.checkNotNullParameter(variant, "variant");
        DiscordVariantPackage fromKey = DiscordVariantPackage.INSTANCE.fromKey(variant);
        if (fromKey == null) {
            return false;
        }
        return isPackageInstalled(fromKey.getPackageName());
    }

    @Override // com.discord.codegen.NativeIntentsModuleSpec
    public boolean launchDiscordVariant(@NotNull String variant) {
        PackageManager packageManager;
        Intent launchIntentForPackage;
        Intrinsics.checkNotNullParameter(variant, "variant");
        DiscordVariantPackage fromKey = DiscordVariantPackage.INSTANCE.fromKey(variant);
        if (fromKey == null || (packageManager = this.reactContext.getPackageManager()) == null || (launchIntentForPackage = packageManager.getLaunchIntentForPackage(fromKey.getPackageName())) == null) {
            return false;
        }
        launchIntentForPackage.addFlags(268435456);
        return startActivityWithIntent(launchIntentForPackage);
    }

    @Override // com.discord.codegen.NativeIntentsModuleSpec
    public boolean sendMail(@NotNull String subject, @NotNull String body, @NotNull ReadableArray recipients) {
        Intrinsics.checkNotNullParameter(subject, "subject");
        Intrinsics.checkNotNullParameter(body, "body");
        Intrinsics.checkNotNullParameter(recipients, "recipients");
        return startActivityWithIntent(createEmailIntent(subject, body));
    }

    @Override // com.discord.codegen.NativeIntentsModuleSpec
    public boolean sendSMS(@NotNull String body, @NotNull ReadableArray recipients) {
        Intrinsics.checkNotNullParameter(body, "body");
        Intrinsics.checkNotNullParameter(recipients, "recipients");
        String defaultSmsPackage = Telephony.Sms.getDefaultSmsPackage(this.reactContext);
        if (defaultSmsPackage == null) {
            return false;
        }
        Intent createSmsIntent = createSmsIntent(body);
        createSmsIntent.setPackage(defaultSmsPackage);
        return startActivityWithIntent(createSmsIntent);
    }
}
