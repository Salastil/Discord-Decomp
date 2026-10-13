package bs;

import android.animation.ValueAnimator;
import android.content.Context;
import android.graphics.Canvas;
import android.view.View;
import android.view.ViewGroup;
import androidx.activity.ComponentDialog;
import com.discord.MainApplication;
import com.discord.chat.databinding.AudioPlayerViewBinding;
import com.discord.chat.databinding.MessageComponentCheckpointCardV2025ViewBinding;
import com.discord.chat.presentation.list.ChatListView;
import com.discord.chat.presentation.list.ChatListViewManager;
import com.discord.chat.presentation.message.MessageAccessoriesAdapter;
import com.discord.chat.presentation.message.messagepart.ImageAttachmentMessageAccessory;
import com.discord.chat.presentation.message.messagepart.InfoLinkMessageAccessory;
import com.discord.chat.presentation.message.messagepart.MessageAttachmentAccessory;
import com.discord.chat.presentation.message.messagepart.polls.PollAnswerAccessory;
import com.discord.chat.presentation.message.view.ObscureOverlayView;
import com.discord.chat.presentation.message.view.SpoilerView;
import com.discord.chat.presentation.message.view.UploadContext;
import com.discord.chat.presentation.message.view.botuikit.ComponentContext;
import com.discord.chat.presentation.message.view.botuikit.components.ContainerComponentView;
import com.discord.chat.presentation.message.view.botuikit.components.SelectComponentView;
import com.discord.chat.presentation.message.view.botuikit.components.TextDisplayComponentView;
import com.discord.chat.presentation.message.view.botuikit.components.checkpoint.CheckpointCardV2025ComponentView;
import com.discord.chat.presentation.message.view.botuikit.react.SelectActionComponentViewManager;
import com.discord.chat.presentation.message.view.botuikit.react.TextDisplayComponentViewManager;
import com.discord.chat.presentation.message.view.mosaic_recycler.AttachmentMediaMosaicAdapter;
import com.discord.chat.presentation.message.view.polls.PollAnswerAdapter;
import com.discord.chat.presentation.message.view.voicemessages.AudioPlayerView;
import com.discord.chat.presentation.message.view.voicemessages.AudioPlayerWipeAnimatorManager;
import com.discord.chat.presentation.message.viewholder.MessageContentViewHolder;
import com.discord.chat.presentation.textutils.RenderContext;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import com.discord.emoji_picker.EmojiPickerView;
import com.discord.emoji_picker.EmojiPickerVisibilityTracker;
import com.discord.external_pip.ExternalPipTransitionView;
import com.discord.foreground_service.ForegroundServiceManager;
import com.discord.foreground_service.service.ServiceNotificationConfiguration;
import com.discord.lifecycle.ForegroundServiceStartGuard;
import com.discord.permissions.NativePermissionManagerModule;
import com.discord.recycler_view.scroller.Scroller;
import com.discord.tti_measurement_view.TTIMeasurementView;
import com.discord.view.ScreenOverride;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.views.image.ReactImageView;
import com.facebook.react.views.modal.ReactModalHostView;
import com.margelo.nitro.rive.BaseHybridViewModelPropertyImpl;
import com.margelo.nitro.rive.HybridRiveView;
import com.margelo.nitro.rive.HybridViewModelInstanceSpec;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.json.Json;

/* loaded from: classes3.dex */
public final /* synthetic */ class c0 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3166d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3167e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3168i;

    public /* synthetic */ c0(int i5, Object obj, Object obj2) {
        this.f3166d = i5;
        this.f3168i = obj;
        this.f3167e = obj2;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit uploadItemProps$lambda$0;
        Unit attachBaseContext$lambda$0;
        Unit addView$lambda$3;
        Unit onBindViewHolder$lambda$9;
        Unit configure$lambda$2;
        Unit configureSpoilerOverlay$lambda$5;
        Unit configureSpoiler$lambda$2;
        MessageComponentCheckpointCardV2025ViewBinding binding_delegate$lambda$6;
        Unit onBindViewHolder$lambda$4;
        AudioPlayerWipeAnimatorManager animatorManager_delegate$lambda$3;
        ValueAnimator scaleAnimator_delegate$lambda$5;
        Unit bind$lambda$1;
        Unit spannable$lambda$72$lambda$45;
        EmojiPickerVisibilityTracker visibilityTracker_delegate$lambda$1;
        Unit tryHide$lambda$0;
        Unit handleCreateOrUpdateService$lambda$7;
        Unit requestForegroundServicePermissionVoiceCall$lambda$3$lambda$1;
        Unit scrollToPosition$lambda$3;
        Unit onDraw$lambda$1;
        Unit showOrUpdate$lambda$5;
        Unit addListenerInternal$lambda$1;
        Unit onEventListener$lambda$9;
        Unit bindViewModelInstance$lambda$5;
        String[] names;
        Unit model$lambda$0;
        Unit createTextDisplayComponentContext$lambda$11;
        UIManager uiManager_delegate$lambda$1;
        Unit onBindViewHolder$lambda$2;
        switch (this.f3166d) {
            case 0:
                d0 d0Var = (d0) this.f3168i;
                String str = (String) this.f3167e;
                b0 b0Var = (b0) d0Var.f3174c;
                if (b0Var == null) {
                    Enum[] enumArr = (Enum[]) d0Var.f3173b;
                    b0Var = new b0(str, enumArr.length);
                    for (Enum r02 : enumArr) {
                        b0Var.k(r02.name(), false);
                    }
                }
                return b0Var;
            case 1:
                return com.facebook.imagepipeline.nativecode.c.g((String) this.f3167e, zr.j.f21436w, new SerialDescriptor[0], new e1(0, (d0) this.f3168i));
            case 2:
                uploadItemProps$lambda$0 = MessageAttachmentAccessory.getUploadItemProps$lambda$0((Function2) this.f3168i, (UploadContext) this.f3167e);
                return uploadItemProps$lambda$0;
            case 3:
                attachBaseContext$lambda$0 = MainApplication.attachBaseContext$lambda$0((Context) this.f3168i, (MainApplication) this.f3167e);
                return attachBaseContext$lambda$0;
            case 4:
                addView$lambda$3 = ChatListViewManager.addView$lambda$3((TTIMeasurementView) this.f3168i, (ChatListView) this.f3167e);
                return addView$lambda$3;
            case 5:
                onBindViewHolder$lambda$9 = MessageAccessoriesAdapter.onBindViewHolder$lambda$9((MessageAccessoriesAdapter) this.f3168i, (InfoLinkMessageAccessory) this.f3167e);
                return onBindViewHolder$lambda$9;
            case 6:
                configure$lambda$2 = ObscureOverlayView.configure$lambda$2((Function0) this.f3168i, (ObscureOverlayView) this.f3167e);
                return configure$lambda$2;
            case 7:
                configureSpoilerOverlay$lambda$5 = SpoilerView.configureSpoilerOverlay$lambda$5((SpoilerView) this.f3168i, (View) this.f3167e);
                return configureSpoilerOverlay$lambda$5;
            case 8:
                configureSpoiler$lambda$2 = ContainerComponentView.configureSpoiler$lambda$2((ComponentContext) this.f3168i, (ContainerComponentView) this.f3167e);
                return configureSpoiler$lambda$2;
            case 9:
                binding_delegate$lambda$6 = CheckpointCardV2025ComponentView.binding_delegate$lambda$6((CheckpointCardV2025ComponentView) this.f3168i, (Context) this.f3167e);
                return binding_delegate$lambda$6;
            case 10:
                onBindViewHolder$lambda$4 = PollAnswerAdapter.onBindViewHolder$lambda$4((PollAnswerAdapter) this.f3168i, (PollAnswerAccessory) this.f3167e);
                return onBindViewHolder$lambda$4;
            case 11:
                animatorManager_delegate$lambda$3 = AudioPlayerView.animatorManager_delegate$lambda$3((Context) this.f3168i, (AudioPlayerView) this.f3167e);
                return animatorManager_delegate$lambda$3;
            case 12:
                scaleAnimator_delegate$lambda$5 = AudioPlayerWipeAnimatorManager.scaleAnimator_delegate$lambda$5((AudioPlayerViewBinding) this.f3168i, (AudioPlayerWipeAnimatorManager) this.f3167e);
                return scaleAnimator_delegate$lambda$5;
            case 13:
                bind$lambda$1 = MessageContentViewHolder.bind$lambda$1((MessageContentViewHolder) this.f3168i, (Function1) this.f3167e);
                return bind$lambda$1;
            case 14:
                spannable$lambda$72$lambda$45 = TextUtilsKt.toSpannable$lambda$72$lambda$45((String) this.f3167e, (RenderContext) this.f3168i);
                return spannable$lambda$72$lambda$45;
            case 15:
                visibilityTracker_delegate$lambda$1 = EmojiPickerView.visibilityTracker_delegate$lambda$1((Function2) this.f3168i, (EmojiPickerView) this.f3167e);
                return visibilityTracker_delegate$lambda$1;
            case 16:
                tryHide$lambda$0 = ExternalPipTransitionView.Companion.tryHide$lambda$0((ViewGroup) this.f3168i, (ExternalPipTransitionView) this.f3167e);
                return tryHide$lambda$0;
            case 17:
                handleCreateOrUpdateService$lambda$7 = ForegroundServiceManager.handleCreateOrUpdateService$lambda$7((ServiceNotificationConfiguration.Type) this.f3168i, (ForegroundServiceStartGuard.Result) this.f3167e);
                return handleCreateOrUpdateService$lambda$7;
            case 18:
                requestForegroundServicePermissionVoiceCall$lambda$3$lambda$1 = NativePermissionManagerModule.requestForegroundServicePermissionVoiceCall$lambda$3$lambda$1((NativePermissionManagerModule) this.f3168i, (Promise) this.f3167e);
                return requestForegroundServicePermissionVoiceCall$lambda$3$lambda$1;
            case 19:
                scrollToPosition$lambda$3 = Scroller.scrollToPosition$lambda$3((Function0) this.f3168i, (Function0) this.f3167e);
                return scrollToPosition$lambda$3;
            case 20:
                onDraw$lambda$1 = ReactImageView.onDraw$lambda$1((ReactImageView) this.f3168i, (Canvas) this.f3167e);
                return onDraw$lambda$1;
            case 21:
                showOrUpdate$lambda$5 = ReactModalHostView.showOrUpdate$lambda$5((ReactModalHostView) this.f3168i, (ComponentDialog) this.f3167e);
                return showOrUpdate$lambda$5;
            case 22:
                addListenerInternal$lambda$1 = BaseHybridViewModelPropertyImpl.addListenerInternal$lambda$1((WeakReference) this.f3168i, (String) this.f3167e);
                return addListenerInternal$lambda$1;
            case 23:
                onEventListener$lambda$9 = HybridRiveView.onEventListener$lambda$9((HybridRiveView) this.f3168i, (Function1) this.f3167e);
                return onEventListener$lambda$9;
            case 24:
                bindViewModelInstance$lambda$5 = HybridRiveView.bindViewModelInstance$lambda$5((HybridViewModelInstanceSpec) this.f3168i, (HybridRiveView) this.f3167e);
                return bindViewModelInstance$lambda$5;
            case 25:
                SerialDescriptor serialDescriptor = (SerialDescriptor) this.f3168i;
                Json json = (Json) this.f3167e;
                LinkedHashMap linkedHashMap = new LinkedHashMap();
                androidx.appcompat.widget.v vVar = json.a;
                ds.s.p(serialDescriptor, json);
                int f2 = serialDescriptor.f();
                for (int i5 = 0; i5 < f2; i5++) {
                    List h6 = serialDescriptor.h(i5);
                    ArrayList arrayList = new ArrayList();
                    for (Object obj : h6) {
                        if (obj instanceof cs.n) {
                            arrayList.add(obj);
                        }
                    }
                    cs.n nVar = (cs.n) CollectionsKt.b0(arrayList);
                    if (nVar != null && (names = nVar.names()) != null) {
                        for (String str2 : names) {
                            String str3 = Intrinsics.areEqual(serialDescriptor.b(), zr.i.f21432t) ? "enum value" : "property";
                            if (linkedHashMap.containsKey(str2)) {
                                throw new ds.r("The suggested name '" + str2 + "' for " + str3 + ' ' + serialDescriptor.g(i5) + " is already one of the names for " + str3 + ' ' + serialDescriptor.g(((Number) kotlin.collections.v0.e(linkedHashMap, str2)).intValue()) + " in " + serialDescriptor);
                            }
                            linkedHashMap.put(str2, Integer.valueOf(i5));
                        }
                    }
                }
                return linkedHashMap.isEmpty() ? kotlin.collections.v0.d() : linkedHashMap;
            case 26:
                model$lambda$0 = SelectActionComponentViewManager.setModel$lambda$0((SelectActionComponentViewManager) this.f3168i, (SelectComponentView) this.f3167e);
                return model$lambda$0;
            case 27:
                createTextDisplayComponentContext$lambda$11 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$11((TextDisplayComponentViewManager) this.f3168i, (TextDisplayComponentView) this.f3167e);
                return createTextDisplayComponentContext$lambda$11;
            case 28:
                uiManager_delegate$lambda$1 = ScreenOverride.uiManager_delegate$lambda$1((ThemedReactContext) this.f3168i, (ScreenOverride) this.f3167e);
                return uiManager_delegate$lambda$1;
            default:
                onBindViewHolder$lambda$2 = AttachmentMediaMosaicAdapter.onBindViewHolder$lambda$2((AttachmentMediaMosaicAdapter) this.f3168i, (ImageAttachmentMessageAccessory) this.f3167e);
                return onBindViewHolder$lambda$2;
        }
    }

    public /* synthetic */ c0(String str, Object obj, int i5) {
        this.f3166d = i5;
        this.f3167e = str;
        this.f3168i = obj;
    }
}
