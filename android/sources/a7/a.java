package a7;

import aa.d;
import android.webkit.CookieManager;
import com.discord.audio.AndroidAudioDevice;
import com.discord.bundle_updater.AppManifest;
import com.discord.bundle_updater.BuildOverrideCookieMeta;
import com.discord.chat.bridge.botuikit.ActionRowComponent;
import com.discord.chat.bridge.botuikit.ChannelSelectComponent;
import com.discord.chat.bridge.botuikit.CheckpointDataV2026;
import com.discord.chat.bridge.botuikit.ContainerComponent;
import com.discord.chat.bridge.botuikit.ContentInventoryEntry;
import com.discord.chat.bridge.botuikit.MediaGalleryDisplayComponent;
import com.discord.chat.bridge.botuikit.MentionableSelectComponent;
import com.discord.chat.bridge.botuikit.RoleSelectComponent;
import com.discord.chat.bridge.botuikit.SearchableSelectComponent;
import com.discord.chat.bridge.botuikit.SectionComponent;
import com.discord.chat.bridge.botuikit.SelectComponent;
import com.discord.chat.bridge.botuikit.SelectItem;
import com.discord.chat.bridge.botuikit.StringSelectComponent;
import com.discord.media_player.reactevents.MediaPlayerViewDidDisappear;
import com.discord.media_player.reactevents.MediaPlayerViewWillAppear;
import com.discord.metric_monitor.MetricEvent;
import com.facebook.react.internal.featureflags.ReactNativeFeatureFlags;
import com.facebook.react.internal.featureflags.ReactNativeFeatureFlagsAccessor;
import com.facebook.react.internal.featureflags.ReactNativeFeatureFlagsCxxAccessor;
import com.facebook.react.internal.featureflags.ReactNativeFeatureFlagsForTests;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlinx.serialization.KSerializer;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f241d;

    public /* synthetic */ a(int i5) {
        this.f241d = i5;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        KSerializer _childSerializers$_anonymous_;
        KSerializer _childSerializers$_anonymous_2;
        ReactNativeFeatureFlagsCxxAccessor accessorProvider$lambda$0;
        ReactNativeFeatureFlagsAccessor up$lambda$0;
        KSerializer _childSerializers$_anonymous_3;
        KSerializer _childSerializers$_anonymous_4;
        Unit unit;
        KSerializer _childSerializers$_anonymous_5;
        KSerializer _childSerializers$_anonymous_$0;
        KSerializer _childSerializers$_anonymous_6;
        KSerializer _childSerializers$_anonymous_$02;
        KSerializer _childSerializers$_anonymous_$1;
        CookieManager cookieManager;
        KSerializer _childSerializers$_anonymous_7;
        KSerializer _childSerializers$_anonymous_8;
        KSerializer _childSerializers$_anonymous_$03;
        KSerializer _childSerializers$_anonymous_9;
        KSerializer _childSerializers$_anonymous_10;
        KSerializer _childSerializers$_anonymous_11;
        KSerializer _childSerializers$_anonymous_$04;
        KSerializer _childSerializers$_anonymous_12;
        KSerializer _childSerializers$_anonymous_13;
        KSerializer _childSerializers$_anonymous_14;
        KSerializer _init_$_anonymous_;
        KSerializer _childSerializers$_anonymous_15;
        KSerializer _init_$_anonymous_2;
        KSerializer _init_$_anonymous_3;
        KSerializer _childSerializers$_anonymous_16;
        KSerializer _childSerializers$_anonymous_$12;
        switch (this.f241d) {
            case 0:
                _childSerializers$_anonymous_ = MediaPlayerViewDidDisappear._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_;
            case 1:
                _childSerializers$_anonymous_2 = MediaPlayerViewWillAppear._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_2;
            case 2:
                return new d();
            case 3:
                accessorProvider$lambda$0 = ReactNativeFeatureFlags.accessorProvider$lambda$0();
                return accessorProvider$lambda$0;
            case 4:
                up$lambda$0 = ReactNativeFeatureFlagsForTests.setUp$lambda$0();
                return up$lambda$0;
            case 5:
                _childSerializers$_anonymous_3 = MetricEvent._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_3;
            case 6:
                _childSerializers$_anonymous_4 = AndroidAudioDevice._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_4;
            case 7:
                unit = Unit.a;
                return unit;
            case 8:
                _childSerializers$_anonymous_5 = AppManifest._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_5;
            case 9:
                _childSerializers$_anonymous_$0 = AppManifest._childSerializers$_anonymous_$0();
                return _childSerializers$_anonymous_$0;
            case 10:
                _childSerializers$_anonymous_6 = BuildOverrideCookieMeta._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_6;
            case 11:
                _childSerializers$_anonymous_$02 = BuildOverrideCookieMeta._childSerializers$_anonymous_$0();
                return _childSerializers$_anonymous_$02;
            case 12:
                _childSerializers$_anonymous_$1 = BuildOverrideCookieMeta._childSerializers$_anonymous_$1();
                return _childSerializers$_anonymous_$1;
            case 13:
                cookieManager = CookieManager.getInstance();
                return cookieManager;
            case 14:
                _childSerializers$_anonymous_7 = ActionRowComponent._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_7;
            case 15:
                _childSerializers$_anonymous_8 = ChannelSelectComponent._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_8;
            case 16:
                _childSerializers$_anonymous_$03 = ChannelSelectComponent._childSerializers$_anonymous_$0();
                return _childSerializers$_anonymous_$03;
            case 17:
                _childSerializers$_anonymous_9 = CheckpointDataV2026._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_9;
            case 18:
                _childSerializers$_anonymous_10 = ContainerComponent._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_10;
            case 19:
                _childSerializers$_anonymous_11 = ContentInventoryEntry._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_11;
            case 20:
                _childSerializers$_anonymous_$04 = ContentInventoryEntry._childSerializers$_anonymous_$0();
                return _childSerializers$_anonymous_$04;
            case 21:
                _childSerializers$_anonymous_12 = MediaGalleryDisplayComponent._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_12;
            case 22:
                _childSerializers$_anonymous_13 = MentionableSelectComponent._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_13;
            case 23:
                _childSerializers$_anonymous_14 = RoleSelectComponent._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_14;
            case 24:
                _init_$_anonymous_ = SearchableSelectComponent._init_$_anonymous_();
                return _init_$_anonymous_;
            case 25:
                _childSerializers$_anonymous_15 = SectionComponent._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_15;
            case 26:
                _init_$_anonymous_2 = SelectComponent._init_$_anonymous_();
                return _init_$_anonymous_2;
            case 27:
                _init_$_anonymous_3 = SelectItem._init_$_anonymous_();
                return _init_$_anonymous_3;
            case 28:
                _childSerializers$_anonymous_16 = StringSelectComponent._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_16;
            default:
                _childSerializers$_anonymous_$12 = StringSelectComponent._childSerializers$_anonymous_$1();
                return _childSerializers$_anonymous_$12;
        }
    }
}
