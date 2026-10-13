package com.discord.chat.presentation.message.view;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Configuration;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.GradientDrawable;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.ProgressBar;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.chat.databinding.MediaViewBinding;
import com.discord.chat.presentation.list.InlineMediaOwner;
import com.discord.chat.presentation.message.utils.GetMediaImagePlaceholderStatesListenerKt;
import com.discord.chat.presentation.message.view.media.ViewAttachedListener;
import com.discord.image.fresco.SetOptionalImageUrlKt;
import com.discord.key_commands.KeyCommandDescriptor;
import com.discord.media_player.MediaPlayer;
import com.discord.media_player.MediaPlayerManager;
import com.discord.media_player.MediaPlayerManagerModule;
import com.discord.media_player.MediaPlayerView;
import com.discord.media_player.MediaSource;
import com.discord.media_player.reactevents.MediaPlayFinishedAnalytics;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import com.discord.misc.utilities.measure.ViewMeasureExtensionsKt;
import com.discord.misc.utilities.view.ViewBackgroundUtilsKt;
import com.discord.portals.from_native.PortalFromNativeContextManager;
import com.discord.portals.utils.ViewRemoveFromParentKt;
import com.discord.react_asset_fetcher.ReactAsset;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchUtilsKt;
import com.discord.react_strings.I18nMessage;
import com.discord.react_strings.I18nUtilsKt;
import com.discord.theme.R;
import com.discord.theme.ThemeManagerKt;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.drawee.drawable.ScalingUtils$ScaleType;
import com.facebook.drawee.generic.GenericDraweeHierarchy;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.react.bridge.LifecycleEventListener;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.ViewProps;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import org.webrtc.PeerConnection;

@Metadata(d1 = {"\u0000½\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0013\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0015\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0007*\u0001s\b\u0016\u0018\u00002\u00020\u0001B'\b\u0007\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0004\u0012\b\b\u0002\u0010\u0007\u001a\u00020\u0006¢\u0006\u0004\b\b\u0010\tJ\u000f\u0010\u000b\u001a\u00020\nH\u0014¢\u0006\u0004\b\u000b\u0010\fJ\u0019\u0010\u000f\u001a\u00020\n2\b\u0010\u000e\u001a\u0004\u0018\u00010\rH\u0014¢\u0006\u0004\b\u000f\u0010\u0010J\u000f\u0010\u0011\u001a\u00020\nH\u0014¢\u0006\u0004\b\u0011\u0010\fJí\u0001\u0010/\u001a\u00020\n2\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u00122\b\b\u0002\u0010\u0015\u001a\u00020\u00142\b\b\u0002\u0010\u0016\u001a\u00020\u00142\b\b\u0002\u0010\u0017\u001a\u00020\u00142\n\b\u0002\u0010\u0019\u001a\u0004\u0018\u00010\u00182\b\b\u0002\u0010\u001a\u001a\u00020\u00142\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u00062\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\u001c2\b\b\u0002\u0010\u001e\u001a\u00020\u00062\b\b\u0002\u0010\u001f\u001a\u00020\u00142\b\b\u0002\u0010 \u001a\u00020\u00142\b\b\u0002\u0010!\u001a\u00020\u00142\b\b\u0002\u0010\"\u001a\u00020\u00062\u000e\b\u0002\u0010$\u001a\b\u0012\u0004\u0012\u00020\n0#2\n\b\u0002\u0010&\u001a\u0004\u0018\u00010%2\n\b\u0002\u0010(\u001a\u0004\u0018\u00010'2\n\b\u0002\u0010)\u001a\u0004\u0018\u00010\u00062\n\b\u0002\u0010*\u001a\u0004\u0018\u00010\u00062\b\b\u0002\u0010,\u001a\u00020+2\n\b\u0002\u0010.\u001a\u0004\u0018\u00010-¢\u0006\u0004\b/\u00100J\u0015\u00102\u001a\u00020\n2\u0006\u00101\u001a\u00020-¢\u0006\u0004\b2\u00103J!\u00108\u001a\u00020\n2\b\u00105\u001a\u0004\u0018\u0001042\b\u00107\u001a\u0004\u0018\u000106¢\u0006\u0004\b8\u00109J!\u0010=\u001a\u00020\n2\u0012\u0010<\u001a\u000e\u0012\u0004\u0012\u00020;\u0012\u0004\u0012\u00020\n0:¢\u0006\u0004\b=\u0010>J?\u0010D\u001a\u00020\n2\u0006\u0010?\u001a\u00020\u00142\b\u0010@\u001a\u0004\u0018\u00010%2\b\u0010A\u001a\u0004\u0018\u00010'2\b\u0010B\u001a\u0004\u0018\u00010\u00062\b\u0010C\u001a\u0004\u0018\u00010\u0006H\u0002¢\u0006\u0004\bD\u0010EJ\u000f\u0010F\u001a\u00020\nH\u0002¢\u0006\u0004\bF\u0010\fJ\u000f\u0010G\u001a\u00020\nH\u0002¢\u0006\u0004\bG\u0010\fJ\u000f\u0010H\u001a\u00020\u0014H\u0002¢\u0006\u0004\bH\u0010IJ\u000f\u0010J\u001a\u00020\nH\u0002¢\u0006\u0004\bJ\u0010\fJ\u000f\u0010K\u001a\u00020\nH\u0002¢\u0006\u0004\bK\u0010\fJ\u0017\u0010L\u001a\u00020\n2\u0006\u0010G\u001a\u00020\u0014H\u0002¢\u0006\u0004\bL\u0010MJ-\u0010R\u001a\u0010\u0012\u0004\u0012\u00020P\u0012\u0004\u0012\u00020Q\u0018\u00010O2\u0006\u0010\u0013\u001a\u00020\u00122\u0006\u0010N\u001a\u00020\u0014H\u0002¢\u0006\u0004\bR\u0010SJ\u000f\u0010T\u001a\u00020\nH\u0002¢\u0006\u0004\bT\u0010\fJ\u000f\u0010U\u001a\u00020\nH\u0002¢\u0006\u0004\bU\u0010\fR\u001a\u0010W\u001a\u00020V8\u0002X\u0082\u0004¢\u0006\f\n\u0004\bW\u0010X\u0012\u0004\bY\u0010\fR\u0018\u0010Z\u001a\u0004\u0018\u00010Q8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\bZ\u0010[R\u0018\u0010\u0013\u001a\u0004\u0018\u00010\u00128\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u0013\u0010\\R\u0018\u0010]\u001a\u0004\u0018\u00010P8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b]\u0010^R\u0016\u0010\u0016\u001a\u00020\u00148\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u0016\u0010_R\u0016\u0010\u0017\u001a\u00020\u00148\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u0017\u0010_R\u0016\u0010\u0015\u001a\u00020\u00148\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u0015\u0010_R\u0018\u0010\u0019\u001a\u0004\u0018\u00010\u00188\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u0019\u0010`R\u0016\u0010\u001a\u001a\u00020\u00148\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u001a\u0010_R\u0016\u0010a\u001a\u00020\u00148\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\ba\u0010_R\u0018\u0010\u001b\u001a\u0004\u0018\u00010\u00068\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u001b\u0010bR\u0018\u0010\u001d\u001a\u0004\u0018\u00010\u001c8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u001d\u0010cR\u0016\u0010\u001e\u001a\u00020\u00068\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u001e\u0010dR\u0016\u0010e\u001a\u00020\u00148\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\be\u0010_R\u0016\u0010\u001f\u001a\u00020\u00148\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u001f\u0010_R\u0016\u0010 \u001a\u00020\u00148\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b \u0010_R\u0016\u0010!\u001a\u00020\u00148\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b!\u0010_R\u0016\u0010\"\u001a\u00020\u00068\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\"\u0010dR\u001c\u0010$\u001a\b\u0012\u0004\u0012\u00020\n0#8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b$\u0010fR\u0018\u0010&\u001a\u0004\u0018\u00010%8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b&\u0010gR\u0018\u0010(\u001a\u0004\u0018\u00010'8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b(\u0010hR\u0018\u0010*\u001a\u0004\u0018\u00010\u00068\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b*\u0010bR\u0018\u0010)\u001a\u0004\u0018\u00010\u00068\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b)\u0010bR\"\u0010<\u001a\u000e\u0012\u0004\u0012\u00020;\u0012\u0004\u0012\u00020\n0:8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b<\u0010iR\u0016\u0010,\u001a\u00020+8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b,\u0010jR\u0018\u0010k\u001a\u0004\u0018\u00010%8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\bk\u0010gR\u0016\u0010m\u001a\u0004\u0018\u00010l8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bm\u0010nR\u001a\u0010p\u001a\u00020o8\u0002X\u0082\u0004¢\u0006\f\n\u0004\bp\u0010q\u0012\u0004\br\u0010\fR\u0014\u0010t\u001a\u00020s8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bt\u0010uR\u0016\u0010y\u001a\u0004\u0018\u00010v8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\bw\u0010xR\u0018\u0010|\u001a\u00020\u0014*\u00020\u00128BX\u0082\u0004¢\u0006\u0006\u001a\u0004\bz\u0010{¨\u0006}"}, d2 = {"Lcom/discord/chat/presentation/message/view/MediaView;", "Landroid/widget/FrameLayout;", "Landroid/content/Context;", "context", "Landroid/util/AttributeSet;", "attrs", "", "defStyleAttr", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V", "", "onDetachedFromWindow", "()V", "Landroid/content/res/Configuration;", "newConfig", "onConfigurationChanged", "(Landroid/content/res/Configuration;)V", "onAttachedToWindow", "Lcom/discord/media_player/MediaSource;", "mediaSource", "", "mediaViewDetached", "mediaViewScrolling", "mediaViewFocused", "Lcom/discord/media_player/MediaPlayer$Event;", "mediaPlaybackState", "mediaVolumeOn", "mediaOrientation", "Lcom/discord/portals/from_native/PortalFromNativeContextManager$Event;", "mediaPortalEvent", "mediaInlineMediaOwnerGeneration", "mediaCanPlayInline", "mediaPlayThirdParty", "mediaHidePlayButton", "mediaThumbnailFadeDuration", "Lkotlin/Function0;", "mediaOnPlayCallback", "", "overlayTagText", "Lcom/discord/react_asset_fetcher/ReactAsset;", "overlayTagIcon", "overlayTagBackgroundColor", "overlayTagTextColor", "Lcom/discord/media_player/MediaPlayer$PlayerSettings;", "playerSettings", "Lcom/facebook/drawee/drawable/ScalingUtils$ScaleType;", "imagePreviewScaleType", "setMediaData", "(Lcom/discord/media_player/MediaSource;ZZZLcom/discord/media_player/MediaPlayer$Event;ZLjava/lang/Integer;Lcom/discord/portals/from_native/PortalFromNativeContextManager$Event;IZZZILkotlin/jvm/functions/Function0;Ljava/lang/String;Lcom/discord/react_asset_fetcher/ReactAsset;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/discord/media_player/MediaPlayer$PlayerSettings;Lcom/facebook/drawee/drawable/ScalingUtils$ScaleType;)V", "scaleType", "setImagePreviewScaleType", "(Lcom/facebook/drawee/drawable/ScalingUtils$ScaleType;)V", "Landroid/view/View$OnClickListener;", "onClickListener", "Landroid/view/View$OnLongClickListener;", "onLongClickListener", "setOnMediaClickListeners", "(Landroid/view/View$OnClickListener;Landroid/view/View$OnLongClickListener;)V", "Lkotlin/Function1;", "Lcom/discord/media_player/reactevents/MediaPlayFinishedAnalytics;", "onMediaPlayFinishedAnalytics", "setAnalyticsListener", "(Lkotlin/jvm/functions/Function1;)V", "isTagVisible", "content", "icon", ViewProps.BACKGROUND_COLOR, "textColor", "setupTag", "(ZLjava/lang/String;Lcom/discord/react_asset_fetcher/ReactAsset;Ljava/lang/Integer;Ljava/lang/Integer;)V", "pause", "play", "mediaInlinePlaybackAllowed", "()Z", "playAfterReattachingSurface", "prepareAndPlay", "togglePortalControl", "(Z)V", "loopMedia", "Lkotlin/Pair;", "Lcom/discord/media_player/MediaPlayer;", "Lcom/discord/media_player/MediaPlayerView;", "prepareMediaPlayer", "(Lcom/discord/media_player/MediaSource;Z)Lkotlin/Pair;", "registerForPortal", "releasePlayer", "Lcom/discord/chat/databinding/MediaViewBinding;", "binding", "Lcom/discord/chat/databinding/MediaViewBinding;", "getBinding$annotations", "mediaPlayerView", "Lcom/discord/media_player/MediaPlayerView;", "Lcom/discord/media_player/MediaSource;", "mediaPlayer", "Lcom/discord/media_player/MediaPlayer;", "Z", "Lcom/discord/media_player/MediaPlayer$Event;", "mediaShouldResume", "Ljava/lang/Integer;", "Lcom/discord/portals/from_native/PortalFromNativeContextManager$Event;", "I", "mediaSurfaceNeedsReattach", "Lkotlin/jvm/functions/Function0;", "Ljava/lang/String;", "Lcom/discord/react_asset_fetcher/ReactAsset;", "Lkotlin/jvm/functions/Function1;", "Lcom/discord/media_player/MediaPlayer$PlayerSettings;", "pauseId", "Lcom/discord/media_player/MediaPlayerManagerModule;", "managerModule", "Lcom/discord/media_player/MediaPlayerManagerModule;", "Lcom/discord/chat/presentation/message/view/media/ViewAttachedListener;", "attachStateChangeListener", "Lcom/discord/chat/presentation/message/view/media/ViewAttachedListener;", "getAttachStateChangeListener$annotations", "com/discord/chat/presentation/message/view/MediaView$lifecycleListener$1", "lifecycleListener", "Lcom/discord/chat/presentation/message/view/MediaView$lifecycleListener$1;", "Lcom/facebook/react/bridge/ReactContext;", "getReactContext", "()Lcom/facebook/react/bridge/ReactContext;", "reactContext", "getShouldShowGifIndicator", "(Lcom/discord/media_player/MediaSource;)Z", "shouldShowGifIndicator", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nMediaView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaView.kt\ncom/discord/chat/presentation/message/view/MediaView\n+ 2 CastUtils.kt\ncom/discord/misc/utilities/kotlin/CastUtilsKt\n+ 3 ColorDrawable.kt\nandroidx/core/graphics/drawable/ColorDrawableKt\n+ 4 View.kt\nandroidx/core/view/ViewKt\n+ 5 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,750:1\n8#2:751\n27#3:752\n257#4,2:753\n257#4,2:755\n257#4,2:757\n257#4,2:759\n257#4,2:761\n257#4,2:763\n255#4:765\n257#4,2:766\n257#4,2:768\n1#5:770\n*S KotlinDebug\n*F\n+ 1 MediaView.kt\ncom/discord/chat/presentation/message/view/MediaView\n*L\n88#1:751\n134#1:752\n277#1:753,2\n298#1:755,2\n304#1:757,2\n315#1:759,2\n328#1:761,2\n511#1:763,2\n518#1:765\n524#1:766,2\n528#1:768,2\n*E\n"})
/* loaded from: classes.dex */
public class MediaView extends FrameLayout {

    @NotNull
    private final ViewAttachedListener attachStateChangeListener;

    @NotNull
    private final MediaViewBinding binding;

    @NotNull
    private final MediaView$lifecycleListener$1 lifecycleListener;
    private final MediaPlayerManagerModule managerModule;
    private boolean mediaCanPlayInline;
    private boolean mediaHidePlayButton;
    private int mediaInlineMediaOwnerGeneration;

    @NotNull
    private Function0<Unit> mediaOnPlayCallback;
    private Integer mediaOrientation;
    private boolean mediaPlayThirdParty;
    private MediaPlayer.Event mediaPlaybackState;
    private MediaPlayer mediaPlayer;
    private MediaPlayerView mediaPlayerView;
    private PortalFromNativeContextManager.Event mediaPortalEvent;
    private boolean mediaShouldResume;
    private MediaSource mediaSource;
    private boolean mediaSurfaceNeedsReattach;
    private int mediaThumbnailFadeDuration;
    private boolean mediaViewDetached;
    private boolean mediaViewFocused;
    private boolean mediaViewScrolling;
    private boolean mediaVolumeOn;

    @NotNull
    private Function1<? super MediaPlayFinishedAnalytics, Unit> onMediaPlayFinishedAnalytics;
    private Integer overlayTagBackgroundColor;
    private ReactAsset overlayTagIcon;
    private String overlayTagText;
    private Integer overlayTagTextColor;
    private String pauseId;

    @NotNull
    private MediaPlayer.PlayerSettings playerSettings;

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public MediaView(@NotNull Context context) {
        this(context, null, 0, 6, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit attachStateChangeListener$lambda$2(MediaView mediaView, boolean z5) {
        if (z5) {
            setMediaData$default(mediaView, null, false, false, false, null, false, null, null, 0, false, false, false, 0, null, null, null, null, null, null, null, 1048573, null);
        } else {
            setMediaData$default(mediaView, null, true, false, false, null, false, null, null, 0, false, false, false, 0, null, null, null, null, null, null, null, 1048569, null);
        }
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit attachStateChangeListener$lambda$3(MediaView mediaView, boolean z5) {
        setMediaData$default(mediaView, null, false, z5, false, null, false, null, null, 0, false, false, false, 0, null, null, null, null, null, null, null, 1048571, null);
        return Unit.a;
    }

    private static /* synthetic */ void getAttachStateChangeListener$annotations() {
    }

    private static /* synthetic */ void getBinding$annotations() {
    }

    private final ReactContext getReactContext() {
        Context context = getContext();
        if (context instanceof ReactContext) {
            return (ReactContext) context;
        }
        return null;
    }

    private final boolean getShouldShowGifIndicator(MediaSource mediaSource) {
        return mediaSource.getIsGifv() && !mediaSource.getShouldAutoPlay();
    }

    private final boolean mediaInlinePlaybackAllowed() {
        PortalFromNativeContextManager portalFromNativeContextManager = PortalFromNativeContextManager.INSTANCE;
        MediaSource mediaSource = this.mediaSource;
        return Intrinsics.areEqual(portalFromNativeContextManager.isMediaViewBeingPortaled(mediaSource != null ? mediaSource.getPortal() : null), Boolean.TRUE) || InlineMediaOwner.INSTANCE.ownsInlineMedia(this);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onMediaPlayFinishedAnalytics$lambda$1(MediaPlayFinishedAnalytics it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void pause() {
        MediaPlayer mediaPlayer = this.mediaPlayer;
        if (mediaPlayer != null) {
            mediaPlayer.pause();
        }
        togglePortalControl(false);
    }

    private final void play() {
        MediaPlayer mediaPlayer = this.mediaPlayer;
        if (mediaPlayer != null) {
            mediaPlayer.play();
        }
        togglePortalControl(true);
    }

    private final void playAfterReattachingSurface() {
        MediaPlayerView mediaPlayerView = this.mediaPlayerView;
        MediaPlayer mediaPlayer = this.mediaPlayer;
        if (mediaPlayerView != null && mediaPlayer != null) {
            mediaPlayerView.getView().post(new androidx.fragment.app.e(this, mediaPlayer, mediaPlayerView, 7));
        } else {
            this.mediaShouldResume = false;
            play();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void playAfterReattachingSurface$lambda$15(MediaView mediaView, MediaPlayer mediaPlayer, MediaPlayerView mediaPlayerView) {
        if (mediaView.mediaViewDetached || mediaView.mediaViewScrolling || !mediaView.mediaViewFocused) {
            return;
        }
        PortalFromNativeContextManager portalFromNativeContextManager = PortalFromNativeContextManager.INSTANCE;
        MediaSource mediaSource = mediaView.mediaSource;
        if (!Intrinsics.areEqual(portalFromNativeContextManager.isMediaViewBeingPortaled(mediaSource != null ? mediaSource.getPortal() : null), Boolean.FALSE) && mediaView.mediaInlinePlaybackAllowed() && mediaView.mediaPlayer == mediaPlayer && mediaView.mediaPlayerView == mediaPlayerView) {
            mediaView.mediaShouldResume = false;
            mediaView.mediaSurfaceNeedsReattach = false;
            mediaPlayer.reattachSurface(mediaPlayerView);
            mediaView.play();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void prepareAndPlay() {
        if (!mediaInlinePlaybackAllowed()) {
            this.mediaOnPlayCallback.invoke();
            return;
        }
        if (this.mediaPlayer != null && this.mediaPlayerView != null) {
            play();
            return;
        }
        MediaSource mediaSource = this.mediaSource;
        if (mediaSource == null) {
            return;
        }
        prepareMediaPlayer(mediaSource, false);
        this.mediaOnPlayCallback.invoke();
    }

    private final Pair<MediaPlayer, MediaPlayerView> prepareMediaPlayer(MediaSource mediaSource, boolean loopMedia) {
        if (mediaSource.getSourceUrl() == null) {
            return null;
        }
        MediaPlayerView mediaPlayerView = this.mediaPlayerView;
        if (mediaPlayerView == null) {
            Context context = getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            mediaPlayerView = new MediaPlayerView(context);
            addView(mediaPlayerView.getView(), 0, new FrameLayout.LayoutParams(-1, -1));
        }
        MediaPlayerView mediaPlayerView2 = mediaPlayerView;
        mediaPlayerView2.setVisible(true);
        MediaPlayer mediaPlayer = this.mediaPlayer;
        if (mediaPlayer == null) {
            MediaPlayerManager mediaPlayerManager = MediaPlayerManager.INSTANCE;
            Context context2 = getContext();
            Intrinsics.checkNotNullExpressionValue(context2, "getContext(...)");
            Double portal = mediaSource.getPortal();
            Intrinsics.checkNotNull(portal);
            mediaPlayer = mediaPlayerManager.acquire(context2, portal.doubleValue(), this.playerSettings);
        }
        MediaPlayer mediaPlayer2 = mediaPlayer;
        mediaPlayer2.setEventListener(new r(this, 3));
        mediaPlayer2.setVolumeListener(new r(this, 4));
        mediaPlayer2.setAnalyticsListener(new r(this, 5));
        mediaPlayer2.setVolume(mediaSource.getIsGifv() ? 0.0f : 1.0f);
        MediaPlayer.preparePlayer$default(mediaPlayer2, mediaSource, true, loopMedia, 0L, mediaPlayerView2, null, 40, null);
        this.mediaPlayer = mediaPlayer2;
        this.mediaPlayerView = mediaPlayerView2;
        ViewMeasureExtensionsKt.measureAndLayout(this);
        return new Pair<>(mediaPlayer2, mediaPlayerView2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit prepareMediaPlayer$lambda$21$lambda$18(MediaView mediaView, MediaPlayer.Event event) {
        Intrinsics.checkNotNullParameter(event, "event");
        setMediaData$default(mediaView, null, false, false, false, event, false, null, null, 0, false, false, false, 0, null, null, null, null, null, null, null, 1048559, null);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit prepareMediaPlayer$lambda$21$lambda$19(MediaView mediaView, float f2) {
        setMediaData$default(mediaView, null, false, false, false, null, f2 > 0.0f, null, null, 0, false, false, false, 0, null, null, null, null, null, null, null, 1048543, null);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit prepareMediaPlayer$lambda$21$lambda$20(MediaView mediaView, MediaPlayFinishedAnalytics event) {
        Intrinsics.checkNotNullParameter(event, "event");
        mediaView.onMediaPlayFinishedAnalytics.invoke(event);
        return Unit.a;
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x0035, code lost:
    
        if (r1 != null) goto L17;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final void registerForPortal() {
        Double portal;
        Pair<MediaPlayer, MediaPlayerView> prepareMediaPlayer;
        final MediaSource mediaSource = this.mediaSource;
        if (mediaSource != null && (portal = mediaSource.getPortal()) != null) {
            final double doubleValue = portal.doubleValue();
            MediaPlayer mediaPlayer = this.mediaPlayer;
            if (mediaPlayer != null && this.mediaPlayerView != null) {
                Intrinsics.checkNotNull(mediaPlayer);
                MediaPlayerView mediaPlayerView = this.mediaPlayerView;
                Intrinsics.checkNotNull(mediaPlayerView);
                prepareMediaPlayer = new Pair<>(mediaPlayer, mediaPlayerView);
            } else if (mediaSource.getIsValid()) {
                prepareMediaPlayer = prepareMediaPlayer(mediaSource, mediaSource.getIsGifv());
            }
            final MediaPlayer mediaPlayer2 = (MediaPlayer) prepareMediaPlayer.f13474d;
            final MediaPlayerView mediaPlayerView2 = (MediaPlayerView) prepareMediaPlayer.f13475e;
            PortalFromNativeContextManager.INSTANCE.addPortal(doubleValue, mediaPlayerView2.getView(), new r(this, 2), new Function1() { // from class: com.discord.chat.presentation.message.view.s
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    Unit registerForPortal$lambda$24;
                    registerForPortal$lambda$24 = MediaView.registerForPortal$lambda$24(MediaView.this, mediaSource, mediaPlayer2, mediaPlayerView2, doubleValue, (View) obj);
                    return registerForPortal$lambda$24;
                }
            }, new com.discord.age_assurance.a(this, mediaPlayer2, mediaSource, 3), new b7.a(11, mediaSource, this));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit registerForPortal$lambda$22(MediaView mediaView, View view) {
        Intrinsics.checkNotNullParameter(view, "view");
        mediaView.removeOnAttachStateChangeListener(mediaView.attachStateChangeListener);
        ViewRemoveFromParentKt.removeFromParent(view);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit registerForPortal$lambda$24(final MediaView mediaView, MediaSource mediaSource, final MediaPlayer mediaPlayer, final MediaPlayerView mediaPlayerView, final double d6, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        MediaPlayerManagerModule mediaPlayerManagerModule = mediaView.managerModule;
        if (mediaPlayerManagerModule != null) {
            mediaPlayerManagerModule.startPlayerProgressInterval(mediaSource, mediaPlayer);
        }
        mediaPlayerView.getView().post(new Runnable() { // from class: com.discord.chat.presentation.message.view.q
            @Override // java.lang.Runnable
            public final void run() {
                MediaView.registerForPortal$lambda$24$lambda$23(MediaView.this, d6, mediaPlayer, mediaPlayerView);
            }
        });
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void registerForPortal$lambda$24$lambda$23(MediaView mediaView, double d6, MediaPlayer mediaPlayer, MediaPlayerView mediaPlayerView) {
        if (!mediaView.mediaViewFocused || Intrinsics.areEqual(PortalFromNativeContextManager.INSTANCE.isMediaViewBeingPortaled(Double.valueOf(d6)), Boolean.FALSE)) {
            return;
        }
        MediaSource mediaSource = mediaView.mediaSource;
        if (Intrinsics.areEqual(d6, mediaSource != null ? mediaSource.getPortal() : null)) {
            mediaPlayer.reattachSurface(mediaPlayerView);
            mediaView.play();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit registerForPortal$lambda$25(MediaView mediaView, MediaPlayer mediaPlayer, MediaSource mediaSource, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        mediaView.mediaVolumeOn = !mediaPlayer.isMuted();
        MediaPlayerManagerModule mediaPlayerManagerModule = mediaView.managerModule;
        if (mediaPlayerManagerModule != null) {
            mediaPlayerManagerModule.stopPlayerProgressInterval(mediaSource);
        }
        Double portal = mediaSource.getPortal();
        MediaSource mediaSource2 = mediaView.mediaSource;
        if (!Intrinsics.areEqual(portal, mediaSource2 != null ? mediaSource2.getPortal() : null) || mediaPlayer.hasEnded() || !mediaView.isAttachedToWindow()) {
            mediaView.releasePlayer();
        }
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit registerForPortal$lambda$26(MediaSource mediaSource, MediaView mediaView, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        Double portal = mediaSource.getPortal();
        MediaSource mediaSource2 = mediaView.mediaSource;
        if (Intrinsics.areEqual(portal, mediaSource2 != null ? mediaSource2.getPortal() : null)) {
            if (mediaView.mediaPlayer != null) {
                mediaView.releasePlayer();
            }
            mediaView.mediaPlayerView = null;
            setMediaData$default(mediaView, null, false, false, false, null, false, null, null, 0, false, false, false, 0, null, null, null, null, null, null, null, 1048559, null);
        }
        mediaView.addOnAttachStateChangeListener(mediaView.attachStateChangeListener);
        return Unit.a;
    }

    private final void releasePlayer() {
        Double portal;
        this.mediaSurfaceNeedsReattach = false;
        MediaPlayerManagerModule mediaPlayerManagerModule = this.managerModule;
        if (mediaPlayerManagerModule != null) {
            MediaSource mediaSource = this.mediaSource;
            if (mediaSource == null || (portal = mediaSource.getPortal()) == null) {
                return;
            } else {
                mediaPlayerManagerModule.toggle(portal.doubleValue(), false);
            }
        }
        MediaPlayerManager mediaPlayerManager = MediaPlayerManager.INSTANCE;
        MediaSource mediaSource2 = this.mediaSource;
        mediaPlayerManager.release(mediaSource2 != null ? mediaSource2.getPortal() : null);
        MediaPlayer mediaPlayer = this.mediaPlayer;
        if (mediaPlayer != null) {
            mediaPlayer.reset();
            Unit unit = Unit.a;
            this.mediaPlayer = null;
        }
        MediaPlayerView mediaPlayerView = this.mediaPlayerView;
        if (mediaPlayerView != null) {
            mediaPlayerView.reset();
        }
    }

    public static /* synthetic */ void setMediaData$default(MediaView mediaView, MediaSource mediaSource, boolean z5, boolean z6, boolean z7, MediaPlayer.Event event, boolean z8, Integer num, PortalFromNativeContextManager.Event event2, int i5, boolean z10, boolean z11, boolean z12, int i6, Function0 function0, String str, ReactAsset reactAsset, Integer num2, Integer num3, MediaPlayer.PlayerSettings playerSettings, ScalingUtils$ScaleType scalingUtils$ScaleType, int i10, Object obj) {
        ScalingUtils$ScaleType scalingUtils$ScaleType2;
        MediaPlayer.PlayerSettings playerSettings2;
        if (obj != null) {
            throw new UnsupportedOperationException("Super calls with default arguments not supported in this target, function: setMediaData");
        }
        MediaSource mediaSource2 = (i10 & 1) != 0 ? mediaView.mediaSource : mediaSource;
        boolean z13 = (i10 & 2) != 0 ? mediaView.mediaViewDetached : z5;
        boolean z14 = (i10 & 4) != 0 ? mediaView.mediaViewScrolling : z6;
        boolean z15 = (i10 & 8) != 0 ? mediaView.mediaViewFocused : z7;
        MediaPlayer.Event event3 = (i10 & 16) != 0 ? mediaView.mediaPlaybackState : event;
        boolean z16 = (i10 & 32) != 0 ? mediaView.mediaVolumeOn : z8;
        Integer num4 = (i10 & 64) != 0 ? mediaView.mediaOrientation : num;
        PortalFromNativeContextManager.Event event4 = (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? mediaView.mediaPortalEvent : event2;
        int i11 = (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? mediaView.mediaInlineMediaOwnerGeneration : i5;
        boolean z17 = (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? mediaView.mediaCanPlayInline : z10;
        boolean z18 = (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? mediaView.mediaPlayThirdParty : z11;
        boolean z19 = (i10 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? mediaView.mediaHidePlayButton : z12;
        int i12 = (i10 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? mediaView.mediaThumbnailFadeDuration : i6;
        Function0 function02 = (i10 & 8192) != 0 ? mediaView.mediaOnPlayCallback : function0;
        MediaSource mediaSource3 = mediaSource2;
        String str2 = (i10 & 16384) != 0 ? mediaView.overlayTagText : str;
        ReactAsset reactAsset2 = (i10 & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0 ? mediaView.overlayTagIcon : reactAsset;
        Integer num5 = (i10 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) != 0 ? mediaView.overlayTagBackgroundColor : num2;
        Integer num6 = (i10 & KeyCommandDescriptor.ModifierFlags.SHIFT) != 0 ? mediaView.overlayTagTextColor : num3;
        MediaPlayer.PlayerSettings playerSettings3 = (i10 & KeyCommandDescriptor.ModifierFlags.CONTROL) != 0 ? mediaView.playerSettings : playerSettings;
        if ((i10 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) != 0) {
            playerSettings2 = playerSettings3;
            scalingUtils$ScaleType2 = ((GenericDraweeHierarchy) mediaView.binding.inlineMediaImagePreview.getHierarchy()).f();
        } else {
            scalingUtils$ScaleType2 = scalingUtils$ScaleType;
            playerSettings2 = playerSettings3;
        }
        mediaView.setMediaData(mediaSource3, z13, z14, z15, event3, z16, num4, event4, i11, z17, z18, z19, i12, function02, str2, reactAsset2, num5, num6, playerSettings2, scalingUtils$ScaleType2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setMediaData$lambda$10(MediaView mediaView, boolean z5, MediaSource mediaSource, View view) {
        Double portal;
        MediaPlayer mediaPlayer = mediaView.mediaPlayer;
        if (mediaPlayer != null) {
            mediaPlayer.setVolume(z5 ? 0.0f : 1.0f);
        }
        if (mediaSource == null || (portal = mediaSource.getPortal()) == null) {
            return;
        }
        double doubleValue = portal.doubleValue();
        MediaPlayerManagerModule mediaPlayerManagerModule = mediaView.managerModule;
        if (mediaPlayerManagerModule != null) {
            mediaPlayerManagerModule.onMuteToggle(doubleValue, z5);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setOnMediaClickListeners$lambda$11(MediaView mediaView, View.OnClickListener onClickListener, View view) {
        if (mediaView.mediaCanPlayInline && !mediaView.mediaPlayThirdParty) {
            MediaSource mediaSource = mediaView.mediaSource;
            if ((mediaSource != null ? mediaSource.getPortal() : null) != null) {
                mediaView.prepareAndPlay();
            }
        }
        mediaView.registerForPortal();
        onClickListener.onClick(mediaView);
    }

    private final void setupTag(boolean isTagVisible, String content, ReactAsset icon, Integer backgroundColor, Integer textColor) {
        ConstraintLayout constraintLayout = this.binding.overlayTag;
        Intrinsics.checkNotNull(constraintLayout);
        constraintLayout.setVisibility(isTagVisible ? 0 : 8);
        if (backgroundColor != null) {
            constraintLayout.setBackgroundTintList(ColorStateList.valueOf(backgroundColor.intValue()));
        }
        ConstraintLayout overlayTag = this.binding.overlayTag;
        Intrinsics.checkNotNullExpressionValue(overlayTag, "overlayTag");
        if (overlayTag.getVisibility() == 0) {
            int intValue = textColor != null ? textColor.intValue() : R.color.white_500;
            SimpleDraweeView simpleDraweeView = this.binding.overlayTagIcon;
            if (icon != null) {
                Intrinsics.checkNotNull(simpleDraweeView);
                simpleDraweeView.setVisibility(0);
                ReactAssetUtilsKt.setReactAsset(simpleDraweeView, icon);
                ColorUtilsKt.setTintColor(simpleDraweeView, Integer.valueOf(intValue));
            } else {
                Intrinsics.checkNotNull(simpleDraweeView);
                simpleDraweeView.setVisibility(8);
            }
            TextView textView = this.binding.overlayTagText;
            textView.setTextColor(intValue);
            textView.setText(content);
        }
    }

    private final void togglePortalControl(boolean play) {
        Double portal;
        MediaSource mediaSource = this.mediaSource;
        if (mediaSource == null || (portal = mediaSource.getPortal()) == null) {
            return;
        }
        double doubleValue = portal.doubleValue();
        MediaPlayerManagerModule mediaPlayerManagerModule = this.managerModule;
        if (mediaPlayerManagerModule != null) {
            mediaPlayerManagerModule.toggle(doubleValue, play);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        ReactContext reactContext = getReactContext();
        if (reactContext != null) {
            reactContext.addLifecycleEventListener(this.lifecycleListener);
        }
        nr.x.t(CoroutineViewUtilsKt.attachedScope(this, true), null, new MediaView$onAttachedToWindow$1(this, null), 3);
        nr.x.t(CoroutineViewUtilsKt.attachedScope(this, true), null, new MediaView$onAttachedToWindow$2(this, null), 3);
        nr.x.t(CoroutineViewUtilsKt.attachedScope(this, true), null, new MediaView$onAttachedToWindow$3(this, null), 3);
    }

    @Override // android.view.View
    public void onConfigurationChanged(Configuration newConfig) {
        super.onConfigurationChanged(newConfig);
        setMediaData$default(this, null, false, false, false, null, false, newConfig != null ? Integer.valueOf(newConfig.orientation) : null, null, 0, false, false, false, 0, null, null, null, null, null, null, null, 1048511, null);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        ReactContext reactContext = getReactContext();
        if (reactContext != null) {
            reactContext.removeLifecycleEventListener(this.lifecycleListener);
        }
    }

    public final void setAnalyticsListener(@NotNull Function1<? super MediaPlayFinishedAnalytics, Unit> onMediaPlayFinishedAnalytics) {
        Intrinsics.checkNotNullParameter(onMediaPlayFinishedAnalytics, "onMediaPlayFinishedAnalytics");
        this.onMediaPlayFinishedAnalytics = onMediaPlayFinishedAnalytics;
    }

    public final void setImagePreviewScaleType(@NotNull ScalingUtils$ScaleType scaleType) {
        Intrinsics.checkNotNullParameter(scaleType, "scaleType");
        ((GenericDraweeHierarchy) this.binding.inlineMediaImagePreview.getHierarchy()).j(scaleType);
    }

    /* JADX WARN: Code restructure failed: missing block: B:231:0x0339, code lost:
    
        if (r27.mediaPlayerView != null) goto L195;
     */
    /* JADX WARN: Removed duplicated region for block: B:102:0x01f4  */
    /* JADX WARN: Removed duplicated region for block: B:110:0x020f A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:118:0x0243  */
    /* JADX WARN: Removed duplicated region for block: B:128:0x0265  */
    /* JADX WARN: Removed duplicated region for block: B:131:0x0285  */
    /* JADX WARN: Removed duplicated region for block: B:134:0x02a2 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:141:0x02c1  */
    /* JADX WARN: Removed duplicated region for block: B:145:0x02ce A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:150:0x02e2  */
    /* JADX WARN: Removed duplicated region for block: B:152:0x0310  */
    /* JADX WARN: Removed duplicated region for block: B:158:0x0321 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:161:0x0328  */
    /* JADX WARN: Removed duplicated region for block: B:165:0x0349  */
    /* JADX WARN: Removed duplicated region for block: B:184:0x0379 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:191:0x038d  */
    /* JADX WARN: Removed duplicated region for block: B:205:0x03b7  */
    /* JADX WARN: Removed duplicated region for block: B:210:0x03c4  */
    /* JADX WARN: Removed duplicated region for block: B:218:0x03db  */
    /* JADX WARN: Removed duplicated region for block: B:228:0x032f  */
    /* JADX WARN: Removed duplicated region for block: B:238:0x02e7  */
    /* JADX WARN: Removed duplicated region for block: B:246:0x0288  */
    /* JADX WARN: Removed duplicated region for block: B:247:0x0268  */
    /* JADX WARN: Removed duplicated region for block: B:249:0x0228 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:256:0x01d7  */
    /* JADX WARN: Removed duplicated region for block: B:258:0x012d  */
    /* JADX WARN: Removed duplicated region for block: B:260:0x00f3  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x00ec  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x012b  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x0136  */
    /* JADX WARN: Removed duplicated region for block: B:90:0x01ce  */
    /* JADX WARN: Removed duplicated region for block: B:95:0x01df  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void setMediaData(MediaSource mediaSource, boolean mediaViewDetached, boolean mediaViewScrolling, boolean mediaViewFocused, MediaPlayer.Event mediaPlaybackState, boolean mediaVolumeOn, Integer mediaOrientation, PortalFromNativeContextManager.Event mediaPortalEvent, int mediaInlineMediaOwnerGeneration, boolean mediaCanPlayInline, boolean mediaPlayThirdParty, boolean mediaHidePlayButton, int mediaThumbnailFadeDuration, @NotNull Function0<Unit> mediaOnPlayCallback, String overlayTagText, ReactAsset overlayTagIcon, Integer overlayTagBackgroundColor, Integer overlayTagTextColor, @NotNull MediaPlayer.PlayerSettings playerSettings, ScalingUtils$ScaleType imagePreviewScaleType) {
        int i5;
        Integer num;
        boolean areEqual;
        boolean areEqual2;
        Boolean isMediaViewBeingPortaled;
        boolean mediaInlinePlaybackAllowed;
        boolean z5;
        boolean z6;
        int i6;
        boolean z7;
        MediaPlayerView mediaPlayerView;
        boolean z8;
        boolean z10;
        MediaPlayerView mediaPlayerView2;
        View view;
        Intrinsics.checkNotNullParameter(mediaOnPlayCallback, "mediaOnPlayCallback");
        Intrinsics.checkNotNullParameter(playerSettings, "playerSettings");
        if (Intrinsics.areEqual(this.mediaSource, mediaSource) && this.mediaViewDetached == mediaViewDetached && this.mediaViewScrolling == mediaViewScrolling && this.mediaViewFocused == mediaViewFocused && Intrinsics.areEqual(this.mediaPlaybackState, mediaPlaybackState) && this.mediaVolumeOn == mediaVolumeOn && Intrinsics.areEqual(this.mediaOrientation, mediaOrientation) && Intrinsics.areEqual(this.mediaPortalEvent, mediaPortalEvent) && this.mediaInlineMediaOwnerGeneration == mediaInlineMediaOwnerGeneration && this.mediaCanPlayInline == mediaCanPlayInline && this.mediaPlayThirdParty == mediaPlayThirdParty && this.mediaHidePlayButton == mediaHidePlayButton) {
            i5 = mediaThumbnailFadeDuration;
            if (this.mediaThumbnailFadeDuration == i5 && Intrinsics.areEqual(this.mediaOnPlayCallback, mediaOnPlayCallback) && Intrinsics.areEqual(this.overlayTagText, overlayTagText) && this.overlayTagIcon == overlayTagIcon && Intrinsics.areEqual(this.overlayTagBackgroundColor, overlayTagBackgroundColor)) {
                num = overlayTagTextColor;
                if (Intrinsics.areEqual(this.overlayTagTextColor, num) && Intrinsics.areEqual(this.playerSettings, playerSettings)) {
                    return;
                }
                areEqual = Intrinsics.areEqual(this.mediaSource, mediaSource);
                areEqual2 = Intrinsics.areEqual(this.mediaOrientation, mediaOrientation);
                this.mediaSource = mediaSource;
                this.mediaViewDetached = mediaViewDetached;
                this.mediaViewScrolling = mediaViewScrolling;
                this.mediaViewFocused = mediaViewFocused;
                this.mediaPlaybackState = mediaPlaybackState;
                this.mediaOrientation = mediaOrientation;
                this.mediaVolumeOn = mediaVolumeOn;
                this.mediaPortalEvent = mediaPortalEvent;
                this.mediaInlineMediaOwnerGeneration = mediaInlineMediaOwnerGeneration;
                this.mediaCanPlayInline = mediaCanPlayInline;
                this.mediaPlayThirdParty = mediaPlayThirdParty;
                this.mediaHidePlayButton = mediaHidePlayButton;
                this.mediaThumbnailFadeDuration = i5;
                this.mediaOnPlayCallback = mediaOnPlayCallback;
                this.overlayTagText = overlayTagText;
                this.overlayTagIcon = overlayTagIcon;
                this.overlayTagBackgroundColor = overlayTagBackgroundColor;
                this.overlayTagTextColor = num;
                this.playerSettings = playerSettings;
                isMediaViewBeingPortaled = PortalFromNativeContextManager.INSTANCE.isMediaViewBeingPortaled(mediaSource == null ? mediaSource.getPortal() : null);
                mediaInlinePlaybackAllowed = mediaInlinePlaybackAllowed();
                if (!areEqual2 && !Intrinsics.areEqual(isMediaViewBeingPortaled, Boolean.TRUE)) {
                    releasePlayer();
                }
                boolean z11 = !Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.BufferStart.INSTANCE) && (mediaSource == null || !mediaSource.getIsGifv());
                ProgressBar inlineMediaLoadingIndicator = this.binding.inlineMediaLoadingIndicator;
                z5 = z11;
                Intrinsics.checkNotNullExpressionValue(inlineMediaLoadingIndicator, "inlineMediaLoadingIndicator");
                inlineMediaLoadingIndicator.setVisibility(!z5 ? 0 : 8);
                if (!areEqual) {
                    GenericDraweeHierarchy genericDraweeHierarchy = (GenericDraweeHierarchy) this.binding.inlineMediaImagePreview.getHierarchy();
                    genericDraweeHierarchy.l(i5);
                    if (imagePreviewScaleType != null) {
                        genericDraweeHierarchy.j(imagePreviewScaleType);
                    }
                    SimpleDraweeView inlineMediaImagePreview = this.binding.inlineMediaImagePreview;
                    Intrinsics.checkNotNullExpressionValue(inlineMediaImagePreview, "inlineMediaImagePreview");
                    Boolean valueOf = mediaSource != null ? Boolean.valueOf(mediaSource.getShouldAutoPlay()) : null;
                    Boolean srcIsAnimated = mediaSource != null ? mediaSource.getSrcIsAnimated() : null;
                    String previewUrl = mediaSource != null ? mediaSource.getPreviewUrl() : null;
                    SimpleDraweeView inlineMediaImagePreview2 = this.binding.inlineMediaImagePreview;
                    Intrinsics.checkNotNullExpressionValue(inlineMediaImagePreview2, "inlineMediaImagePreview");
                    SetOptionalImageUrlKt.setOptionalImageUrl$default(inlineMediaImagePreview, previewUrl, valueOf, srcIsAnimated, GetMediaImagePlaceholderStatesListenerKt.getMediaImagePlaceholderStatesListener(inlineMediaImagePreview2, mediaSource != null ? mediaSource.getPlaceholder() : null, mediaSource != null ? mediaSource.getPlaceholderVersion() : null), null, null, 48, null);
                }
                SimpleDraweeView inlineMediaImagePreview3 = this.binding.inlineMediaImagePreview;
                Intrinsics.checkNotNullExpressionValue(inlineMediaImagePreview3, "inlineMediaImagePreview");
                inlineMediaImagePreview3.setVisibility((mediaInlinePlaybackAllowed || !(Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.StartedPlaying.INSTANCE) || Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.Paused.INSTANCE))) ? 0 : 8);
                SimpleDraweeView inlineMediaGifIndicator = this.binding.inlineMediaGifIndicator;
                Intrinsics.checkNotNullExpressionValue(inlineMediaGifIndicator, "inlineMediaGifIndicator");
                if (mediaSource == null) {
                    z6 = true;
                    if (getShouldShowGifIndicator(mediaSource)) {
                        i6 = 0;
                        inlineMediaGifIndicator.setVisibility(i6);
                        boolean z12 = mediaSource == null && mediaSource.getIsVideo() && ((mediaSource == null && mediaSource.getIsValid() == z6 && !z5 && !Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.StartedPlaying.INSTANCE)) || mediaPlayThirdParty) && !mediaHidePlayButton;
                        SimpleDraweeView inlineMediaPlayButton = this.binding.inlineMediaPlayButton;
                        Intrinsics.checkNotNullExpressionValue(inlineMediaPlayButton, "inlineMediaPlayButton");
                        inlineMediaPlayButton.setVisibility((z12 || !mediaInlinePlaybackAllowed) ? 8 : 0);
                        SimpleDraweeView inlineMediaPlayButton2 = this.binding.inlineMediaPlayButton;
                        Intrinsics.checkNotNullExpressionValue(inlineMediaPlayButton2, "inlineMediaPlayButton");
                        NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(inlineMediaPlayButton2, false, (!this.mediaCanPlayInline || mediaPlayThirdParty || mediaSource == null) ? null : new com.discord.chat.presentation.list.delegate.b(2, this), 1, null);
                        SimpleDraweeView inlineMediaVolumeToggle = this.binding.inlineMediaVolumeToggle;
                        Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle, "inlineMediaVolumeToggle");
                        inlineMediaVolumeToggle.setVisibility((mediaSource == null && mediaSource.getIsVideo() && mediaSource.getIsValid() && mediaPlaybackState != null && mediaCanPlayInline && mediaInlinePlaybackAllowed) ? 0 : 8);
                        SimpleDraweeView inlineMediaVolumeToggle2 = this.binding.inlineMediaVolumeToggle;
                        Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle2, "inlineMediaVolumeToggle");
                        ReactAssetUtilsKt.setReactAsset(inlineMediaVolumeToggle2, !mediaVolumeOn ? ReactAsset.VoiceNormalIcon : ReactAsset.VoiceXIcon);
                        SimpleDraweeView inlineMediaVolumeToggle3 = this.binding.inlineMediaVolumeToggle;
                        Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle3, "inlineMediaVolumeToggle");
                        ColorUtilsKt.setTintColor(inlineMediaVolumeToggle3, (Integer) (-1));
                        SimpleDraweeView inlineMediaVolumeToggle4 = this.binding.inlineMediaVolumeToggle;
                        Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle4, "inlineMediaVolumeToggle");
                        I18nUtilsKt.i18nContentDescription$default(inlineMediaVolumeToggle4, !mediaVolumeOn ? I18nMessage.SOUND_MUTE : I18nMessage.SOUND_UNMUTE, (Function1) null, 2, (Object) null);
                        SimpleDraweeView inlineMediaVolumeToggle5 = this.binding.inlineMediaVolumeToggle;
                        Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle5, "inlineMediaVolumeToggle");
                        NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(inlineMediaVolumeToggle5, false, new t(this, mediaVolumeOn, mediaSource), 1, null);
                        setupTag((z12 || overlayTagText == null || overlayTagText.length() == 0) ? false : true, overlayTagText, overlayTagIcon, overlayTagBackgroundColor, num);
                        boolean areEqual3 = Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.PlaybackEnded.INSTANCE);
                        z7 = !areEqual3 && Intrinsics.areEqual(isMediaViewBeingPortaled, Boolean.TRUE);
                        boolean z13 = !areEqual3 || ((mediaViewDetached || !mediaCanPlayInline) && !Intrinsics.areEqual(isMediaViewBeingPortaled, Boolean.TRUE)) || !areEqual;
                        if (!z7) {
                            togglePortalControl(false);
                        } else if (z13) {
                            releasePlayer();
                            setMediaData$default(this, null, false, false, false, null, false, null, null, 0, false, false, false, 0, null, null, null, null, null, null, null, 1048559, null);
                            return;
                        }
                        boolean z14 = mediaSource == null && !Intrinsics.areEqual(isMediaViewBeingPortaled, Boolean.FALSE) && mediaInlinePlaybackAllowed;
                        mediaPlayerView = this.mediaPlayerView;
                        if (mediaPlayerView != null && !z14) {
                            this.mediaSurfaceNeedsReattach = true;
                        }
                        if (mediaPlayerView != null) {
                            mediaPlayerView.setVisible(z14);
                        }
                        if (isMediaViewBeingPortaled != null) {
                            if (!Intrinsics.areEqual(isMediaViewBeingPortaled, Boolean.TRUE)) {
                                if (!Intrinsics.areEqual(isMediaViewBeingPortaled, Boolean.FALSE)) {
                                    throw new fo.n();
                                }
                            }
                            z8 = false;
                            if (mediaSource == null && mediaSource.getShouldAutoPlay() && !mediaViewDetached && !mediaViewScrolling && z8 && mediaInlinePlaybackAllowed) {
                                if (mediaPlaybackState == null) {
                                    Intrinsics.checkNotNull(mediaSource);
                                    prepareMediaPlayer(mediaSource, true);
                                    return;
                                } else {
                                    if (Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.StartedPlaying.INSTANCE)) {
                                        return;
                                    }
                                    if (this.mediaSurfaceNeedsReattach) {
                                        playAfterReattachingSurface();
                                        return;
                                    } else {
                                        play();
                                        return;
                                    }
                                }
                            }
                            z10 = (mediaViewDetached && mediaViewFocused && !Intrinsics.areEqual(isMediaViewBeingPortaled, Boolean.FALSE) && mediaInlinePlaybackAllowed) ? false : true;
                            mediaPlayerView2 = this.mediaPlayerView;
                            if (mediaPlayerView2 != null && (view = mediaPlayerView2.getView()) != null) {
                                view.setKeepScreenOn((Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.StartedPlaying.INSTANCE) || z10 || ((mediaSource == null || !mediaSource.getIsVideo()) && !Intrinsics.areEqual(isMediaViewBeingPortaled, Boolean.TRUE))) ? false : true);
                            }
                            if (z10 && this.mediaShouldResume) {
                                this.mediaShouldResume = false;
                                playAfterReattachingSurface();
                                return;
                            }
                            if (z10) {
                                pause();
                                if (!Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.StartedPlaying.INSTANCE) || Intrinsics.areEqual(isMediaViewBeingPortaled, Boolean.FALSE)) {
                                    return;
                                }
                                this.mediaShouldResume = true;
                                return;
                            }
                            if (Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.StartedPlaying.INSTANCE)) {
                                play();
                                return;
                            } else {
                                if (Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.Paused.INSTANCE)) {
                                    pause();
                                    return;
                                }
                                return;
                            }
                        }
                        z8 = true;
                        if (mediaSource == null) {
                        }
                        if (mediaViewDetached) {
                        }
                        mediaPlayerView2 = this.mediaPlayerView;
                        if (mediaPlayerView2 != null) {
                            view.setKeepScreenOn((Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.StartedPlaying.INSTANCE) || z10 || ((mediaSource == null || !mediaSource.getIsVideo()) && !Intrinsics.areEqual(isMediaViewBeingPortaled, Boolean.TRUE))) ? false : true);
                        }
                        if (z10) {
                        }
                        if (z10) {
                        }
                    }
                } else {
                    z6 = true;
                }
                i6 = 8;
                inlineMediaGifIndicator.setVisibility(i6);
                if (mediaSource == null) {
                }
                SimpleDraweeView inlineMediaPlayButton3 = this.binding.inlineMediaPlayButton;
                Intrinsics.checkNotNullExpressionValue(inlineMediaPlayButton3, "inlineMediaPlayButton");
                inlineMediaPlayButton3.setVisibility((z12 || !mediaInlinePlaybackAllowed) ? 8 : 0);
                SimpleDraweeView inlineMediaPlayButton22 = this.binding.inlineMediaPlayButton;
                Intrinsics.checkNotNullExpressionValue(inlineMediaPlayButton22, "inlineMediaPlayButton");
                if (!this.mediaCanPlayInline) {
                    NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(inlineMediaPlayButton22, false, (!this.mediaCanPlayInline || mediaPlayThirdParty || mediaSource == null) ? null : new com.discord.chat.presentation.list.delegate.b(2, this), 1, null);
                    SimpleDraweeView inlineMediaVolumeToggle6 = this.binding.inlineMediaVolumeToggle;
                    Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle6, "inlineMediaVolumeToggle");
                    inlineMediaVolumeToggle6.setVisibility((mediaSource == null && mediaSource.getIsVideo() && mediaSource.getIsValid() && mediaPlaybackState != null && mediaCanPlayInline && mediaInlinePlaybackAllowed) ? 0 : 8);
                    SimpleDraweeView inlineMediaVolumeToggle22 = this.binding.inlineMediaVolumeToggle;
                    Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle22, "inlineMediaVolumeToggle");
                    ReactAssetUtilsKt.setReactAsset(inlineMediaVolumeToggle22, !mediaVolumeOn ? ReactAsset.VoiceNormalIcon : ReactAsset.VoiceXIcon);
                    SimpleDraweeView inlineMediaVolumeToggle32 = this.binding.inlineMediaVolumeToggle;
                    Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle32, "inlineMediaVolumeToggle");
                    ColorUtilsKt.setTintColor(inlineMediaVolumeToggle32, (Integer) (-1));
                    SimpleDraweeView inlineMediaVolumeToggle42 = this.binding.inlineMediaVolumeToggle;
                    Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle42, "inlineMediaVolumeToggle");
                    I18nUtilsKt.i18nContentDescription$default(inlineMediaVolumeToggle42, !mediaVolumeOn ? I18nMessage.SOUND_MUTE : I18nMessage.SOUND_UNMUTE, (Function1) null, 2, (Object) null);
                    SimpleDraweeView inlineMediaVolumeToggle52 = this.binding.inlineMediaVolumeToggle;
                    Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle52, "inlineMediaVolumeToggle");
                    NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(inlineMediaVolumeToggle52, false, new t(this, mediaVolumeOn, mediaSource), 1, null);
                    setupTag((z12 || overlayTagText == null || overlayTagText.length() == 0) ? false : true, overlayTagText, overlayTagIcon, overlayTagBackgroundColor, num);
                    boolean areEqual32 = Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.PlaybackEnded.INSTANCE);
                    if (areEqual32) {
                    }
                    if (areEqual32) {
                    }
                    if (!z7) {
                    }
                    if (mediaSource == null) {
                    }
                    mediaPlayerView = this.mediaPlayerView;
                    if (mediaPlayerView != null) {
                        this.mediaSurfaceNeedsReattach = true;
                    }
                    if (mediaPlayerView != null) {
                    }
                    if (isMediaViewBeingPortaled != null) {
                    }
                    z8 = true;
                    if (mediaSource == null) {
                    }
                    if (mediaViewDetached) {
                    }
                    mediaPlayerView2 = this.mediaPlayerView;
                    if (mediaPlayerView2 != null) {
                    }
                    if (z10) {
                    }
                    if (z10) {
                    }
                }
                NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(inlineMediaPlayButton22, false, (!this.mediaCanPlayInline || mediaPlayThirdParty || mediaSource == null) ? null : new com.discord.chat.presentation.list.delegate.b(2, this), 1, null);
                SimpleDraweeView inlineMediaVolumeToggle62 = this.binding.inlineMediaVolumeToggle;
                Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle62, "inlineMediaVolumeToggle");
                inlineMediaVolumeToggle62.setVisibility((mediaSource == null && mediaSource.getIsVideo() && mediaSource.getIsValid() && mediaPlaybackState != null && mediaCanPlayInline && mediaInlinePlaybackAllowed) ? 0 : 8);
                SimpleDraweeView inlineMediaVolumeToggle222 = this.binding.inlineMediaVolumeToggle;
                Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle222, "inlineMediaVolumeToggle");
                ReactAssetUtilsKt.setReactAsset(inlineMediaVolumeToggle222, !mediaVolumeOn ? ReactAsset.VoiceNormalIcon : ReactAsset.VoiceXIcon);
                SimpleDraweeView inlineMediaVolumeToggle322 = this.binding.inlineMediaVolumeToggle;
                Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle322, "inlineMediaVolumeToggle");
                ColorUtilsKt.setTintColor(inlineMediaVolumeToggle322, (Integer) (-1));
                SimpleDraweeView inlineMediaVolumeToggle422 = this.binding.inlineMediaVolumeToggle;
                Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle422, "inlineMediaVolumeToggle");
                I18nUtilsKt.i18nContentDescription$default(inlineMediaVolumeToggle422, !mediaVolumeOn ? I18nMessage.SOUND_MUTE : I18nMessage.SOUND_UNMUTE, (Function1) null, 2, (Object) null);
                SimpleDraweeView inlineMediaVolumeToggle522 = this.binding.inlineMediaVolumeToggle;
                Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle522, "inlineMediaVolumeToggle");
                NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(inlineMediaVolumeToggle522, false, new t(this, mediaVolumeOn, mediaSource), 1, null);
                setupTag((z12 || overlayTagText == null || overlayTagText.length() == 0) ? false : true, overlayTagText, overlayTagIcon, overlayTagBackgroundColor, num);
                boolean areEqual322 = Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.PlaybackEnded.INSTANCE);
                if (areEqual322) {
                }
                if (areEqual322) {
                }
                if (!z7) {
                }
                if (mediaSource == null) {
                }
                mediaPlayerView = this.mediaPlayerView;
                if (mediaPlayerView != null) {
                }
                if (mediaPlayerView != null) {
                }
                if (isMediaViewBeingPortaled != null) {
                }
                z8 = true;
                if (mediaSource == null) {
                }
                if (mediaViewDetached) {
                }
                mediaPlayerView2 = this.mediaPlayerView;
                if (mediaPlayerView2 != null) {
                }
                if (z10) {
                }
                if (z10) {
                }
            }
        } else {
            i5 = mediaThumbnailFadeDuration;
        }
        num = overlayTagTextColor;
        areEqual = Intrinsics.areEqual(this.mediaSource, mediaSource);
        areEqual2 = Intrinsics.areEqual(this.mediaOrientation, mediaOrientation);
        this.mediaSource = mediaSource;
        this.mediaViewDetached = mediaViewDetached;
        this.mediaViewScrolling = mediaViewScrolling;
        this.mediaViewFocused = mediaViewFocused;
        this.mediaPlaybackState = mediaPlaybackState;
        this.mediaOrientation = mediaOrientation;
        this.mediaVolumeOn = mediaVolumeOn;
        this.mediaPortalEvent = mediaPortalEvent;
        this.mediaInlineMediaOwnerGeneration = mediaInlineMediaOwnerGeneration;
        this.mediaCanPlayInline = mediaCanPlayInline;
        this.mediaPlayThirdParty = mediaPlayThirdParty;
        this.mediaHidePlayButton = mediaHidePlayButton;
        this.mediaThumbnailFadeDuration = i5;
        this.mediaOnPlayCallback = mediaOnPlayCallback;
        this.overlayTagText = overlayTagText;
        this.overlayTagIcon = overlayTagIcon;
        this.overlayTagBackgroundColor = overlayTagBackgroundColor;
        this.overlayTagTextColor = num;
        this.playerSettings = playerSettings;
        isMediaViewBeingPortaled = PortalFromNativeContextManager.INSTANCE.isMediaViewBeingPortaled(mediaSource == null ? mediaSource.getPortal() : null);
        mediaInlinePlaybackAllowed = mediaInlinePlaybackAllowed();
        if (!areEqual2) {
            releasePlayer();
        }
        if (Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.BufferStart.INSTANCE)) {
        }
        ProgressBar inlineMediaLoadingIndicator2 = this.binding.inlineMediaLoadingIndicator;
        z5 = z11;
        Intrinsics.checkNotNullExpressionValue(inlineMediaLoadingIndicator2, "inlineMediaLoadingIndicator");
        inlineMediaLoadingIndicator2.setVisibility(!z5 ? 0 : 8);
        if (!areEqual) {
        }
        SimpleDraweeView inlineMediaImagePreview32 = this.binding.inlineMediaImagePreview;
        Intrinsics.checkNotNullExpressionValue(inlineMediaImagePreview32, "inlineMediaImagePreview");
        inlineMediaImagePreview32.setVisibility((mediaInlinePlaybackAllowed || !(Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.StartedPlaying.INSTANCE) || Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.Paused.INSTANCE))) ? 0 : 8);
        SimpleDraweeView inlineMediaGifIndicator2 = this.binding.inlineMediaGifIndicator;
        Intrinsics.checkNotNullExpressionValue(inlineMediaGifIndicator2, "inlineMediaGifIndicator");
        if (mediaSource == null) {
        }
        i6 = 8;
        inlineMediaGifIndicator2.setVisibility(i6);
        if (mediaSource == null) {
        }
        SimpleDraweeView inlineMediaPlayButton32 = this.binding.inlineMediaPlayButton;
        Intrinsics.checkNotNullExpressionValue(inlineMediaPlayButton32, "inlineMediaPlayButton");
        inlineMediaPlayButton32.setVisibility((z12 || !mediaInlinePlaybackAllowed) ? 8 : 0);
        SimpleDraweeView inlineMediaPlayButton222 = this.binding.inlineMediaPlayButton;
        Intrinsics.checkNotNullExpressionValue(inlineMediaPlayButton222, "inlineMediaPlayButton");
        NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(inlineMediaPlayButton222, false, (!this.mediaCanPlayInline || mediaPlayThirdParty || mediaSource == null) ? null : new com.discord.chat.presentation.list.delegate.b(2, this), 1, null);
        SimpleDraweeView inlineMediaVolumeToggle622 = this.binding.inlineMediaVolumeToggle;
        Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle622, "inlineMediaVolumeToggle");
        inlineMediaVolumeToggle622.setVisibility((mediaSource == null && mediaSource.getIsVideo() && mediaSource.getIsValid() && mediaPlaybackState != null && mediaCanPlayInline && mediaInlinePlaybackAllowed) ? 0 : 8);
        SimpleDraweeView inlineMediaVolumeToggle2222 = this.binding.inlineMediaVolumeToggle;
        Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle2222, "inlineMediaVolumeToggle");
        ReactAssetUtilsKt.setReactAsset(inlineMediaVolumeToggle2222, !mediaVolumeOn ? ReactAsset.VoiceNormalIcon : ReactAsset.VoiceXIcon);
        SimpleDraweeView inlineMediaVolumeToggle3222 = this.binding.inlineMediaVolumeToggle;
        Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle3222, "inlineMediaVolumeToggle");
        ColorUtilsKt.setTintColor(inlineMediaVolumeToggle3222, (Integer) (-1));
        SimpleDraweeView inlineMediaVolumeToggle4222 = this.binding.inlineMediaVolumeToggle;
        Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle4222, "inlineMediaVolumeToggle");
        I18nUtilsKt.i18nContentDescription$default(inlineMediaVolumeToggle4222, !mediaVolumeOn ? I18nMessage.SOUND_MUTE : I18nMessage.SOUND_UNMUTE, (Function1) null, 2, (Object) null);
        SimpleDraweeView inlineMediaVolumeToggle5222 = this.binding.inlineMediaVolumeToggle;
        Intrinsics.checkNotNullExpressionValue(inlineMediaVolumeToggle5222, "inlineMediaVolumeToggle");
        NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(inlineMediaVolumeToggle5222, false, new t(this, mediaVolumeOn, mediaSource), 1, null);
        setupTag((z12 || overlayTagText == null || overlayTagText.length() == 0) ? false : true, overlayTagText, overlayTagIcon, overlayTagBackgroundColor, num);
        boolean areEqual3222 = Intrinsics.areEqual(mediaPlaybackState, MediaPlayer.Event.PlaybackEnded.INSTANCE);
        if (areEqual3222) {
        }
        if (areEqual3222) {
        }
        if (!z7) {
        }
        if (mediaSource == null) {
        }
        mediaPlayerView = this.mediaPlayerView;
        if (mediaPlayerView != null) {
        }
        if (mediaPlayerView != null) {
        }
        if (isMediaViewBeingPortaled != null) {
        }
        z8 = true;
        if (mediaSource == null) {
        }
        if (mediaViewDetached) {
        }
        mediaPlayerView2 = this.mediaPlayerView;
        if (mediaPlayerView2 != null) {
        }
        if (z10) {
        }
        if (z10) {
        }
    }

    public final void setOnMediaClickListeners(View.OnClickListener onClickListener, View.OnLongClickListener onLongClickListener) {
        NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(this, false, onClickListener != null ? new com.discord.chat.presentation.message.u(4, this, onClickListener) : null, 1, null);
        NestedScrollOnTouchUtilsKt.setOnLongClickListenerNested$default(this, false, onLongClickListener, 1, null);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public MediaView(@NotNull Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0, 4, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    public /* synthetic */ MediaView(Context context, AttributeSet attributeSet, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i6 & 2) != 0 ? null : attributeSet, (i6 & 4) != 0 ? 0 : i5);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Type inference failed for: r2v1, types: [com.discord.chat.presentation.message.view.MediaView$lifecycleListener$1] */
    public MediaView(@NotNull Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        Intrinsics.checkNotNullParameter(context, "context");
        MediaViewBinding inflate = MediaViewBinding.inflate(LayoutInflater.from(context), this);
        Intrinsics.checkNotNullExpressionValue(inflate, "inflate(...)");
        this.binding = inflate;
        this.mediaViewFocused = true;
        this.mediaViewDetached = true;
        this.mediaCanPlayInline = true;
        this.mediaThumbnailFadeDuration = getResources().getInteger(com.discord.image.fresco.R.integer.image_fade_duration);
        this.mediaOnPlayCallback = new com.discord.chat.presentation.list.a(19);
        this.onMediaPlayFinishedAnalytics = new com.discord.chat.presentation.list.delegate.a(20);
        this.playerSettings = MediaPlayer.INSTANCE.getDefaultSettings();
        ThemedReactContext themedReactContext = (ThemedReactContext) (!(context instanceof ThemedReactContext) ? null : context);
        this.managerModule = themedReactContext != null ? (MediaPlayerManagerModule) themedReactContext.getNativeModule(MediaPlayerManagerModule.class) : null;
        ViewAttachedListener viewAttachedListener = new ViewAttachedListener(this, new r(this, 0), new r(this, 1));
        this.attachStateChangeListener = viewAttachedListener;
        this.lifecycleListener = new LifecycleEventListener() { // from class: com.discord.chat.presentation.message.view.MediaView$lifecycleListener$1
            @Override // com.facebook.react.bridge.LifecycleEventListener
            public void onHostDestroy() {
            }

            @Override // com.facebook.react.bridge.LifecycleEventListener
            public void onHostPause() {
                MediaView.setMediaData$default(MediaView.this, null, false, false, false, null, false, null, null, 0, false, false, false, 0, null, null, null, null, null, null, null, 1048567, null);
            }

            @Override // com.facebook.react.bridge.LifecycleEventListener
            public void onHostResume() {
                MediaView.setMediaData$default(MediaView.this, null, false, false, true, null, false, null, null, 0, false, false, false, 0, null, null, null, null, null, null, null, 1048567, null);
            }
        };
        addOnAttachStateChangeListener(viewAttachedListener);
        SimpleDraweeView simpleDraweeView = inflate.inlineMediaPlayButton;
        Intrinsics.checkNotNull(simpleDraweeView);
        ViewBackgroundUtilsKt.setBackgroundOval$default(simpleDraweeView, -16777216, 0, 2, null);
        ReactAssetUtilsKt.setReactAsset(simpleDraweeView, ReactAsset.PlayIcon);
        ColorUtilsKt.setTintColor(simpleDraweeView, (Integer) (-1));
        I18nUtilsKt.i18nContentDescription$default(simpleDraweeView, I18nMessage.PLAY_FULL_VIDEO, (Function1) null, 2, (Object) null);
        SimpleDraweeView inlineMediaGifIndicator = inflate.inlineMediaGifIndicator;
        Intrinsics.checkNotNullExpressionValue(inlineMediaGifIndicator, "inlineMediaGifIndicator");
        ReactAssetUtilsKt.setReactAsset(inlineMediaGifIndicator, ReactAsset.GifIcon);
        SimpleDraweeView simpleDraweeView2 = inflate.inlineMediaImagePreview;
        ((GenericDraweeHierarchy) simpleDraweeView2.getHierarchy()).k(new ColorDrawable(ThemeManagerKt.getTheme().getBackgroundModNormal()), 1);
        ((GenericDraweeHierarchy) simpleDraweeView2.getHierarchy()).j(com.facebook.drawee.drawable.o.f4473f);
        GenericDraweeHierarchy genericDraweeHierarchy = (GenericDraweeHierarchy) simpleDraweeView2.getHierarchy();
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setShape(0);
        gradientDrawable.setStroke(simpleDraweeView2.getResources().getDimensionPixelSize(com.discord.chat.R.dimen.message_media_view_stroke), ColorUtilsKt.getColorCompat(context, com.discord.chat.R.color.chat_media_view_stroke));
        genericDraweeHierarchy.n(gradientDrawable);
    }
}
