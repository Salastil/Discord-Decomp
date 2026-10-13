package androidx.lifecycle;

import android.view.LayoutInflater;
import android.view.View;
import android.widget.LinearLayout;
import com.discord.MainApplication;
import com.discord.bug_reporter.ScreenshotDetector;
import com.discord.bug_reporter.ScreenshotHelperModule;
import com.discord.bundle_updater.BundleUpdaterManager;
import com.discord.chat.databinding.MessageComponentCheckpointCardV2026ViewBinding;
import com.discord.chat.databinding.MessageComponentContentInventoryViewBinding;
import com.discord.chat.input.views.ChatInputRootView;
import com.discord.chat.presentation.message.system.AutomodSystemMessageWrapperView;
import com.discord.chat.presentation.message.view.EmbedView;
import com.discord.chat.presentation.message.view.FileAttachmentView;
import com.discord.chat.presentation.message.view.MessageContentView;
import com.discord.chat.presentation.message.view.botuikit.ComponentProvider;
import com.discord.chat.presentation.message.view.botuikit.components.ButtonComponentView;
import com.discord.chat.presentation.message.view.botuikit.components.ContentInventoryComponentView;
import com.discord.chat.presentation.message.view.botuikit.components.SelectComponentView;
import com.discord.chat.presentation.message.view.botuikit.components.checkpoint.CheckpointCardV2026ComponentView;
import com.discord.chat.presentation.message.view.voicemessages.AudioPlayerView;
import com.discord.chat.presentation.root.ChatView;
import com.discord.crash_reporting.system_logs.SystemLogCapture;
import com.discord.emoji_picker.EmojiPickerItemData;
import com.discord.emoji_picker.EmojiPickerScroller;
import com.discord.emoji_picker.EmojiPickerView;
import com.discord.mobile_voice_overlay.MobileVoiceOverlay;
import com.discord.notifications.react.PushNotificationModule;
import com.discord.progress_dots.ProgressDots;
import com.discord.recycler_view.utils.TransitionResilientGridLayoutManager;
import com.discord.recycler_view.utils.TransitionResilientLinearLayoutManager;
import com.facebook.drawee.span.SimpleDraweeSpanTextView;
import com.facebook.react.modules.appearance.AppearanceModule;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.bottomsheet.SheetAnimationCoordinator;
import java.util.Map;
import java.util.concurrent.FutureTask;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class s0 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2222d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f2223e;

    public /* synthetic */ s0(int i5, Object obj) {
        this.f2222d = i5;
        this.f2223e = obj;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit schemeChangeListener$lambda$0;
        Unit performInitialization$lambda$11;
        Unit screenshotContentObserver$lambda$0;
        Unit addListener$lambda$0;
        Unit checkForUpdateAndReload$lambda$0;
        Unit _init_$lambda$1;
        ComponentProvider message$lambda$1;
        View fields_KZKlO_o$lambda$33$lambda$30;
        Unit mediaEmbed$lambda$35;
        Unit content$lambda$3;
        SimpleDraweeSpanTextView shadowView_delegate$lambda$0;
        ProgressDots progressDots_delegate$lambda$0;
        MessageComponentContentInventoryViewBinding binding_delegate$lambda$4;
        View selectedOptions$lambda$5;
        ProgressDots progressDots_delegate$lambda$02;
        MessageComponentCheckpointCardV2026ViewBinding bind;
        Unit uploadProgress$lambda$11;
        int id2;
        Unit startThread$lambda$0;
        Map categoryIndices_delegate$lambda$1;
        Unit scrollToItemAtIndex$lambda$8;
        Unit scroller_delegate$lambda$5$lambda$3;
        Unit menuDialogProvider$lambda$14$lambda$13$lambda$12;
        Unit _init_$lambda$0;
        Unit removeAndRecycleAllViews$lambda$3;
        Unit removeAndRecycleAllViews$lambda$32;
        boolean _init_$lambda$02;
        int i5 = this.f2222d;
        Object obj = this.f2223e;
        switch (i5) {
            case 0:
                return r0.c((d1) obj);
            case 1:
                schemeChangeListener$lambda$0 = AppearanceModule.schemeChangeListener$lambda$0((AppearanceModule) obj);
                return schemeChangeListener$lambda$0;
            case 2:
                performInitialization$lambda$11 = MainApplication.performInitialization$lambda$11((FutureTask) obj);
                return performInitialization$lambda$11;
            case 3:
                screenshotContentObserver$lambda$0 = ScreenshotDetector.screenshotContentObserver$lambda$0((ScreenshotDetector) obj);
                return screenshotContentObserver$lambda$0;
            case 4:
                addListener$lambda$0 = ScreenshotHelperModule.addListener$lambda$0((ScreenshotHelperModule) obj);
                return addListener$lambda$0;
            case 5:
                checkForUpdateAndReload$lambda$0 = BundleUpdaterManager.checkForUpdateAndReload$lambda$0((BundleUpdaterManager) obj);
                return checkForUpdateAndReload$lambda$0;
            case 6:
                _init_$lambda$1 = ChatInputRootView._init_$lambda$1((ChatInputRootView) obj);
                return _init_$lambda$1;
            case 7:
                message$lambda$1 = AutomodSystemMessageWrapperView.setMessage$lambda$1((ComponentProvider) obj);
                return message$lambda$1;
            case 8:
                fields_KZKlO_o$lambda$33$lambda$30 = EmbedView.setFields_KZKlO_o$lambda$33$lambda$30((LinearLayout) obj);
                return fields_KZKlO_o$lambda$33$lambda$30;
            case 9:
                mediaEmbed$lambda$35 = EmbedView.setMediaEmbed$lambda$35((EmbedView) obj);
                return mediaEmbed$lambda$35;
            case 10:
                content$lambda$3 = FileAttachmentView.setContent$lambda$3((FileAttachmentView) obj);
                return content$lambda$3;
            case 11:
                shadowView_delegate$lambda$0 = MessageContentView.shadowView_delegate$lambda$0((MessageContentView) obj);
                return shadowView_delegate$lambda$0;
            case 12:
                progressDots_delegate$lambda$0 = ButtonComponentView.progressDots_delegate$lambda$0((ButtonComponentView) obj);
                return progressDots_delegate$lambda$0;
            case 13:
                binding_delegate$lambda$4 = ContentInventoryComponentView.binding_delegate$lambda$4((ContentInventoryComponentView) obj);
                return binding_delegate$lambda$4;
            case 14:
                selectedOptions$lambda$5 = SelectComponentView.setSelectedOptions$lambda$5((LayoutInflater) obj);
                return selectedOptions$lambda$5;
            case 15:
                progressDots_delegate$lambda$02 = SelectComponentView.progressDots_delegate$lambda$0((SelectComponentView) obj);
                return progressDots_delegate$lambda$02;
            case 16:
                bind = MessageComponentCheckpointCardV2026ViewBinding.bind((CheckpointCardV2026ComponentView) obj);
                return bind;
            case 17:
                uploadProgress$lambda$11 = AudioPlayerView.setUploadProgress$lambda$11((AudioPlayerView) obj);
                return uploadProgress$lambda$11;
            case 18:
                id2 = ((ChatView) obj).getId();
                return Integer.valueOf(id2);
            case 19:
                startThread$lambda$0 = SystemLogCapture.startThread$lambda$0((SystemLogCapture) obj);
                return startThread$lambda$0;
            case 20:
                categoryIndices_delegate$lambda$1 = EmojiPickerItemData.CoreData.categoryIndices_delegate$lambda$1((EmojiPickerItemData.CoreData) obj);
                return categoryIndices_delegate$lambda$1;
            case 21:
                scrollToItemAtIndex$lambda$8 = EmojiPickerScroller.scrollToItemAtIndex$lambda$8((EmojiPickerScroller) obj);
                return scrollToItemAtIndex$lambda$8;
            case 22:
                scroller_delegate$lambda$5$lambda$3 = EmojiPickerView.scroller_delegate$lambda$5$lambda$3((EmojiPickerView) obj);
                return scroller_delegate$lambda$5$lambda$3;
            case 23:
                menuDialogProvider$lambda$14$lambda$13$lambda$12 = MobileVoiceOverlay.menuDialogProvider$lambda$14$lambda$13$lambda$12((MobileVoiceOverlay) obj);
                return menuDialogProvider$lambda$14$lambda$13$lambda$12;
            case 24:
                _init_$lambda$0 = ProgressDots._init_$lambda$0((ProgressDots) obj);
                return _init_$lambda$0;
            case 25:
                removeAndRecycleAllViews$lambda$3 = TransitionResilientGridLayoutManager.removeAndRecycleAllViews$lambda$3((TransitionResilientGridLayoutManager) obj);
                return removeAndRecycleAllViews$lambda$3;
            case 26:
                removeAndRecycleAllViews$lambda$32 = TransitionResilientLinearLayoutManager.removeAndRecycleAllViews$lambda$3((TransitionResilientLinearLayoutManager) obj);
                return removeAndRecycleAllViews$lambda$32;
            case 27:
                Screen.Companion companion = Screen.Companion;
                return new SheetAnimationCoordinator((Screen) obj);
            case 28:
                d3.e eVar = (d3.e) obj;
                eVar.getLifecycle().a(new d3.b(eVar));
                return Unit.a;
            default:
                _init_$lambda$02 = PushNotificationModule._init_$lambda$0((PushNotificationModule) obj);
                return Boolean.valueOf(_init_$lambda$02);
        }
    }
}
