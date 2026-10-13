package ab;

import android.animation.Animator;
import android.content.Context;
import android.content.pm.ResolveInfo;
import android.view.View;
import com.discord.age_assurance.PlayIntegrityModuleKt;
import com.discord.billing.BillingManager;
import com.discord.bridge.DCDPackageList;
import com.discord.browser_manager.BrowserManager;
import com.discord.bundle_updater.BundleUpdaterUtilsKt;
import com.discord.chat.ChatModule;
import com.discord.chat.bridge.contentnode.ContentNode;
import com.discord.chat.bridge.contentnode.ContentNodeKt;
import com.discord.chat.bridge.spoiler.SpoilerAttributes;
import com.discord.chat.input.ChatInputViewManager;
import com.discord.chat.presentation.list.ChannelChatListAdapter;
import com.discord.chat.presentation.list.ChatListHighlightItemAtPositionKt;
import com.discord.chat.presentation.list.PortalViewUpdate;
import com.discord.chat.presentation.list.delegate.BaseChatListItemDelegate;
import com.discord.chat.presentation.list.item.ChatListItem;
import com.discord.chat.presentation.message.decorations.BackgroundHighlightDrawer;
import com.discord.span.utilities.SpannableStringBuilderExtensionsKt;
import com.discord.span.utilities.spannable.ClickableSpan;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.internal.featureflags.ReactNativeFeatureFlagsLocalAccessor;
import com.facebook.react.uimanager.ViewManager;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlinx.serialization.json.JsonBuilder;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f280d;

    public /* synthetic */ a(int i5) {
        this.f280d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        CharSequence override$lambda$0;
        CharSequence accessedFeatureFlags$lambda$1;
        Integer _init_$lambda$0;
        Integer _init_$lambda$1;
        boolean _init_$lambda$2;
        CharSequence debugSpans$lambda$7;
        boolean _init_$lambda$02;
        CharSequence sha256Hex$lambda$0;
        Unit loadPurchases$lambda$8;
        ReactContextBaseJavaModule packages$lambda$0;
        ViewManager packages$lambda$1;
        ViewManager packages$lambda$2;
        ViewManager packages$lambda$3;
        ViewManager packages$lambda$4;
        ViewManager packages$lambda$5;
        ViewManager packages$lambda$6;
        ViewManager packages$lambda$7;
        ViewManager packages$lambda$8;
        ViewManager packages$lambda$9;
        String openUrlExternally$lambda$1;
        Unit json$lambda$0;
        Unit json$lambda$02;
        CharSequence plainText$lambda$0;
        Unit configure$lambda$1;
        String forItem$lambda$5$lambda$3;
        Unit json$lambda$03;
        Unit items$lambda$4;
        Unit animateBackgroundColor$anim$lambda$0;
        Unit _init_$lambda$03;
        Unit _init_$lambda$04;
        switch (this.f280d) {
            case 0:
                override$lambda$0 = ReactNativeFeatureFlagsLocalAccessor.override$lambda$0((String) obj);
                return override$lambda$0;
            case 1:
                accessedFeatureFlags$lambda$1 = ReactNativeFeatureFlagsLocalAccessor.getAccessedFeatureFlags$lambda$1((String) obj);
                return accessedFeatureFlags$lambda$1;
            case 2:
                _init_$lambda$0 = BackgroundHighlightDrawer._init_$lambda$0((ChatListItem) obj);
                return _init_$lambda$0;
            case 3:
                _init_$lambda$1 = BackgroundHighlightDrawer._init_$lambda$1((ChatListItem) obj);
                return _init_$lambda$1;
            case 4:
                _init_$lambda$2 = BackgroundHighlightDrawer._init_$lambda$2((ChatListItem) obj);
                return Boolean.valueOf(_init_$lambda$2);
            case 5:
                debugSpans$lambda$7 = SpannableStringBuilderExtensionsKt.debugSpans$lambda$7(obj);
                return debugSpans$lambda$7;
            case 6:
                _init_$lambda$02 = ClickableSpan._init_$lambda$0((View) obj);
                return Boolean.valueOf(_init_$lambda$02);
            case 7:
                sha256Hex$lambda$0 = PlayIntegrityModuleKt.sha256Hex$lambda$0(((Byte) obj).byteValue());
                return sha256Hex$lambda$0;
            case 8:
                loadPurchases$lambda$8 = BillingManager.loadPurchases$lambda$8((Exception) obj);
                return loadPurchases$lambda$8;
            case 9:
                packages$lambda$0 = DCDPackageList.getPackages$lambda$0((ReactApplicationContext) obj);
                return packages$lambda$0;
            case 10:
                packages$lambda$1 = DCDPackageList.getPackages$lambda$1((ReactApplicationContext) obj);
                return packages$lambda$1;
            case 11:
                packages$lambda$2 = DCDPackageList.getPackages$lambda$2((ReactApplicationContext) obj);
                return packages$lambda$2;
            case 12:
                packages$lambda$3 = DCDPackageList.getPackages$lambda$3((ReactApplicationContext) obj);
                return packages$lambda$3;
            case 13:
                packages$lambda$4 = DCDPackageList.getPackages$lambda$4((ReactApplicationContext) obj);
                return packages$lambda$4;
            case 14:
                packages$lambda$5 = DCDPackageList.getPackages$lambda$5((ReactApplicationContext) obj);
                return packages$lambda$5;
            case 15:
                packages$lambda$6 = DCDPackageList.getPackages$lambda$6((ReactApplicationContext) obj);
                return packages$lambda$6;
            case 16:
                packages$lambda$7 = DCDPackageList.getPackages$lambda$7((ReactApplicationContext) obj);
                return packages$lambda$7;
            case 17:
                packages$lambda$8 = DCDPackageList.getPackages$lambda$8((ReactApplicationContext) obj);
                return packages$lambda$8;
            case 18:
                packages$lambda$9 = DCDPackageList.getPackages$lambda$9((ReactApplicationContext) obj);
                return packages$lambda$9;
            case 19:
                openUrlExternally$lambda$1 = BrowserManager.openUrlExternally$lambda$1((ResolveInfo) obj);
                return openUrlExternally$lambda$1;
            case 20:
                json$lambda$0 = BundleUpdaterUtilsKt.json$lambda$0((JsonBuilder) obj);
                return json$lambda$0;
            case 21:
                json$lambda$02 = ChatModule.json$lambda$0((JsonBuilder) obj);
                return json$lambda$02;
            case 22:
                plainText$lambda$0 = ContentNodeKt.toPlainText$lambda$0((ContentNode) obj);
                return plainText$lambda$0;
            case 23:
                configure$lambda$1 = SpoilerAttributes.configure$lambda$1(((Boolean) obj).booleanValue());
                return configure$lambda$1;
            case 24:
                forItem$lambda$5$lambda$3 = SpoilerAttributes.Companion.forItem$lambda$5$lambda$3((Context) obj);
                return forItem$lambda$5$lambda$3;
            case 25:
                json$lambda$03 = ChatInputViewManager.json$lambda$0((JsonBuilder) obj);
                return json$lambda$03;
            case 26:
                items$lambda$4 = ChannelChatListAdapter.setItems$lambda$4(((Boolean) obj).booleanValue());
                return items$lambda$4;
            case 27:
                animateBackgroundColor$anim$lambda$0 = ChatListHighlightItemAtPositionKt.animateBackgroundColor$anim$lambda$0((Animator) obj);
                return animateBackgroundColor$anim$lambda$0;
            case 28:
                _init_$lambda$03 = PortalViewUpdate._init_$lambda$0(((Boolean) obj).booleanValue());
                return _init_$lambda$03;
            default:
                _init_$lambda$04 = BaseChatListItemDelegate._init_$lambda$0((View) obj);
                return _init_$lambda$04;
        }
    }
}
