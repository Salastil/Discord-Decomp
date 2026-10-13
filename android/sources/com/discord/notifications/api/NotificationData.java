package com.discord.notifications.api;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h1;
import bs.j0;
import bs.o0;
import bs.t0;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.key_commands.KeyCommandDescriptor;
import com.discord.notifications.client.a;
import com.discord.notifications.renderer.NotificationRenderer;
import com.discord.primitives.ApplicationId;
import com.discord.primitives.ApplicationId$$serializer;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.GuildId;
import com.discord.primitives.GuildId$$serializer;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageId$$serializer;
import com.discord.primitives.UserId;
import com.discord.primitives.UserId$$serializer;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.modules.dialog.AlertFragment;
import com.facebook.react.uimanager.events.PointerEventHelper;
import fo.l;
import fo.m;
import java.util.List;
import java.util.Map;
import k0.d;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import org.webrtc.PeerConnection;
import xr.e;

@e
@Metadata(d1 = {"\u0000\u0083\u0001\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010 \n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0011\n\u0002\u0010$\n\u0002\b\u0012\n\u0002\u0018\u0002\n\u0003\bã\u0001\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 À\u00022\u00020\u0001:\u0004À\u0002Á\u0002B\u0091\u0006\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\f\u0012\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u0010\u0012\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u0010\u0012\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u0003\u0012\u000e\b\u0002\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00100\u0017\u0012\n\b\u0002\u0010\u0018\u001a\u0004\u0018\u00010\u0019\u0012\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010 \u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010!\u001a\u0004\u0018\u00010\"\u0012\n\b\u0002\u0010#\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010$\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010&\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010'\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010(\u001a\u0004\u0018\u00010)\u0012\n\b\u0002\u0010*\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010+\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010,\u001a\u0004\u0018\u00010-\u0012\n\b\u0002\u0010.\u001a\u0004\u0018\u00010\u0003\u0012\b\b\u0002\u0010/\u001a\u000200\u0012\b\b\u0002\u00101\u001a\u000200\u0012\n\b\u0002\u00102\u001a\u0004\u0018\u00010\u0019\u0012\n\b\u0002\u00103\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u00104\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u00105\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u00106\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u00107\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u00108\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u00109\u001a\u0004\u0018\u000100\u0012\n\b\u0002\u0010:\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010;\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010<\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010=\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010>\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010?\u001a\u0004\u0018\u00010\u0003\u0012\b\b\u0002\u0010@\u001a\u000200\u0012\u0014\b\u0002\u0010A\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00030B\u0012\b\b\u0002\u0010C\u001a\u000200\u0012\n\b\u0002\u0010D\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010E\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010F\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010G\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010H\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010I\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010J\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010K\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010L\u001a\u0004\u0018\u00010\u0003\u0012\b\b\u0002\u0010M\u001a\u00020\f\u0012\b\b\u0002\u0010N\u001a\u000200¢\u0006\u0004\bO\u0010PB»\u0005\b\u0010\u0012\u0006\u0010Q\u001a\u00020\u0007\u0012\u0006\u0010R\u001a\u00020\u0007\u0012\u0006\u0010S\u001a\u00020\u0007\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0013\u001a\u0004\u0018\u00010\u0010\u0012\b\u0010\u0014\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\u0015\u001a\u0004\u0018\u00010\u0003\u0012\u000e\u0010\u0016\u001a\n\u0012\u0004\u0012\u00020\u0010\u0018\u00010\u0017\u0012\b\u0010\u0018\u001a\u0004\u0018\u00010\u0019\u0012\b\u0010\u001a\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u001b\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u001c\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\u001d\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u001e\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u001f\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010 \u001a\u0004\u0018\u00010\u0007\u0012\b\u0010!\u001a\u0004\u0018\u00010\"\u0012\b\u0010#\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010$\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010%\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010&\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010'\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010(\u001a\u0004\u0018\u00010)\u0012\b\u0010*\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010+\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010,\u001a\u0004\u0018\u00010-\u0012\b\u0010.\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010/\u001a\u000200\u0012\u0006\u00101\u001a\u000200\u0012\b\u00102\u001a\u0004\u0018\u00010\u0019\u0012\b\u00103\u001a\u0004\u0018\u00010\u0003\u0012\b\u00104\u001a\u0004\u0018\u00010\u0003\u0012\b\u00105\u001a\u0004\u0018\u00010\u0003\u0012\b\u00106\u001a\u0004\u0018\u00010\u0003\u0012\b\u00107\u001a\u0004\u0018\u00010\u0003\u0012\b\u00108\u001a\u0004\u0018\u00010\u0003\u0012\b\u00109\u001a\u0004\u0018\u000100\u0012\b\u0010:\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010;\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010<\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010=\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010>\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010?\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010@\u001a\u000200\u0012\u0014\u0010A\u001a\u0010\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u0003\u0018\u00010B\u0012\u0006\u0010C\u001a\u000200\u0012\b\u0010D\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010E\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010F\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010G\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010H\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010I\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010J\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010K\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010L\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010M\u001a\u00020\f\u0012\u0006\u0010N\u001a\u000200\u0012\b\u0010T\u001a\u0004\u0018\u00010U¢\u0006\u0004\bO\u0010VJ\n\u0010é\u0001\u001a\u00020\u0003HÆ\u0003J\u0014\u0010ê\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0005\bë\u0001\u0010ZJ\u0011\u0010ì\u0001\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010`J\f\u0010í\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0011\u0010î\u0001\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010`J\f\u0010ï\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0011\u0010ð\u0001\u001a\u0004\u0018\u00010\fHÆ\u0003¢\u0006\u0002\u0010jJ\u0011\u0010ñ\u0001\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010`J\f\u0010ò\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0012\u0010ó\u0001\u001a\u0004\u0018\u00010\u0010HÆ\u0003¢\u0006\u0003\bô\u0001J\f\u0010õ\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010ö\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0012\u0010÷\u0001\u001a\u0004\u0018\u00010\u0010HÆ\u0003¢\u0006\u0003\bø\u0001J\u0011\u0010ù\u0001\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010`J\f\u0010ú\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0010\u0010û\u0001\u001a\b\u0012\u0004\u0012\u00020\u00100\u0017HÆ\u0003J\u0012\u0010ü\u0001\u001a\u0004\u0018\u00010\u0019HÆ\u0003¢\u0006\u0003\bý\u0001J\f\u0010þ\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010ÿ\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0011\u0010\u0080\u0002\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010`J\f\u0010\u0081\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u0082\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u0083\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0011\u0010\u0084\u0002\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010`J\u0012\u0010\u0085\u0002\u001a\u0004\u0018\u00010\"HÆ\u0003¢\u0006\u0003\b\u0086\u0002J\f\u0010\u0087\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u0088\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u0089\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0011\u0010\u008a\u0002\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010`J\f\u0010\u008b\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0012\u0010\u008c\u0002\u001a\u0004\u0018\u00010)HÆ\u0003¢\u0006\u0003\b\u008d\u0002J\f\u0010\u008e\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u008f\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u0090\u0002\u001a\u0004\u0018\u00010-HÆ\u0003J\f\u0010\u0091\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\n\u0010\u0092\u0002\u001a\u000200HÆ\u0003J\n\u0010\u0093\u0002\u001a\u000200HÆ\u0003J\u0012\u0010\u0094\u0002\u001a\u0004\u0018\u00010\u0019HÆ\u0003¢\u0006\u0003\b\u0095\u0002J\f\u0010\u0096\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u0097\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u0098\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u0099\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u009a\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u009b\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0012\u0010\u009c\u0002\u001a\u0004\u0018\u000100HÆ\u0003¢\u0006\u0003\u0010¾\u0001J\f\u0010\u009d\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u009e\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0011\u0010\u009f\u0002\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010`J\u0011\u0010 \u0002\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010`J\u0011\u0010¡\u0002\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010`J\f\u0010¢\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\n\u0010£\u0002\u001a\u000200HÆ\u0003J\u0016\u0010¤\u0002\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00030BHÆ\u0003J\n\u0010¥\u0002\u001a\u000200HÆ\u0003J\f\u0010¦\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010§\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010¨\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010©\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010ª\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010«\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010¬\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0011\u0010\u00ad\u0002\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010`J\f\u0010®\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\n\u0010¯\u0002\u001a\u00020\fHÆ\u0003J\n\u0010°\u0002\u001a\u000200HÆ\u0003J\u009f\u0006\u0010±\u0002\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\f2\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u00102\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u00102\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u00032\u000e\b\u0002\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00100\u00172\n\b\u0002\u0010\u0018\u001a\u0004\u0018\u00010\u00192\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010 \u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010!\u001a\u0004\u0018\u00010\"2\n\b\u0002\u0010#\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010$\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010&\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010'\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010(\u001a\u0004\u0018\u00010)2\n\b\u0002\u0010*\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010+\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010,\u001a\u0004\u0018\u00010-2\n\b\u0002\u0010.\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010/\u001a\u0002002\b\b\u0002\u00101\u001a\u0002002\n\b\u0002\u00102\u001a\u0004\u0018\u00010\u00192\n\b\u0002\u00103\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u00104\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u00105\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u00106\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u00107\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u00108\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u00109\u001a\u0004\u0018\u0001002\n\b\u0002\u0010:\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010;\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010<\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010=\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010>\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010?\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010@\u001a\u0002002\u0014\b\u0002\u0010A\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00030B2\b\b\u0002\u0010C\u001a\u0002002\n\b\u0002\u0010D\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010E\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010F\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010G\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010H\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010I\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010J\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010K\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010L\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010M\u001a\u00020\f2\b\b\u0002\u0010N\u001a\u000200HÆ\u0001¢\u0006\u0006\b²\u0002\u0010³\u0002J\u0015\u0010´\u0002\u001a\u0002002\t\u0010µ\u0002\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\n\u0010¶\u0002\u001a\u00020\u0007HÖ\u0001J\n\u0010·\u0002\u001a\u00020\u0003HÖ\u0001J-\u0010¸\u0002\u001a\u00030¹\u00022\u0007\u0010º\u0002\u001a\u00020\u00002\b\u0010»\u0002\u001a\u00030¼\u00022\b\u0010½\u0002\u001a\u00030¾\u0002H\u0001¢\u0006\u0003\b¿\u0002R\u001c\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\bW\u0010X\u001a\u0004\bY\u0010ZR \u0010\u0004\u001a\u0004\u0018\u00010\u00058\u0006X\u0087\u0004¢\u0006\u0010\n\u0002\u0010]\u0012\u0004\b[\u0010X\u001a\u0004\b\\\u0010ZR \u0010\u0006\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\u0010\n\u0002\u0010a\u0012\u0004\b^\u0010X\u001a\u0004\b_\u0010`R\u001e\u0010\b\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\bb\u0010X\u001a\u0004\bc\u0010ZR \u0010\t\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\u0010\n\u0002\u0010a\u0012\u0004\bd\u0010X\u001a\u0004\be\u0010`R\u001e\u0010\n\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\bf\u0010X\u001a\u0004\bg\u0010ZR \u0010\u000b\u001a\u0004\u0018\u00010\f8\u0006X\u0087\u0004¢\u0006\u0010\n\u0002\u0010k\u0012\u0004\bh\u0010X\u001a\u0004\bi\u0010jR \u0010\r\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\u0010\n\u0002\u0010a\u0012\u0004\bl\u0010X\u001a\u0004\bm\u0010`R\u001e\u0010\u000e\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\bn\u0010X\u001a\u0004\bo\u0010ZR\u001e\u0010\u000f\u001a\u0004\u0018\u00010\u00108\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\bp\u0010X\u001a\u0004\bq\u0010rR\u001e\u0010\u0011\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\bs\u0010X\u001a\u0004\bt\u0010ZR\u001e\u0010\u0012\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\bu\u0010X\u001a\u0004\bv\u0010ZR\u001e\u0010\u0013\u001a\u0004\u0018\u00010\u00108\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\bw\u0010X\u001a\u0004\bx\u0010rR \u0010\u0014\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\u0010\n\u0002\u0010a\u0012\u0004\by\u0010X\u001a\u0004\bz\u0010`R\u001e\u0010\u0015\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b{\u0010X\u001a\u0004\b|\u0010ZR\"\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00100\u00178\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b}\u0010X\u001a\u0004\b~\u0010\u007fR!\u0010\u0018\u001a\u0004\u0018\u00010\u00198\u0006X\u0087\u0004¢\u0006\u0011\n\u0000\u0012\u0005\b\u0080\u0001\u0010X\u001a\u0006\b\u0081\u0001\u0010\u0082\u0001R \u0010\u001a\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b\u0083\u0001\u0010X\u001a\u0005\b\u0084\u0001\u0010ZR \u0010\u001b\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b\u0085\u0001\u0010X\u001a\u0005\b\u0086\u0001\u0010ZR\"\u0010\u001c\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\u0012\n\u0002\u0010a\u0012\u0005\b\u0087\u0001\u0010X\u001a\u0005\b\u0088\u0001\u0010`R \u0010\u001d\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b\u0089\u0001\u0010X\u001a\u0005\b\u008a\u0001\u0010ZR \u0010\u001e\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b\u008b\u0001\u0010X\u001a\u0005\b\u008c\u0001\u0010ZR \u0010\u001f\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b\u008d\u0001\u0010X\u001a\u0005\b\u008e\u0001\u0010ZR\"\u0010 \u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\u0012\n\u0002\u0010a\u0012\u0005\b\u008f\u0001\u0010X\u001a\u0005\b\u0090\u0001\u0010`R!\u0010!\u001a\u0004\u0018\u00010\"8\u0006X\u0087\u0004¢\u0006\u0011\n\u0000\u0012\u0005\b\u0091\u0001\u0010X\u001a\u0006\b\u0092\u0001\u0010\u0093\u0001R \u0010#\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b\u0094\u0001\u0010X\u001a\u0005\b\u0095\u0001\u0010ZR \u0010$\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b\u0096\u0001\u0010X\u001a\u0005\b\u0097\u0001\u0010ZR \u0010%\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b\u0098\u0001\u0010X\u001a\u0005\b\u0099\u0001\u0010ZR\"\u0010&\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\u0012\n\u0002\u0010a\u0012\u0005\b\u009a\u0001\u0010X\u001a\u0005\b\u009b\u0001\u0010`R \u0010'\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b\u009c\u0001\u0010X\u001a\u0005\b\u009d\u0001\u0010ZR!\u0010(\u001a\u0004\u0018\u00010)8\u0006X\u0087\u0004¢\u0006\u0011\n\u0000\u0012\u0005\b\u009e\u0001\u0010X\u001a\u0006\b\u009f\u0001\u0010 \u0001R \u0010*\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b¡\u0001\u0010X\u001a\u0005\b¢\u0001\u0010ZR \u0010+\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b£\u0001\u0010X\u001a\u0005\b¤\u0001\u0010ZR!\u0010,\u001a\u0004\u0018\u00010-8\u0006X\u0087\u0004¢\u0006\u0011\n\u0000\u0012\u0005\b¥\u0001\u0010X\u001a\u0006\b¦\u0001\u0010§\u0001R \u0010.\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b¨\u0001\u0010X\u001a\u0005\b©\u0001\u0010ZR\u001f\u0010/\u001a\u0002008\u0006X\u0087\u0004¢\u0006\u0011\n\u0000\u0012\u0005\bª\u0001\u0010X\u001a\u0006\b«\u0001\u0010¬\u0001R\u001e\u00101\u001a\u0002008\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b\u00ad\u0001\u0010X\u001a\u0005\b1\u0010¬\u0001R!\u00102\u001a\u0004\u0018\u00010\u00198\u0006X\u0087\u0004¢\u0006\u0011\n\u0000\u0012\u0005\b®\u0001\u0010X\u001a\u0006\b¯\u0001\u0010\u0082\u0001R \u00103\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b°\u0001\u0010X\u001a\u0005\b±\u0001\u0010ZR \u00104\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b²\u0001\u0010X\u001a\u0005\b³\u0001\u0010ZR \u00105\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b´\u0001\u0010X\u001a\u0005\bµ\u0001\u0010ZR \u00106\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b¶\u0001\u0010X\u001a\u0005\b·\u0001\u0010ZR \u00107\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b¸\u0001\u0010X\u001a\u0005\b¹\u0001\u0010ZR \u00108\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\bº\u0001\u0010X\u001a\u0005\b»\u0001\u0010ZR$\u00109\u001a\u0004\u0018\u0001008\u0006X\u0087\u0004¢\u0006\u0014\n\u0003\u0010¿\u0001\u0012\u0005\b¼\u0001\u0010X\u001a\u0006\b½\u0001\u0010¾\u0001R \u0010:\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\bÀ\u0001\u0010X\u001a\u0005\bÁ\u0001\u0010ZR \u0010;\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\bÂ\u0001\u0010X\u001a\u0005\bÃ\u0001\u0010ZR\"\u0010<\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\u0012\n\u0002\u0010a\u0012\u0005\bÄ\u0001\u0010X\u001a\u0005\bÅ\u0001\u0010`R\"\u0010=\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\u0012\n\u0002\u0010a\u0012\u0005\bÆ\u0001\u0010X\u001a\u0005\bÇ\u0001\u0010`R\"\u0010>\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\u0012\n\u0002\u0010a\u0012\u0005\bÈ\u0001\u0010X\u001a\u0005\bÉ\u0001\u0010`R \u0010?\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\bÊ\u0001\u0010X\u001a\u0005\bË\u0001\u0010ZR\u001f\u0010@\u001a\u0002008\u0006X\u0087\u0004¢\u0006\u0011\n\u0000\u0012\u0005\bÌ\u0001\u0010X\u001a\u0006\bÍ\u0001\u0010¬\u0001R+\u0010A\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00030B8\u0006X\u0087\u0004¢\u0006\u0011\n\u0000\u0012\u0005\bÎ\u0001\u0010X\u001a\u0006\bÏ\u0001\u0010Ð\u0001R\u001f\u0010C\u001a\u0002008\u0006X\u0087\u0004¢\u0006\u0011\n\u0000\u0012\u0005\bÑ\u0001\u0010X\u001a\u0006\bÒ\u0001\u0010¬\u0001R \u0010D\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\bÓ\u0001\u0010X\u001a\u0005\bÔ\u0001\u0010ZR \u0010E\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\bÕ\u0001\u0010X\u001a\u0005\bÖ\u0001\u0010ZR \u0010F\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\b×\u0001\u0010X\u001a\u0005\bØ\u0001\u0010ZR \u0010G\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\bÙ\u0001\u0010X\u001a\u0005\bÚ\u0001\u0010ZR \u0010H\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\bÛ\u0001\u0010X\u001a\u0005\bÜ\u0001\u0010ZR \u0010I\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\bÝ\u0001\u0010X\u001a\u0005\bÞ\u0001\u0010ZR \u0010J\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\bß\u0001\u0010X\u001a\u0005\bà\u0001\u0010ZR\"\u0010K\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\u0012\n\u0002\u0010a\u0012\u0005\bá\u0001\u0010X\u001a\u0005\bâ\u0001\u0010`R \u0010L\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\bã\u0001\u0010X\u001a\u0005\bä\u0001\u0010ZR\u001f\u0010M\u001a\u00020\f8\u0006X\u0087\u0004¢\u0006\u0011\n\u0000\u0012\u0005\bå\u0001\u0010X\u001a\u0006\bæ\u0001\u0010ç\u0001R\u001e\u0010N\u001a\u0002008\u0006X\u0087\u0004¢\u0006\u0010\n\u0000\u0012\u0005\bè\u0001\u0010X\u001a\u0005\bN\u0010¬\u0001¨\u0006Â\u0002"}, d2 = {"Lcom/discord/notifications/api/NotificationData;", "", "type", "", "messageId", "Lcom/discord/primitives/MessageId;", "messageActivityType", "", "messageApplicationName", "messageType", "messageContent", "messageFlags", "", "channelType", NotificationRenderer.CHANNEL_NAME, "channelId", "Lcom/discord/primitives/ChannelId;", "channelIcon", "parentName", "parentId", "messageReferenceType", "channelRtcRegion", "ackChannelIds", "", "userId", "Lcom/discord/primitives/UserId;", "userUsername", "userGlobalName", "userDiscriminator", "userAvatar", "userGuildAvatar", "platformUserUsername", "relationshipType", "guildId", "Lcom/discord/primitives/GuildId;", "guildName", "guildIcon", "activityInstanceId", "activityType", "activityName", "applicationId", "Lcom/discord/primitives/ApplicationId;", "applicationName", "applicationIcon", "message", "Lcom/discord/notifications/api/NotificationMessage;", "stageInstanceTopic", "canReply", "", "isFromCurrentUser", "receivingUserId", AlertFragment.ARG_TITLE, "subtitle", "iconUrl", "notificationChannel", "trackingType", "deeplink", "expandSubtitle", "imageAttachmentUrl", "ergoImageAttachmentUrl", "attachmentTextVariant", "imageAttachmentCount", "videoAttachmentCount", "timeReceived", "silent", "userInfo", "", "appDm", "notifTypeId", "notifInstanceId", "joinId", "mentionType", "appState", "inviteGuildName", "inviteChannelName", "inviteTitleVariant", "pollQuestion", "sentAtMillis", "isSpoilerChannel", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/String;Lcom/discord/primitives/ChannelId;Ljava/lang/String;Ljava/lang/String;Lcom/discord/primitives/ChannelId;Ljava/lang/Integer;Ljava/lang/String;Ljava/util/List;Lcom/discord/primitives/UserId;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/discord/primitives/GuildId;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Lcom/discord/primitives/ApplicationId;Ljava/lang/String;Ljava/lang/String;Lcom/discord/notifications/api/NotificationMessage;Ljava/lang/String;ZZLcom/discord/primitives/UserId;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;ZLjava/util/Map;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;JZLkotlin/jvm/internal/DefaultConstructorMarker;)V", "seen0", "seen1", "seen2", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IIILjava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/String;Lcom/discord/primitives/ChannelId;Ljava/lang/String;Ljava/lang/String;Lcom/discord/primitives/ChannelId;Ljava/lang/Integer;Ljava/lang/String;Ljava/util/List;Lcom/discord/primitives/UserId;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/discord/primitives/GuildId;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Lcom/discord/primitives/ApplicationId;Ljava/lang/String;Ljava/lang/String;Lcom/discord/notifications/api/NotificationMessage;Ljava/lang/String;ZZLcom/discord/primitives/UserId;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;ZLjava/util/Map;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;JZLkotlinx/serialization/internal/SerializationConstructorMarker;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getType$annotations", "()V", "getType", "()Ljava/lang/String;", "getMessageId-N_6c4I0$annotations", "getMessageId-N_6c4I0", "Ljava/lang/String;", "getMessageActivityType$annotations", "getMessageActivityType", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getMessageApplicationName$annotations", "getMessageApplicationName", "getMessageType$annotations", "getMessageType", "getMessageContent$annotations", "getMessageContent", "getMessageFlags$annotations", "getMessageFlags", "()Ljava/lang/Long;", "Ljava/lang/Long;", "getChannelType$annotations", "getChannelType", "getChannelName$annotations", "getChannelName", "getChannelId-qMVnFVQ$annotations", "getChannelId-qMVnFVQ", "()Lcom/discord/primitives/ChannelId;", "getChannelIcon$annotations", "getChannelIcon", "getParentName$annotations", "getParentName", "getParentId-qMVnFVQ$annotations", "getParentId-qMVnFVQ", "getMessageReferenceType$annotations", "getMessageReferenceType", "getChannelRtcRegion$annotations", "getChannelRtcRegion", "getAckChannelIds$annotations", "getAckChannelIds", "()Ljava/util/List;", "getUserId-wUX8bhU$annotations", "getUserId-wUX8bhU", "()Lcom/discord/primitives/UserId;", "getUserUsername$annotations", "getUserUsername", "getUserGlobalName$annotations", "getUserGlobalName", "getUserDiscriminator$annotations", "getUserDiscriminator", "getUserAvatar$annotations", "getUserAvatar", "getUserGuildAvatar$annotations", "getUserGuildAvatar", "getPlatformUserUsername$annotations", "getPlatformUserUsername", "getRelationshipType$annotations", "getRelationshipType", "getGuildId-qOKuAAo$annotations", "getGuildId-qOKuAAo", "()Lcom/discord/primitives/GuildId;", "getGuildName$annotations", "getGuildName", "getGuildIcon$annotations", "getGuildIcon", "getActivityInstanceId$annotations", "getActivityInstanceId", "getActivityType$annotations", "getActivityType", "getActivityName$annotations", "getActivityName", "getApplicationId-UtIrSio$annotations", "getApplicationId-UtIrSio", "()Lcom/discord/primitives/ApplicationId;", "getApplicationName$annotations", "getApplicationName", "getApplicationIcon$annotations", "getApplicationIcon", "getMessage$annotations", "getMessage", "()Lcom/discord/notifications/api/NotificationMessage;", "getStageInstanceTopic$annotations", "getStageInstanceTopic", "getCanReply$annotations", "getCanReply", "()Z", "isFromCurrentUser$annotations", "getReceivingUserId-wUX8bhU$annotations", "getReceivingUserId-wUX8bhU", "getTitle$annotations", "getTitle", "getSubtitle$annotations", "getSubtitle", "getIconUrl$annotations", "getIconUrl", "getNotificationChannel$annotations", "getNotificationChannel", "getTrackingType$annotations", "getTrackingType", "getDeeplink$annotations", "getDeeplink", "getExpandSubtitle$annotations", "getExpandSubtitle", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "getImageAttachmentUrl$annotations", "getImageAttachmentUrl", "getErgoImageAttachmentUrl$annotations", "getErgoImageAttachmentUrl", "getAttachmentTextVariant$annotations", "getAttachmentTextVariant", "getImageAttachmentCount$annotations", "getImageAttachmentCount", "getVideoAttachmentCount$annotations", "getVideoAttachmentCount", "getTimeReceived$annotations", "getTimeReceived", "getSilent$annotations", "getSilent", "getUserInfo$annotations", "getUserInfo", "()Ljava/util/Map;", "getAppDm$annotations", "getAppDm", "getNotifTypeId$annotations", "getNotifTypeId", "getNotifInstanceId$annotations", "getNotifInstanceId", "getJoinId$annotations", "getJoinId", "getMentionType$annotations", "getMentionType", "getAppState$annotations", "getAppState", "getInviteGuildName$annotations", "getInviteGuildName", "getInviteChannelName$annotations", "getInviteChannelName", "getInviteTitleVariant$annotations", "getInviteTitleVariant", "getPollQuestion$annotations", "getPollQuestion", "getSentAtMillis$annotations", "getSentAtMillis", "()J", "isSpoilerChannel$annotations", "component1", "component2", "component2-N_6c4I0", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component10-qMVnFVQ", "component11", "component12", "component13", "component13-qMVnFVQ", "component14", "component15", "component16", "component17", "component17-wUX8bhU", "component18", "component19", "component20", "component21", "component22", "component23", "component24", "component25", "component25-qOKuAAo", "component26", "component27", "component28", "component29", "component30", "component31", "component31-UtIrSio", "component32", "component33", "component34", "component35", "component36", "component37", "component38", "component38-wUX8bhU", "component39", "component40", "component41", "component42", "component43", "component44", "component45", "component46", "component47", "component48", "component49", "component50", "component51", "component52", "component53", "component54", "component55", "component56", "component57", "component58", "component59", "component60", "component61", "component62", "component63", "component64", "component65", "copy", "copy-kb5oZcE", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/String;Lcom/discord/primitives/ChannelId;Ljava/lang/String;Ljava/lang/String;Lcom/discord/primitives/ChannelId;Ljava/lang/Integer;Ljava/lang/String;Ljava/util/List;Lcom/discord/primitives/UserId;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/discord/primitives/GuildId;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Lcom/discord/primitives/ApplicationId;Ljava/lang/String;Ljava/lang/String;Lcom/discord/notifications/api/NotificationMessage;Ljava/lang/String;ZZLcom/discord/primitives/UserId;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;ZLjava/util/Map;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;JZ)Lcom/discord/notifications/api/NotificationData;", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$notification_api_release", "Companion", "$serializer", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class NotificationData {
    public static final int ACTIVITY_TYPE_PLAYING = 0;
    public static final int ACTIVITY_TYPE_STREAMING = 1;
    public static final int CHANNEL_TYPE_ANNOUNCEMENT_THREAD = 10;
    public static final int CHANNEL_TYPE_CATEGORY = 4;
    public static final int CHANNEL_TYPE_DIRECTORY = 14;
    public static final int CHANNEL_TYPE_DM = 1;
    public static final int CHANNEL_TYPE_GROUP_DM = 3;
    public static final int CHANNEL_TYPE_GUILD_ANNOUNCEMENT = 5;
    public static final int CHANNEL_TYPE_GUILD_STAGE_VOICE = 13;
    public static final int CHANNEL_TYPE_GUILD_STORE = 6;
    public static final int CHANNEL_TYPE_GUILD_TEXT = 0;
    public static final int CHANNEL_TYPE_GUILD_VOICE = 2;
    public static final int CHANNEL_TYPE_PRIVATE_THREAD = 12;
    public static final int CHANNEL_TYPE_PUBLIC_THREAD = 11;
    public static final int INVITE_TITLE_VARIANT_EMOJI = 2;
    public static final int INVITE_TITLE_VARIANT_SENDER_ONLY = 1;
    public static final int MESSAGE_ACTIVITY_TYPE_JOIN = 1;
    public static final int MESSAGE_ACTIVITY_TYPE_LISTEN = 3;
    public static final int MESSAGE_ACTIVITY_TYPE_REQUEST = 5;
    public static final int MESSAGE_ACTIVITY_TYPE_SPECTATE = 2;
    public static final int MESSAGE_ACTIVITY_TYPE_WATCH = 4;
    public static final int MESSAGE_REFERENCE_TYPE_FORWARD = 1;
    public static final int MESSAGE_TYPE_POLL_RESULT = 46;
    public static final int MESSAGE_TYPE_USER_JOIN = 7;
    public static final int MSG_MUTE_MIN_COUNT = 2;
    public static final int NOTIF_TYPE_APPLICATION_LIBRARY_INSTALL_COMPLETE = 5;
    public static final int NOTIF_TYPE_CALL_RING = 2;
    public static final int NOTIF_TYPE_FORUM_THREAD_CREATED = 9;
    public static final int NOTIF_TYPE_FRIEND_REQUEST_REMINDER_PUSH = 13;
    public static final int NOTIF_TYPE_FRIEND_SUGGESTION_CREATE = 4;
    public static final int NOTIF_TYPE_GUILD_SCHEDULED_EVENT_UPDATE = 8;
    public static final int NOTIF_TYPE_GUILD_STREAM_START = 6;
    public static final int NOTIF_TYPE_HOME_LIFECYCLE_PUSH = 14;
    public static final int NOTIF_TYPE_MESSAGE_CREATE = 1;
    public static final int NOTIF_TYPE_MISSED_MESSAGE_PUSH = 11;
    public static final int NOTIF_TYPE_NEW_USER_SESSION = 28;
    public static final int NOTIF_TYPE_NUDGE_NEW_FRIEND_DM_PUSH = 16;
    public static final int NOTIF_TYPE_POLL_ENDED_PUSH = 15;
    public static final int NOTIF_TYPE_REACTIONS_PUSH_NOTIFICATION = 23;
    public static final int NOTIF_TYPE_RELATIONSHIP_ADD = 3;
    public static final int NOTIF_TYPE_STAGE_INSTANCE_CREATE = 7;
    public static final int NOTIF_TYPE_SUSPICIOUS_SESSION = 27;
    public static final int NOTIF_TYPE_TOP_MESSAGES_PUSH = 10;
    public static final int RELATIONSHIP_TYPE_FRIEND = 1;
    public static final int RELATIONSHIP_TYPE_INVITE_INCOMING = 3;

    @NotNull
    public static final String TRACKING_TYPE_FRIEND_REQUEST_REMINDER = "generic_friend_request_reminder";

    @NotNull
    public static final String TRACKING_TYPE_GUILD_STREAM_START = "GUILD_STREAM_START";

    @NotNull
    public static final String TRACKING_TYPE_HOME_LIFECYCLE_PUSH = "home_lifecycle_push";

    @NotNull
    public static final String TRACKING_TYPE_MISSED_MESSAGE = "generic_missed_message";

    @NotNull
    public static final String TRACKING_TYPE_MODERATOR_FEATURED_MESSAGE = "generic_home_featured_message";

    @NotNull
    public static final String TRACKING_TYPE_NEW_USER_SESSION = "new_user_session";

    @NotNull
    public static final String TRACKING_TYPE_NUDGE_NEW_FRIEND_DM_PUSH = "nudge_new_friend_dm_push";

    @NotNull
    public static final String TRACKING_TYPE_POLL_ENDED = "poll_ended";

    @NotNull
    public static final String TRACKING_TYPE_REACTIONS = "reactions_push_notification";

    @NotNull
    public static final String TRACKING_TYPE_SUSPICIOUS_SESSION = "suspicious_session";

    @NotNull
    public static final String TRACKING_TYPE_TOP_MESSAGES_PUSH = "top_messages_push";

    @NotNull
    public static final String TRACKING_TYPE_TRENDING_CONTENT_PUSH = "trending_content_push";

    @NotNull
    public static final String TYPE_ACTIVITY_START = "ACTIVITY_START";

    @NotNull
    public static final String TYPE_APPLICATION_LIBRARY_INSTALL_COMPLETE = "APPLICATION_LIBRARY_INSTALL_COMPLETE";

    @NotNull
    public static final String TYPE_CALL_ACK = "CALL_ACK";

    @NotNull
    public static final String TYPE_CALL_CONNECT = "CALL_CONNECT";

    @NotNull
    public static final String TYPE_CALL_RING = "CALL_RING";

    @NotNull
    public static final String TYPE_CALL_RING_END = "CALL_RING_END";

    @NotNull
    public static final String TYPE_CHANNEL_ACK = "CHANNEL_ACK";

    @NotNull
    public static final String TYPE_FORUM_THREAD_CREATED = "FORUM_THREAD_CREATED";

    @NotNull
    public static final String TYPE_FRIEND_SUGGESTION_CREATE = "FRIEND_SUGGESTION_CREATE";

    @NotNull
    public static final String TYPE_GENERIC_PUSH_NOTIFICATION_SENT = "GENERIC_PUSH_NOTIFICATION_SENT";

    @NotNull
    public static final String TYPE_GUILD_SCHEDULED_EVENT_UPDATE = "GUILD_SCHEDULED_EVENT_UPDATE";

    @NotNull
    public static final String TYPE_LOCAL_NOTIFICATION = "LOCAL_NOTIFICATION";

    @NotNull
    public static final String TYPE_MESSAGE_CREATE = "MESSAGE_CREATE";

    @NotNull
    public static final String TYPE_RELATIONSHIP_ADD = "RELATIONSHIP_ADD";

    @NotNull
    public static final String TYPE_STAGE_INSTANCE_CREATE = "STAGE_INSTANCE_CREATE";

    @NotNull
    private final List<ChannelId> ackChannelIds;
    private final String activityInstanceId;
    private final String activityName;
    private final Integer activityType;
    private final boolean appDm;
    private final String appState;
    private final String applicationIcon;
    private final ApplicationId applicationId;
    private final String applicationName;
    private final Integer attachmentTextVariant;
    private final boolean canReply;
    private final String channelIcon;
    private final ChannelId channelId;
    private final String channelName;
    private final String channelRtcRegion;
    private final Integer channelType;
    private final String deeplink;
    private final String ergoImageAttachmentUrl;
    private final Boolean expandSubtitle;
    private final String guildIcon;
    private final GuildId guildId;
    private final String guildName;
    private final String iconUrl;
    private final Integer imageAttachmentCount;
    private final String imageAttachmentUrl;
    private final String inviteChannelName;
    private final String inviteGuildName;
    private final Integer inviteTitleVariant;
    private final boolean isFromCurrentUser;
    private final boolean isSpoilerChannel;
    private final String joinId;
    private final String mentionType;
    private final NotificationMessage message;
    private final Integer messageActivityType;
    private final String messageApplicationName;
    private final String messageContent;
    private final Long messageFlags;
    private final String messageId;
    private final Integer messageReferenceType;
    private final Integer messageType;
    private final String notifInstanceId;
    private final String notifTypeId;
    private final String notificationChannel;
    private final ChannelId parentId;
    private final String parentName;
    private final String platformUserUsername;
    private final String pollQuestion;
    private final UserId receivingUserId;
    private final Integer relationshipType;
    private final long sentAtMillis;
    private final boolean silent;
    private final String stageInstanceTopic;
    private final String subtitle;
    private final String timeReceived;
    private final String title;
    private final String trackingType;

    @NotNull
    private final String type;
    private final String userAvatar;
    private final Integer userDiscriminator;
    private final String userGlobalName;
    private final String userGuildAvatar;
    private final UserId userId;

    @NotNull
    private final Map<String, String> userInfo;
    private final String userUsername;
    private final Integer videoAttachmentCount;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy[] $childSerializers = {null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, l.b(m.f8827e, new a(29)), null, null, null, null, null, null, null, null, null, null, null, null};

    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u001a\n\u0002\u0010\u000e\n\u0002\b.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010N\u001a\b\u0012\u0004\u0012\u00020P0OR\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0019\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u001b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u001c\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u001d\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u001e\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u001f\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010!\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\"\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010#\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010$\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010%\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010&\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010'\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010(\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010)\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010*\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010+\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010,\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010-\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010.\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010/\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00100\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00101\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00102\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00103\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00104\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00105\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00106\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00107\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00108\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00109\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010:\u001a\u00020 X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010;\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010<\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010=\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010>\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010?\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010@\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010A\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010B\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010C\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010D\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010E\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010F\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010G\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010H\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010I\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010J\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010K\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010L\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010M\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006Q"}, d2 = {"Lcom/discord/notifications/api/NotificationData$Companion;", "", "<init>", "()V", "CHANNEL_TYPE_GUILD_TEXT", "", "CHANNEL_TYPE_DM", "CHANNEL_TYPE_GUILD_VOICE", "CHANNEL_TYPE_GROUP_DM", "CHANNEL_TYPE_CATEGORY", "CHANNEL_TYPE_GUILD_ANNOUNCEMENT", "CHANNEL_TYPE_GUILD_STORE", "CHANNEL_TYPE_ANNOUNCEMENT_THREAD", "CHANNEL_TYPE_PUBLIC_THREAD", "CHANNEL_TYPE_PRIVATE_THREAD", "CHANNEL_TYPE_GUILD_STAGE_VOICE", "CHANNEL_TYPE_DIRECTORY", "MESSAGE_ACTIVITY_TYPE_JOIN", "MESSAGE_ACTIVITY_TYPE_SPECTATE", "MESSAGE_ACTIVITY_TYPE_LISTEN", "MESSAGE_ACTIVITY_TYPE_WATCH", "MESSAGE_ACTIVITY_TYPE_REQUEST", "MESSAGE_TYPE_USER_JOIN", "MESSAGE_TYPE_POLL_RESULT", "MESSAGE_REFERENCE_TYPE_FORWARD", "RELATIONSHIP_TYPE_FRIEND", "RELATIONSHIP_TYPE_INVITE_INCOMING", "ACTIVITY_TYPE_PLAYING", "ACTIVITY_TYPE_STREAMING", "INVITE_TITLE_VARIANT_SENDER_ONLY", "INVITE_TITLE_VARIANT_EMOJI", "TYPE_ACTIVITY_START", "", "TYPE_CHANNEL_ACK", "TYPE_MESSAGE_CREATE", "TYPE_RELATIONSHIP_ADD", "TYPE_CALL_RING", "TYPE_CALL_RING_END", "TYPE_CALL_ACK", "TYPE_CALL_CONNECT", "TYPE_APPLICATION_LIBRARY_INSTALL_COMPLETE", "TYPE_STAGE_INSTANCE_CREATE", "TYPE_FORUM_THREAD_CREATED", "TYPE_GUILD_SCHEDULED_EVENT_UPDATE", "TYPE_GENERIC_PUSH_NOTIFICATION_SENT", "TYPE_FRIEND_SUGGESTION_CREATE", "TYPE_LOCAL_NOTIFICATION", "TRACKING_TYPE_SUSPICIOUS_SESSION", "TRACKING_TYPE_GUILD_STREAM_START", "TRACKING_TYPE_MODERATOR_FEATURED_MESSAGE", "TRACKING_TYPE_MISSED_MESSAGE", "TRACKING_TYPE_FRIEND_REQUEST_REMINDER", "TRACKING_TYPE_NUDGE_NEW_FRIEND_DM_PUSH", "TRACKING_TYPE_TOP_MESSAGES_PUSH", "TRACKING_TYPE_HOME_LIFECYCLE_PUSH", "TRACKING_TYPE_TRENDING_CONTENT_PUSH", "TRACKING_TYPE_POLL_ENDED", "TRACKING_TYPE_REACTIONS", "TRACKING_TYPE_NEW_USER_SESSION", "MSG_MUTE_MIN_COUNT", "NOTIF_TYPE_MESSAGE_CREATE", "NOTIF_TYPE_CALL_RING", "NOTIF_TYPE_RELATIONSHIP_ADD", "NOTIF_TYPE_FRIEND_SUGGESTION_CREATE", "NOTIF_TYPE_APPLICATION_LIBRARY_INSTALL_COMPLETE", "NOTIF_TYPE_GUILD_STREAM_START", "NOTIF_TYPE_STAGE_INSTANCE_CREATE", "NOTIF_TYPE_GUILD_SCHEDULED_EVENT_UPDATE", "NOTIF_TYPE_FORUM_THREAD_CREATED", "NOTIF_TYPE_TOP_MESSAGES_PUSH", "NOTIF_TYPE_MISSED_MESSAGE_PUSH", "NOTIF_TYPE_FRIEND_REQUEST_REMINDER_PUSH", "NOTIF_TYPE_HOME_LIFECYCLE_PUSH", "NOTIF_TYPE_POLL_ENDED_PUSH", "NOTIF_TYPE_NUDGE_NEW_FRIEND_DM_PUSH", "NOTIF_TYPE_REACTIONS_PUSH_NOTIFICATION", "NOTIF_TYPE_SUSPICIOUS_SESSION", "NOTIF_TYPE_NEW_USER_SESSION", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/notifications/api/NotificationData;", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final KSerializer serializer() {
            return NotificationData$$serializer.INSTANCE;
        }

        private Companion() {
        }
    }

    public /* synthetic */ NotificationData(int i5, int i6, int i10, String str, String str2, Integer num, String str3, Integer num2, String str4, Long l6, Integer num3, String str5, ChannelId channelId, String str6, String str7, ChannelId channelId2, Integer num4, String str8, List list, UserId userId, String str9, String str10, Integer num5, String str11, String str12, String str13, Integer num6, GuildId guildId, String str14, String str15, String str16, Integer num7, String str17, ApplicationId applicationId, String str18, String str19, NotificationMessage notificationMessage, String str20, boolean z5, boolean z6, UserId userId2, String str21, String str22, String str23, String str24, String str25, String str26, Boolean bool, String str27, String str28, Integer num8, Integer num9, Integer num10, String str29, boolean z7, Map map, boolean z8, String str30, String str31, String str32, String str33, String str34, String str35, String str36, Integer num11, String str37, long j, boolean z10, SerializationConstructorMarker serializationConstructorMarker, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, i6, i10, str, str2, num, str3, num2, str4, l6, num3, str5, channelId, str6, str7, channelId2, num4, str8, list, userId, str9, str10, num5, str11, str12, str13, num6, guildId, str14, str15, str16, num7, str17, applicationId, str18, str19, notificationMessage, str20, z5, z6, userId2, str21, str22, str23, str24, str25, str26, bool, str27, str28, num8, num9, num10, str29, z7, map, z8, str30, str31, str32, str33, str34, str35, str36, num11, str37, j, z10, serializationConstructorMarker);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        v1 v1Var = v1.a;
        return new j0(v1Var, v1Var, 1);
    }

    /* renamed from: copy-kb5oZcE$default, reason: not valid java name */
    public static /* synthetic */ NotificationData m1106copykb5oZcE$default(NotificationData notificationData, String str, String str2, Integer num, String str3, Integer num2, String str4, Long l6, Integer num3, String str5, ChannelId channelId, String str6, String str7, ChannelId channelId2, Integer num4, String str8, List list, UserId userId, String str9, String str10, Integer num5, String str11, String str12, String str13, Integer num6, GuildId guildId, String str14, String str15, String str16, Integer num7, String str17, ApplicationId applicationId, String str18, String str19, NotificationMessage notificationMessage, String str20, boolean z5, boolean z6, UserId userId2, String str21, String str22, String str23, String str24, String str25, String str26, Boolean bool, String str27, String str28, Integer num8, Integer num9, Integer num10, String str29, boolean z7, Map map, boolean z8, String str30, String str31, String str32, String str33, String str34, String str35, String str36, Integer num11, String str37, long j, boolean z10, int i5, int i6, int i10, Object obj) {
        boolean z11;
        long j5;
        Integer num12;
        String str38;
        boolean z12;
        Map map2;
        boolean z13;
        String str39;
        String str40;
        String str41;
        String str42;
        String str43;
        String str44;
        String str45;
        Integer num13;
        String str46;
        boolean z14;
        boolean z15;
        UserId userId3;
        String str47;
        String str48;
        String str49;
        String str50;
        String str51;
        String str52;
        Boolean bool2;
        String str53;
        String str54;
        Integer num14;
        Integer num15;
        String str55;
        String str56;
        Integer num16;
        GuildId guildId2;
        String str57;
        String str58;
        String str59;
        Integer num17;
        String str60;
        ApplicationId applicationId2;
        String str61;
        String str62;
        NotificationMessage notificationMessage2;
        String str63;
        String str64;
        Integer num18;
        String str65;
        ChannelId channelId3;
        String str66;
        String str67;
        ChannelId channelId4;
        Integer num19;
        List list2;
        UserId userId4;
        String str68;
        String str69;
        Integer num20;
        String str70;
        String str71;
        Integer num21;
        String str72;
        Integer num22;
        String str73;
        Long l7;
        String str74 = (i5 & 1) != 0 ? notificationData.type : str;
        String str75 = (i5 & 2) != 0 ? notificationData.messageId : str2;
        Integer num23 = (i5 & 4) != 0 ? notificationData.messageActivityType : num;
        String str76 = (i5 & 8) != 0 ? notificationData.messageApplicationName : str3;
        Integer num24 = (i5 & 16) != 0 ? notificationData.messageType : num2;
        String str77 = (i5 & 32) != 0 ? notificationData.messageContent : str4;
        Long l10 = (i5 & 64) != 0 ? notificationData.messageFlags : l6;
        Integer num25 = (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? notificationData.channelType : num3;
        String str78 = (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? notificationData.channelName : str5;
        ChannelId channelId5 = (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? notificationData.channelId : channelId;
        String str79 = (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? notificationData.channelIcon : str6;
        String str80 = (i5 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? notificationData.parentName : str7;
        ChannelId channelId6 = (i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? notificationData.parentId : channelId2;
        String str81 = str74;
        Integer num26 = (i5 & 8192) != 0 ? notificationData.messageReferenceType : num4;
        String str82 = (i5 & 16384) != 0 ? notificationData.channelRtcRegion : str8;
        List list3 = (i5 & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0 ? notificationData.ackChannelIds : list;
        UserId userId5 = (i5 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) != 0 ? notificationData.userId : userId;
        String str83 = (i5 & KeyCommandDescriptor.ModifierFlags.SHIFT) != 0 ? notificationData.userUsername : str9;
        String str84 = (i5 & KeyCommandDescriptor.ModifierFlags.CONTROL) != 0 ? notificationData.userGlobalName : str10;
        Integer num27 = (i5 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) != 0 ? notificationData.userDiscriminator : num5;
        String str85 = (i5 & KeyCommandDescriptor.ModifierFlags.COMMAND) != 0 ? notificationData.userAvatar : str11;
        String str86 = (i5 & KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD) != 0 ? notificationData.userGuildAvatar : str12;
        String str87 = (i5 & 4194304) != 0 ? notificationData.platformUserUsername : str13;
        Integer num28 = (i5 & 8388608) != 0 ? notificationData.relationshipType : num6;
        GuildId guildId3 = (i5 & PointerEventHelper.X_FLAG_SUPPORTS_HOVER) != 0 ? notificationData.guildId : guildId;
        String str88 = (i5 & 33554432) != 0 ? notificationData.guildName : str14;
        String str89 = (i5 & 67108864) != 0 ? notificationData.guildIcon : str15;
        String str90 = (i5 & 134217728) != 0 ? notificationData.activityInstanceId : str16;
        Integer num29 = (i5 & 268435456) != 0 ? notificationData.activityType : num7;
        String str91 = (i5 & 536870912) != 0 ? notificationData.activityName : str17;
        ApplicationId applicationId3 = (i5 & 1073741824) != 0 ? notificationData.applicationId : applicationId;
        String str92 = (i5 & Integer.MIN_VALUE) != 0 ? notificationData.applicationName : str18;
        String str93 = (i6 & 1) != 0 ? notificationData.applicationIcon : str19;
        NotificationMessage notificationMessage3 = (i6 & 2) != 0 ? notificationData.message : notificationMessage;
        String str94 = (i6 & 4) != 0 ? notificationData.stageInstanceTopic : str20;
        boolean z16 = (i6 & 8) != 0 ? notificationData.canReply : z5;
        boolean z17 = (i6 & 16) != 0 ? notificationData.isFromCurrentUser : z6;
        UserId userId6 = (i6 & 32) != 0 ? notificationData.receivingUserId : userId2;
        String str95 = (i6 & 64) != 0 ? notificationData.title : str21;
        String str96 = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? notificationData.subtitle : str22;
        String str97 = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? notificationData.iconUrl : str23;
        String str98 = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? notificationData.notificationChannel : str24;
        String str99 = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? notificationData.trackingType : str25;
        String str100 = (i6 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? notificationData.deeplink : str26;
        Boolean bool3 = (i6 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? notificationData.expandSubtitle : bool;
        String str101 = (i6 & 8192) != 0 ? notificationData.imageAttachmentUrl : str27;
        String str102 = (i6 & 16384) != 0 ? notificationData.ergoImageAttachmentUrl : str28;
        Integer num30 = (i6 & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0 ? notificationData.attachmentTextVariant : num8;
        Integer num31 = (i6 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) != 0 ? notificationData.imageAttachmentCount : num9;
        Integer num32 = (i6 & KeyCommandDescriptor.ModifierFlags.SHIFT) != 0 ? notificationData.videoAttachmentCount : num10;
        String str103 = (i6 & KeyCommandDescriptor.ModifierFlags.CONTROL) != 0 ? notificationData.timeReceived : str29;
        boolean z18 = (i6 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) != 0 ? notificationData.silent : z7;
        Map map3 = (i6 & KeyCommandDescriptor.ModifierFlags.COMMAND) != 0 ? notificationData.userInfo : map;
        boolean z19 = (i6 & KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD) != 0 ? notificationData.appDm : z8;
        String str104 = (i6 & 4194304) != 0 ? notificationData.notifTypeId : str30;
        String str105 = (i6 & 8388608) != 0 ? notificationData.notifInstanceId : str31;
        String str106 = (i6 & PointerEventHelper.X_FLAG_SUPPORTS_HOVER) != 0 ? notificationData.joinId : str32;
        String str107 = (i6 & 33554432) != 0 ? notificationData.mentionType : str33;
        String str108 = (i6 & 67108864) != 0 ? notificationData.appState : str34;
        String str109 = (i6 & 134217728) != 0 ? notificationData.inviteGuildName : str35;
        String str110 = (i6 & 268435456) != 0 ? notificationData.inviteChannelName : str36;
        Integer num33 = (i6 & 536870912) != 0 ? notificationData.inviteTitleVariant : num11;
        String str111 = (i6 & 1073741824) != 0 ? notificationData.pollQuestion : str37;
        long j7 = (i6 & Integer.MIN_VALUE) != 0 ? notificationData.sentAtMillis : j;
        if ((i10 & 1) != 0) {
            j5 = j7;
            z11 = notificationData.isSpoilerChannel;
            z12 = z18;
            map2 = map3;
            z13 = z19;
            str39 = str104;
            str40 = str105;
            str41 = str106;
            str42 = str107;
            str43 = str108;
            str44 = str109;
            str45 = str110;
            num13 = num33;
            str46 = str111;
            userId3 = userId6;
            str47 = str95;
            str48 = str96;
            str49 = str97;
            str50 = str98;
            str51 = str99;
            str52 = str100;
            bool2 = bool3;
            str53 = str101;
            str54 = str102;
            num14 = num30;
            num15 = num31;
            num12 = num32;
            str38 = str103;
            num16 = num28;
            guildId2 = guildId3;
            str57 = str88;
            str58 = str89;
            str59 = str90;
            num17 = num29;
            str60 = str91;
            applicationId2 = applicationId3;
            str61 = str92;
            str62 = str93;
            notificationMessage2 = notificationMessage3;
            str63 = str94;
            z14 = z16;
            z15 = z17;
            str64 = str82;
            channelId3 = channelId5;
            str66 = str79;
            str67 = str80;
            channelId4 = channelId6;
            num19 = num26;
            list2 = list3;
            userId4 = userId5;
            str68 = str83;
            str69 = str84;
            num20 = num27;
            str70 = str85;
            str55 = str86;
            str56 = str87;
            str71 = str75;
            num21 = num23;
            str72 = str76;
            num22 = num24;
            str73 = str77;
            l7 = l10;
            num18 = num25;
            str65 = str78;
        } else {
            z11 = z10;
            j5 = j7;
            num12 = num32;
            str38 = str103;
            z12 = z18;
            map2 = map3;
            z13 = z19;
            str39 = str104;
            str40 = str105;
            str41 = str106;
            str42 = str107;
            str43 = str108;
            str44 = str109;
            str45 = str110;
            num13 = num33;
            str46 = str111;
            z14 = z16;
            z15 = z17;
            userId3 = userId6;
            str47 = str95;
            str48 = str96;
            str49 = str97;
            str50 = str98;
            str51 = str99;
            str52 = str100;
            bool2 = bool3;
            str53 = str101;
            str54 = str102;
            num14 = num30;
            num15 = num31;
            str55 = str86;
            str56 = str87;
            num16 = num28;
            guildId2 = guildId3;
            str57 = str88;
            str58 = str89;
            str59 = str90;
            num17 = num29;
            str60 = str91;
            applicationId2 = applicationId3;
            str61 = str92;
            str62 = str93;
            notificationMessage2 = notificationMessage3;
            str63 = str94;
            str64 = str82;
            num18 = num25;
            str65 = str78;
            channelId3 = channelId5;
            str66 = str79;
            str67 = str80;
            channelId4 = channelId6;
            num19 = num26;
            list2 = list3;
            userId4 = userId5;
            str68 = str83;
            str69 = str84;
            num20 = num27;
            str70 = str85;
            str71 = str75;
            num21 = num23;
            str72 = str76;
            num22 = num24;
            str73 = str77;
            l7 = l10;
        }
        return notificationData.m1121copykb5oZcE(str81, str71, num21, str72, num22, str73, l7, num18, str65, channelId3, str66, str67, channelId4, num19, str64, list2, userId4, str68, str69, num20, str70, str55, str56, num16, guildId2, str57, str58, str59, num17, str60, applicationId2, str61, str62, notificationMessage2, str63, z14, z15, userId3, str47, str48, str49, str50, str51, str52, bool2, str53, str54, num14, num15, num12, str38, z12, map2, z13, str39, str40, str41, str42, str43, str44, str45, num13, str46, j5, z11);
    }

    @e(with = ChannelListSerializer.class)
    public static /* synthetic */ void getAckChannelIds$annotations() {
    }

    public static /* synthetic */ void getActivityInstanceId$annotations() {
    }

    public static /* synthetic */ void getActivityName$annotations() {
    }

    public static /* synthetic */ void getActivityType$annotations() {
    }

    public static /* synthetic */ void getAppDm$annotations() {
    }

    public static /* synthetic */ void getAppState$annotations() {
    }

    public static /* synthetic */ void getApplicationIcon$annotations() {
    }

    /* renamed from: getApplicationId-UtIrSio$annotations, reason: not valid java name */
    public static /* synthetic */ void m1107getApplicationIdUtIrSio$annotations() {
    }

    public static /* synthetic */ void getApplicationName$annotations() {
    }

    public static /* synthetic */ void getAttachmentTextVariant$annotations() {
    }

    @e(with = CanReplySerializer.class)
    public static /* synthetic */ void getCanReply$annotations() {
    }

    public static /* synthetic */ void getChannelIcon$annotations() {
    }

    /* renamed from: getChannelId-qMVnFVQ$annotations, reason: not valid java name */
    public static /* synthetic */ void m1108getChannelIdqMVnFVQ$annotations() {
    }

    public static /* synthetic */ void getChannelName$annotations() {
    }

    public static /* synthetic */ void getChannelRtcRegion$annotations() {
    }

    public static /* synthetic */ void getChannelType$annotations() {
    }

    public static /* synthetic */ void getDeeplink$annotations() {
    }

    public static /* synthetic */ void getErgoImageAttachmentUrl$annotations() {
    }

    public static /* synthetic */ void getExpandSubtitle$annotations() {
    }

    public static /* synthetic */ void getGuildIcon$annotations() {
    }

    /* renamed from: getGuildId-qOKuAAo$annotations, reason: not valid java name */
    public static /* synthetic */ void m1109getGuildIdqOKuAAo$annotations() {
    }

    public static /* synthetic */ void getGuildName$annotations() {
    }

    public static /* synthetic */ void getIconUrl$annotations() {
    }

    public static /* synthetic */ void getImageAttachmentCount$annotations() {
    }

    public static /* synthetic */ void getImageAttachmentUrl$annotations() {
    }

    public static /* synthetic */ void getInviteChannelName$annotations() {
    }

    public static /* synthetic */ void getInviteGuildName$annotations() {
    }

    public static /* synthetic */ void getInviteTitleVariant$annotations() {
    }

    public static /* synthetic */ void getJoinId$annotations() {
    }

    public static /* synthetic */ void getMentionType$annotations() {
    }

    @e(with = NotificationMessageSerializer.class)
    public static /* synthetic */ void getMessage$annotations() {
    }

    public static /* synthetic */ void getMessageActivityType$annotations() {
    }

    public static /* synthetic */ void getMessageApplicationName$annotations() {
    }

    public static /* synthetic */ void getMessageContent$annotations() {
    }

    public static /* synthetic */ void getMessageFlags$annotations() {
    }

    /* renamed from: getMessageId-N_6c4I0$annotations, reason: not valid java name */
    public static /* synthetic */ void m1110getMessageIdN_6c4I0$annotations() {
    }

    public static /* synthetic */ void getMessageReferenceType$annotations() {
    }

    public static /* synthetic */ void getMessageType$annotations() {
    }

    public static /* synthetic */ void getNotifInstanceId$annotations() {
    }

    public static /* synthetic */ void getNotifTypeId$annotations() {
    }

    public static /* synthetic */ void getNotificationChannel$annotations() {
    }

    /* renamed from: getParentId-qMVnFVQ$annotations, reason: not valid java name */
    public static /* synthetic */ void m1111getParentIdqMVnFVQ$annotations() {
    }

    public static /* synthetic */ void getParentName$annotations() {
    }

    public static /* synthetic */ void getPlatformUserUsername$annotations() {
    }

    public static /* synthetic */ void getPollQuestion$annotations() {
    }

    /* renamed from: getReceivingUserId-wUX8bhU$annotations, reason: not valid java name */
    public static /* synthetic */ void m1112getReceivingUserIdwUX8bhU$annotations() {
    }

    public static /* synthetic */ void getRelationshipType$annotations() {
    }

    public static /* synthetic */ void getSentAtMillis$annotations() {
    }

    public static /* synthetic */ void getSilent$annotations() {
    }

    public static /* synthetic */ void getStageInstanceTopic$annotations() {
    }

    public static /* synthetic */ void getSubtitle$annotations() {
    }

    public static /* synthetic */ void getTimeReceived$annotations() {
    }

    public static /* synthetic */ void getTitle$annotations() {
    }

    public static /* synthetic */ void getTrackingType$annotations() {
    }

    public static /* synthetic */ void getType$annotations() {
    }

    public static /* synthetic */ void getUserAvatar$annotations() {
    }

    public static /* synthetic */ void getUserDiscriminator$annotations() {
    }

    public static /* synthetic */ void getUserGlobalName$annotations() {
    }

    public static /* synthetic */ void getUserGuildAvatar$annotations() {
    }

    /* renamed from: getUserId-wUX8bhU$annotations, reason: not valid java name */
    public static /* synthetic */ void m1113getUserIdwUX8bhU$annotations() {
    }

    public static /* synthetic */ void getUserInfo$annotations() {
    }

    public static /* synthetic */ void getUserUsername$annotations() {
    }

    public static /* synthetic */ void getVideoAttachmentCount$annotations() {
    }

    public static /* synthetic */ void isFromCurrentUser$annotations() {
    }

    public static /* synthetic */ void isSpoilerChannel$annotations() {
    }

    public static final void write$Self$notification_api_release(NotificationData self, CompositeEncoder output, SerialDescriptor serialDesc) {
        Lazy[] lazyArr = $childSerializers;
        output.y(serialDesc, 0, self.type);
        if (output.I(serialDesc, 1) || self.messageId != null) {
            MessageId$$serializer messageId$$serializer = MessageId$$serializer.INSTANCE;
            String str = self.messageId;
            output.z(serialDesc, 1, messageId$$serializer, str != null ? MessageId.m1189boximpl(str) : null);
        }
        if (output.I(serialDesc, 2) || self.messageActivityType != null) {
            output.z(serialDesc, 2, o0.a, self.messageActivityType);
        }
        if (output.I(serialDesc, 3) || self.messageApplicationName != null) {
            output.z(serialDesc, 3, v1.a, self.messageApplicationName);
        }
        if (output.I(serialDesc, 4) || self.messageType != null) {
            output.z(serialDesc, 4, o0.a, self.messageType);
        }
        if (output.I(serialDesc, 5) || self.messageContent != null) {
            output.z(serialDesc, 5, v1.a, self.messageContent);
        }
        if (output.I(serialDesc, 6) || self.messageFlags != null) {
            output.z(serialDesc, 6, t0.a, self.messageFlags);
        }
        if (output.I(serialDesc, 7) || self.channelType != null) {
            output.z(serialDesc, 7, o0.a, self.channelType);
        }
        if (output.I(serialDesc, 8) || self.channelName != null) {
            output.z(serialDesc, 8, v1.a, self.channelName);
        }
        if (output.I(serialDesc, 9) || self.channelId != null) {
            output.z(serialDesc, 9, ChannelId$$serializer.INSTANCE, self.channelId);
        }
        if (output.I(serialDesc, 10) || self.channelIcon != null) {
            output.z(serialDesc, 10, v1.a, self.channelIcon);
        }
        if (output.I(serialDesc, 11) || self.parentName != null) {
            output.z(serialDesc, 11, v1.a, self.parentName);
        }
        if (output.I(serialDesc, 12) || self.parentId != null) {
            output.z(serialDesc, 12, ChannelId$$serializer.INSTANCE, self.parentId);
        }
        if (output.I(serialDesc, 13) || self.messageReferenceType != null) {
            output.z(serialDesc, 13, o0.a, self.messageReferenceType);
        }
        if (output.I(serialDesc, 14) || self.channelRtcRegion != null) {
            output.z(serialDesc, 14, v1.a, self.channelRtcRegion);
        }
        if (output.I(serialDesc, 15) || !Intrinsics.areEqual(self.ackChannelIds, m0.f13512d)) {
            output.g(serialDesc, 15, ChannelListSerializer.INSTANCE, self.ackChannelIds);
        }
        if (output.I(serialDesc, 16) || self.userId != null) {
            output.z(serialDesc, 16, UserId$$serializer.INSTANCE, self.userId);
        }
        if (output.I(serialDesc, 17) || self.userUsername != null) {
            output.z(serialDesc, 17, v1.a, self.userUsername);
        }
        if (output.I(serialDesc, 18) || self.userGlobalName != null) {
            output.z(serialDesc, 18, v1.a, self.userGlobalName);
        }
        if (output.I(serialDesc, 19) || self.userDiscriminator != null) {
            output.z(serialDesc, 19, o0.a, self.userDiscriminator);
        }
        if (output.I(serialDesc, 20) || self.userAvatar != null) {
            output.z(serialDesc, 20, v1.a, self.userAvatar);
        }
        if (output.I(serialDesc, 21) || self.userGuildAvatar != null) {
            output.z(serialDesc, 21, v1.a, self.userGuildAvatar);
        }
        if (output.I(serialDesc, 22) || self.platformUserUsername != null) {
            output.z(serialDesc, 22, v1.a, self.platformUserUsername);
        }
        if (output.I(serialDesc, 23) || self.relationshipType != null) {
            output.z(serialDesc, 23, o0.a, self.relationshipType);
        }
        if (output.I(serialDesc, 24) || self.guildId != null) {
            output.z(serialDesc, 24, GuildId$$serializer.INSTANCE, self.guildId);
        }
        if (output.I(serialDesc, 25) || self.guildName != null) {
            output.z(serialDesc, 25, v1.a, self.guildName);
        }
        if (output.I(serialDesc, 26) || self.guildIcon != null) {
            output.z(serialDesc, 26, v1.a, self.guildIcon);
        }
        if (output.I(serialDesc, 27) || self.activityInstanceId != null) {
            output.z(serialDesc, 27, v1.a, self.activityInstanceId);
        }
        if (output.I(serialDesc, 28) || self.activityType != null) {
            output.z(serialDesc, 28, o0.a, self.activityType);
        }
        if (output.I(serialDesc, 29) || self.activityName != null) {
            output.z(serialDesc, 29, v1.a, self.activityName);
        }
        if (output.I(serialDesc, 30) || self.applicationId != null) {
            output.z(serialDesc, 30, ApplicationId$$serializer.INSTANCE, self.applicationId);
        }
        if (output.I(serialDesc, 31) || self.applicationName != null) {
            output.z(serialDesc, 31, v1.a, self.applicationName);
        }
        if (output.I(serialDesc, 32) || self.applicationIcon != null) {
            output.z(serialDesc, 32, v1.a, self.applicationIcon);
        }
        if (output.I(serialDesc, 33) || self.message != null) {
            output.z(serialDesc, 33, NotificationMessageSerializer.INSTANCE, self.message);
        }
        if (output.I(serialDesc, 34) || self.stageInstanceTopic != null) {
            output.z(serialDesc, 34, v1.a, self.stageInstanceTopic);
        }
        if (output.I(serialDesc, 35) || self.canReply) {
            output.g(serialDesc, 35, CanReplySerializer.INSTANCE, Boolean.valueOf(self.canReply));
        }
        if (output.I(serialDesc, 36) || self.isFromCurrentUser) {
            output.x(serialDesc, 36, self.isFromCurrentUser);
        }
        if (output.I(serialDesc, 37) || self.receivingUserId != null) {
            output.z(serialDesc, 37, UserId$$serializer.INSTANCE, self.receivingUserId);
        }
        if (output.I(serialDesc, 38) || self.title != null) {
            output.z(serialDesc, 38, v1.a, self.title);
        }
        if (output.I(serialDesc, 39) || self.subtitle != null) {
            output.z(serialDesc, 39, v1.a, self.subtitle);
        }
        if (output.I(serialDesc, 40) || self.iconUrl != null) {
            output.z(serialDesc, 40, v1.a, self.iconUrl);
        }
        if (output.I(serialDesc, 41) || self.notificationChannel != null) {
            output.z(serialDesc, 41, v1.a, self.notificationChannel);
        }
        if (output.I(serialDesc, 42) || self.trackingType != null) {
            output.z(serialDesc, 42, v1.a, self.trackingType);
        }
        if (output.I(serialDesc, 43) || self.deeplink != null) {
            output.z(serialDesc, 43, v1.a, self.deeplink);
        }
        if (output.I(serialDesc, 44) || !Intrinsics.areEqual(self.expandSubtitle, Boolean.FALSE)) {
            output.z(serialDesc, 44, g.a, self.expandSubtitle);
        }
        if (output.I(serialDesc, 45) || self.imageAttachmentUrl != null) {
            output.z(serialDesc, 45, v1.a, self.imageAttachmentUrl);
        }
        if (output.I(serialDesc, 46) || self.ergoImageAttachmentUrl != null) {
            output.z(serialDesc, 46, v1.a, self.ergoImageAttachmentUrl);
        }
        if (output.I(serialDesc, 47) || self.attachmentTextVariant != null) {
            output.z(serialDesc, 47, o0.a, self.attachmentTextVariant);
        }
        if (output.I(serialDesc, 48) || self.imageAttachmentCount != null) {
            output.z(serialDesc, 48, o0.a, self.imageAttachmentCount);
        }
        if (output.I(serialDesc, 49) || self.videoAttachmentCount != null) {
            output.z(serialDesc, 49, o0.a, self.videoAttachmentCount);
        }
        if (output.I(serialDesc, 50) || self.timeReceived != null) {
            output.z(serialDesc, 50, v1.a, self.timeReceived);
        }
        if (output.I(serialDesc, 51) || self.silent) {
            output.x(serialDesc, 51, self.silent);
        }
        if (output.I(serialDesc, 52) || !Intrinsics.areEqual(self.userInfo, v0.d())) {
            output.g(serialDesc, 52, (KSerializer) lazyArr[52].getValue(), self.userInfo);
        }
        if (output.I(serialDesc, 53) || self.appDm) {
            output.x(serialDesc, 53, self.appDm);
        }
        if (output.I(serialDesc, 54) || self.notifTypeId != null) {
            output.z(serialDesc, 54, v1.a, self.notifTypeId);
        }
        if (output.I(serialDesc, 55) || self.notifInstanceId != null) {
            output.z(serialDesc, 55, v1.a, self.notifInstanceId);
        }
        if (output.I(serialDesc, 56) || self.joinId != null) {
            output.z(serialDesc, 56, v1.a, self.joinId);
        }
        if (output.I(serialDesc, 57) || self.mentionType != null) {
            output.z(serialDesc, 57, v1.a, self.mentionType);
        }
        if (output.I(serialDesc, 58) || self.appState != null) {
            output.z(serialDesc, 58, v1.a, self.appState);
        }
        if (output.I(serialDesc, 59) || self.inviteGuildName != null) {
            output.z(serialDesc, 59, v1.a, self.inviteGuildName);
        }
        if (output.I(serialDesc, 60) || self.inviteChannelName != null) {
            output.z(serialDesc, 60, v1.a, self.inviteChannelName);
        }
        if (output.I(serialDesc, 61) || self.inviteTitleVariant != null) {
            output.z(serialDesc, 61, o0.a, self.inviteTitleVariant);
        }
        if (output.I(serialDesc, 62) || self.pollQuestion != null) {
            output.z(serialDesc, 62, v1.a, self.pollQuestion);
        }
        if (output.I(serialDesc, 63) || self.sentAtMillis != System.currentTimeMillis()) {
            output.P(serialDesc, 63, self.sentAtMillis);
        }
        if (output.I(serialDesc, 64) || self.isSpoilerChannel) {
            output.x(serialDesc, 64, self.isSpoilerChannel);
        }
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getType() {
        return this.type;
    }

    /* renamed from: component10-qMVnFVQ, reason: not valid java name and from getter */
    public final ChannelId getChannelId() {
        return this.channelId;
    }

    /* renamed from: component11, reason: from getter */
    public final String getChannelIcon() {
        return this.channelIcon;
    }

    /* renamed from: component12, reason: from getter */
    public final String getParentName() {
        return this.parentName;
    }

    /* renamed from: component13-qMVnFVQ, reason: not valid java name and from getter */
    public final ChannelId getParentId() {
        return this.parentId;
    }

    /* renamed from: component14, reason: from getter */
    public final Integer getMessageReferenceType() {
        return this.messageReferenceType;
    }

    /* renamed from: component15, reason: from getter */
    public final String getChannelRtcRegion() {
        return this.channelRtcRegion;
    }

    @NotNull
    public final List<ChannelId> component16() {
        return this.ackChannelIds;
    }

    /* renamed from: component17-wUX8bhU, reason: not valid java name and from getter */
    public final UserId getUserId() {
        return this.userId;
    }

    /* renamed from: component18, reason: from getter */
    public final String getUserUsername() {
        return this.userUsername;
    }

    /* renamed from: component19, reason: from getter */
    public final String getUserGlobalName() {
        return this.userGlobalName;
    }

    /* renamed from: component2-N_6c4I0, reason: not valid java name and from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    /* renamed from: component20, reason: from getter */
    public final Integer getUserDiscriminator() {
        return this.userDiscriminator;
    }

    /* renamed from: component21, reason: from getter */
    public final String getUserAvatar() {
        return this.userAvatar;
    }

    /* renamed from: component22, reason: from getter */
    public final String getUserGuildAvatar() {
        return this.userGuildAvatar;
    }

    /* renamed from: component23, reason: from getter */
    public final String getPlatformUserUsername() {
        return this.platformUserUsername;
    }

    /* renamed from: component24, reason: from getter */
    public final Integer getRelationshipType() {
        return this.relationshipType;
    }

    /* renamed from: component25-qOKuAAo, reason: not valid java name and from getter */
    public final GuildId getGuildId() {
        return this.guildId;
    }

    /* renamed from: component26, reason: from getter */
    public final String getGuildName() {
        return this.guildName;
    }

    /* renamed from: component27, reason: from getter */
    public final String getGuildIcon() {
        return this.guildIcon;
    }

    /* renamed from: component28, reason: from getter */
    public final String getActivityInstanceId() {
        return this.activityInstanceId;
    }

    /* renamed from: component29, reason: from getter */
    public final Integer getActivityType() {
        return this.activityType;
    }

    /* renamed from: component3, reason: from getter */
    public final Integer getMessageActivityType() {
        return this.messageActivityType;
    }

    /* renamed from: component30, reason: from getter */
    public final String getActivityName() {
        return this.activityName;
    }

    /* renamed from: component31-UtIrSio, reason: not valid java name and from getter */
    public final ApplicationId getApplicationId() {
        return this.applicationId;
    }

    /* renamed from: component32, reason: from getter */
    public final String getApplicationName() {
        return this.applicationName;
    }

    /* renamed from: component33, reason: from getter */
    public final String getApplicationIcon() {
        return this.applicationIcon;
    }

    /* renamed from: component34, reason: from getter */
    public final NotificationMessage getMessage() {
        return this.message;
    }

    /* renamed from: component35, reason: from getter */
    public final String getStageInstanceTopic() {
        return this.stageInstanceTopic;
    }

    /* renamed from: component36, reason: from getter */
    public final boolean getCanReply() {
        return this.canReply;
    }

    /* renamed from: component37, reason: from getter */
    public final boolean getIsFromCurrentUser() {
        return this.isFromCurrentUser;
    }

    /* renamed from: component38-wUX8bhU, reason: not valid java name and from getter */
    public final UserId getReceivingUserId() {
        return this.receivingUserId;
    }

    /* renamed from: component39, reason: from getter */
    public final String getTitle() {
        return this.title;
    }

    /* renamed from: component4, reason: from getter */
    public final String getMessageApplicationName() {
        return this.messageApplicationName;
    }

    /* renamed from: component40, reason: from getter */
    public final String getSubtitle() {
        return this.subtitle;
    }

    /* renamed from: component41, reason: from getter */
    public final String getIconUrl() {
        return this.iconUrl;
    }

    /* renamed from: component42, reason: from getter */
    public final String getNotificationChannel() {
        return this.notificationChannel;
    }

    /* renamed from: component43, reason: from getter */
    public final String getTrackingType() {
        return this.trackingType;
    }

    /* renamed from: component44, reason: from getter */
    public final String getDeeplink() {
        return this.deeplink;
    }

    /* renamed from: component45, reason: from getter */
    public final Boolean getExpandSubtitle() {
        return this.expandSubtitle;
    }

    /* renamed from: component46, reason: from getter */
    public final String getImageAttachmentUrl() {
        return this.imageAttachmentUrl;
    }

    /* renamed from: component47, reason: from getter */
    public final String getErgoImageAttachmentUrl() {
        return this.ergoImageAttachmentUrl;
    }

    /* renamed from: component48, reason: from getter */
    public final Integer getAttachmentTextVariant() {
        return this.attachmentTextVariant;
    }

    /* renamed from: component49, reason: from getter */
    public final Integer getImageAttachmentCount() {
        return this.imageAttachmentCount;
    }

    /* renamed from: component5, reason: from getter */
    public final Integer getMessageType() {
        return this.messageType;
    }

    /* renamed from: component50, reason: from getter */
    public final Integer getVideoAttachmentCount() {
        return this.videoAttachmentCount;
    }

    /* renamed from: component51, reason: from getter */
    public final String getTimeReceived() {
        return this.timeReceived;
    }

    /* renamed from: component52, reason: from getter */
    public final boolean getSilent() {
        return this.silent;
    }

    @NotNull
    public final Map<String, String> component53() {
        return this.userInfo;
    }

    /* renamed from: component54, reason: from getter */
    public final boolean getAppDm() {
        return this.appDm;
    }

    /* renamed from: component55, reason: from getter */
    public final String getNotifTypeId() {
        return this.notifTypeId;
    }

    /* renamed from: component56, reason: from getter */
    public final String getNotifInstanceId() {
        return this.notifInstanceId;
    }

    /* renamed from: component57, reason: from getter */
    public final String getJoinId() {
        return this.joinId;
    }

    /* renamed from: component58, reason: from getter */
    public final String getMentionType() {
        return this.mentionType;
    }

    /* renamed from: component59, reason: from getter */
    public final String getAppState() {
        return this.appState;
    }

    /* renamed from: component6, reason: from getter */
    public final String getMessageContent() {
        return this.messageContent;
    }

    /* renamed from: component60, reason: from getter */
    public final String getInviteGuildName() {
        return this.inviteGuildName;
    }

    /* renamed from: component61, reason: from getter */
    public final String getInviteChannelName() {
        return this.inviteChannelName;
    }

    /* renamed from: component62, reason: from getter */
    public final Integer getInviteTitleVariant() {
        return this.inviteTitleVariant;
    }

    /* renamed from: component63, reason: from getter */
    public final String getPollQuestion() {
        return this.pollQuestion;
    }

    /* renamed from: component64, reason: from getter */
    public final long getSentAtMillis() {
        return this.sentAtMillis;
    }

    /* renamed from: component65, reason: from getter */
    public final boolean getIsSpoilerChannel() {
        return this.isSpoilerChannel;
    }

    /* renamed from: component7, reason: from getter */
    public final Long getMessageFlags() {
        return this.messageFlags;
    }

    /* renamed from: component8, reason: from getter */
    public final Integer getChannelType() {
        return this.channelType;
    }

    /* renamed from: component9, reason: from getter */
    public final String getChannelName() {
        return this.channelName;
    }

    @NotNull
    /* renamed from: copy-kb5oZcE, reason: not valid java name */
    public final NotificationData m1121copykb5oZcE(@NotNull String type, String messageId, Integer messageActivityType, String messageApplicationName, Integer messageType, String messageContent, Long messageFlags, Integer channelType, String channelName, ChannelId channelId, String channelIcon, String parentName, ChannelId parentId, Integer messageReferenceType, String channelRtcRegion, @NotNull List<ChannelId> ackChannelIds, UserId userId, String userUsername, String userGlobalName, Integer userDiscriminator, String userAvatar, String userGuildAvatar, String platformUserUsername, Integer relationshipType, GuildId guildId, String guildName, String guildIcon, String activityInstanceId, Integer activityType, String activityName, ApplicationId applicationId, String applicationName, String applicationIcon, NotificationMessage message, String stageInstanceTopic, boolean canReply, boolean isFromCurrentUser, UserId receivingUserId, String title, String subtitle, String iconUrl, String notificationChannel, String trackingType, String deeplink, Boolean expandSubtitle, String imageAttachmentUrl, String ergoImageAttachmentUrl, Integer attachmentTextVariant, Integer imageAttachmentCount, Integer videoAttachmentCount, String timeReceived, boolean silent, @NotNull Map<String, String> userInfo, boolean appDm, String notifTypeId, String notifInstanceId, String joinId, String mentionType, String appState, String inviteGuildName, String inviteChannelName, Integer inviteTitleVariant, String pollQuestion, long sentAtMillis, boolean isSpoilerChannel) {
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(ackChannelIds, "ackChannelIds");
        Intrinsics.checkNotNullParameter(userInfo, "userInfo");
        return new NotificationData(type, messageId, messageActivityType, messageApplicationName, messageType, messageContent, messageFlags, channelType, channelName, channelId, channelIcon, parentName, parentId, messageReferenceType, channelRtcRegion, ackChannelIds, userId, userUsername, userGlobalName, userDiscriminator, userAvatar, userGuildAvatar, platformUserUsername, relationshipType, guildId, guildName, guildIcon, activityInstanceId, activityType, activityName, applicationId, applicationName, applicationIcon, message, stageInstanceTopic, canReply, isFromCurrentUser, receivingUserId, title, subtitle, iconUrl, notificationChannel, trackingType, deeplink, expandSubtitle, imageAttachmentUrl, ergoImageAttachmentUrl, attachmentTextVariant, imageAttachmentCount, videoAttachmentCount, timeReceived, silent, userInfo, appDm, notifTypeId, notifInstanceId, joinId, mentionType, appState, inviteGuildName, inviteChannelName, inviteTitleVariant, pollQuestion, sentAtMillis, isSpoilerChannel, null);
    }

    public boolean equals(Object other) {
        boolean m1193equalsimpl0;
        if (this == other) {
            return true;
        }
        if (!(other instanceof NotificationData)) {
            return false;
        }
        NotificationData notificationData = (NotificationData) other;
        if (!Intrinsics.areEqual(this.type, notificationData.type)) {
            return false;
        }
        String str = this.messageId;
        String str2 = notificationData.messageId;
        if (str == null) {
            if (str2 == null) {
                m1193equalsimpl0 = true;
            }
            m1193equalsimpl0 = false;
        } else {
            if (str2 != null) {
                m1193equalsimpl0 = MessageId.m1193equalsimpl0(str, str2);
            }
            m1193equalsimpl0 = false;
        }
        return m1193equalsimpl0 && Intrinsics.areEqual(this.messageActivityType, notificationData.messageActivityType) && Intrinsics.areEqual(this.messageApplicationName, notificationData.messageApplicationName) && Intrinsics.areEqual(this.messageType, notificationData.messageType) && Intrinsics.areEqual(this.messageContent, notificationData.messageContent) && Intrinsics.areEqual(this.messageFlags, notificationData.messageFlags) && Intrinsics.areEqual(this.channelType, notificationData.channelType) && Intrinsics.areEqual(this.channelName, notificationData.channelName) && Intrinsics.areEqual(this.channelId, notificationData.channelId) && Intrinsics.areEqual(this.channelIcon, notificationData.channelIcon) && Intrinsics.areEqual(this.parentName, notificationData.parentName) && Intrinsics.areEqual(this.parentId, notificationData.parentId) && Intrinsics.areEqual(this.messageReferenceType, notificationData.messageReferenceType) && Intrinsics.areEqual(this.channelRtcRegion, notificationData.channelRtcRegion) && Intrinsics.areEqual(this.ackChannelIds, notificationData.ackChannelIds) && Intrinsics.areEqual(this.userId, notificationData.userId) && Intrinsics.areEqual(this.userUsername, notificationData.userUsername) && Intrinsics.areEqual(this.userGlobalName, notificationData.userGlobalName) && Intrinsics.areEqual(this.userDiscriminator, notificationData.userDiscriminator) && Intrinsics.areEqual(this.userAvatar, notificationData.userAvatar) && Intrinsics.areEqual(this.userGuildAvatar, notificationData.userGuildAvatar) && Intrinsics.areEqual(this.platformUserUsername, notificationData.platformUserUsername) && Intrinsics.areEqual(this.relationshipType, notificationData.relationshipType) && Intrinsics.areEqual(this.guildId, notificationData.guildId) && Intrinsics.areEqual(this.guildName, notificationData.guildName) && Intrinsics.areEqual(this.guildIcon, notificationData.guildIcon) && Intrinsics.areEqual(this.activityInstanceId, notificationData.activityInstanceId) && Intrinsics.areEqual(this.activityType, notificationData.activityType) && Intrinsics.areEqual(this.activityName, notificationData.activityName) && Intrinsics.areEqual(this.applicationId, notificationData.applicationId) && Intrinsics.areEqual(this.applicationName, notificationData.applicationName) && Intrinsics.areEqual(this.applicationIcon, notificationData.applicationIcon) && Intrinsics.areEqual(this.message, notificationData.message) && Intrinsics.areEqual(this.stageInstanceTopic, notificationData.stageInstanceTopic) && this.canReply == notificationData.canReply && this.isFromCurrentUser == notificationData.isFromCurrentUser && Intrinsics.areEqual(this.receivingUserId, notificationData.receivingUserId) && Intrinsics.areEqual(this.title, notificationData.title) && Intrinsics.areEqual(this.subtitle, notificationData.subtitle) && Intrinsics.areEqual(this.iconUrl, notificationData.iconUrl) && Intrinsics.areEqual(this.notificationChannel, notificationData.notificationChannel) && Intrinsics.areEqual(this.trackingType, notificationData.trackingType) && Intrinsics.areEqual(this.deeplink, notificationData.deeplink) && Intrinsics.areEqual(this.expandSubtitle, notificationData.expandSubtitle) && Intrinsics.areEqual(this.imageAttachmentUrl, notificationData.imageAttachmentUrl) && Intrinsics.areEqual(this.ergoImageAttachmentUrl, notificationData.ergoImageAttachmentUrl) && Intrinsics.areEqual(this.attachmentTextVariant, notificationData.attachmentTextVariant) && Intrinsics.areEqual(this.imageAttachmentCount, notificationData.imageAttachmentCount) && Intrinsics.areEqual(this.videoAttachmentCount, notificationData.videoAttachmentCount) && Intrinsics.areEqual(this.timeReceived, notificationData.timeReceived) && this.silent == notificationData.silent && Intrinsics.areEqual(this.userInfo, notificationData.userInfo) && this.appDm == notificationData.appDm && Intrinsics.areEqual(this.notifTypeId, notificationData.notifTypeId) && Intrinsics.areEqual(this.notifInstanceId, notificationData.notifInstanceId) && Intrinsics.areEqual(this.joinId, notificationData.joinId) && Intrinsics.areEqual(this.mentionType, notificationData.mentionType) && Intrinsics.areEqual(this.appState, notificationData.appState) && Intrinsics.areEqual(this.inviteGuildName, notificationData.inviteGuildName) && Intrinsics.areEqual(this.inviteChannelName, notificationData.inviteChannelName) && Intrinsics.areEqual(this.inviteTitleVariant, notificationData.inviteTitleVariant) && Intrinsics.areEqual(this.pollQuestion, notificationData.pollQuestion) && this.sentAtMillis == notificationData.sentAtMillis && this.isSpoilerChannel == notificationData.isSpoilerChannel;
    }

    @NotNull
    public final List<ChannelId> getAckChannelIds() {
        return this.ackChannelIds;
    }

    public final String getActivityInstanceId() {
        return this.activityInstanceId;
    }

    public final String getActivityName() {
        return this.activityName;
    }

    public final Integer getActivityType() {
        return this.activityType;
    }

    public final boolean getAppDm() {
        return this.appDm;
    }

    public final String getAppState() {
        return this.appState;
    }

    public final String getApplicationIcon() {
        return this.applicationIcon;
    }

    /* renamed from: getApplicationId-UtIrSio, reason: not valid java name */
    public final ApplicationId m1122getApplicationIdUtIrSio() {
        return this.applicationId;
    }

    public final String getApplicationName() {
        return this.applicationName;
    }

    public final Integer getAttachmentTextVariant() {
        return this.attachmentTextVariant;
    }

    public final boolean getCanReply() {
        return this.canReply;
    }

    public final String getChannelIcon() {
        return this.channelIcon;
    }

    /* renamed from: getChannelId-qMVnFVQ, reason: not valid java name */
    public final ChannelId m1123getChannelIdqMVnFVQ() {
        return this.channelId;
    }

    public final String getChannelName() {
        return this.channelName;
    }

    public final String getChannelRtcRegion() {
        return this.channelRtcRegion;
    }

    public final Integer getChannelType() {
        return this.channelType;
    }

    public final String getDeeplink() {
        return this.deeplink;
    }

    public final String getErgoImageAttachmentUrl() {
        return this.ergoImageAttachmentUrl;
    }

    public final Boolean getExpandSubtitle() {
        return this.expandSubtitle;
    }

    public final String getGuildIcon() {
        return this.guildIcon;
    }

    /* renamed from: getGuildId-qOKuAAo, reason: not valid java name */
    public final GuildId m1124getGuildIdqOKuAAo() {
        return this.guildId;
    }

    public final String getGuildName() {
        return this.guildName;
    }

    public final String getIconUrl() {
        return this.iconUrl;
    }

    public final Integer getImageAttachmentCount() {
        return this.imageAttachmentCount;
    }

    public final String getImageAttachmentUrl() {
        return this.imageAttachmentUrl;
    }

    public final String getInviteChannelName() {
        return this.inviteChannelName;
    }

    public final String getInviteGuildName() {
        return this.inviteGuildName;
    }

    public final Integer getInviteTitleVariant() {
        return this.inviteTitleVariant;
    }

    public final String getJoinId() {
        return this.joinId;
    }

    public final String getMentionType() {
        return this.mentionType;
    }

    public final NotificationMessage getMessage() {
        return this.message;
    }

    public final Integer getMessageActivityType() {
        return this.messageActivityType;
    }

    public final String getMessageApplicationName() {
        return this.messageApplicationName;
    }

    public final String getMessageContent() {
        return this.messageContent;
    }

    public final Long getMessageFlags() {
        return this.messageFlags;
    }

    /* renamed from: getMessageId-N_6c4I0, reason: not valid java name */
    public final String m1125getMessageIdN_6c4I0() {
        return this.messageId;
    }

    public final Integer getMessageReferenceType() {
        return this.messageReferenceType;
    }

    public final Integer getMessageType() {
        return this.messageType;
    }

    public final String getNotifInstanceId() {
        return this.notifInstanceId;
    }

    public final String getNotifTypeId() {
        return this.notifTypeId;
    }

    public final String getNotificationChannel() {
        return this.notificationChannel;
    }

    /* renamed from: getParentId-qMVnFVQ, reason: not valid java name */
    public final ChannelId m1126getParentIdqMVnFVQ() {
        return this.parentId;
    }

    public final String getParentName() {
        return this.parentName;
    }

    public final String getPlatformUserUsername() {
        return this.platformUserUsername;
    }

    public final String getPollQuestion() {
        return this.pollQuestion;
    }

    /* renamed from: getReceivingUserId-wUX8bhU, reason: not valid java name */
    public final UserId m1127getReceivingUserIdwUX8bhU() {
        return this.receivingUserId;
    }

    public final Integer getRelationshipType() {
        return this.relationshipType;
    }

    public final long getSentAtMillis() {
        return this.sentAtMillis;
    }

    public final boolean getSilent() {
        return this.silent;
    }

    public final String getStageInstanceTopic() {
        return this.stageInstanceTopic;
    }

    public final String getSubtitle() {
        return this.subtitle;
    }

    public final String getTimeReceived() {
        return this.timeReceived;
    }

    public final String getTitle() {
        return this.title;
    }

    public final String getTrackingType() {
        return this.trackingType;
    }

    @NotNull
    public final String getType() {
        return this.type;
    }

    public final String getUserAvatar() {
        return this.userAvatar;
    }

    public final Integer getUserDiscriminator() {
        return this.userDiscriminator;
    }

    public final String getUserGlobalName() {
        return this.userGlobalName;
    }

    public final String getUserGuildAvatar() {
        return this.userGuildAvatar;
    }

    /* renamed from: getUserId-wUX8bhU, reason: not valid java name */
    public final UserId m1128getUserIdwUX8bhU() {
        return this.userId;
    }

    @NotNull
    public final Map<String, String> getUserInfo() {
        return this.userInfo;
    }

    public final String getUserUsername() {
        return this.userUsername;
    }

    public final Integer getVideoAttachmentCount() {
        return this.videoAttachmentCount;
    }

    public int hashCode() {
        int hashCode = this.type.hashCode() * 31;
        String str = this.messageId;
        int m1194hashCodeimpl = (hashCode + (str == null ? 0 : MessageId.m1194hashCodeimpl(str))) * 31;
        Integer num = this.messageActivityType;
        int hashCode2 = (m1194hashCodeimpl + (num == null ? 0 : num.hashCode())) * 31;
        String str2 = this.messageApplicationName;
        int hashCode3 = (hashCode2 + (str2 == null ? 0 : str2.hashCode())) * 31;
        Integer num2 = this.messageType;
        int hashCode4 = (hashCode3 + (num2 == null ? 0 : num2.hashCode())) * 31;
        String str3 = this.messageContent;
        int hashCode5 = (hashCode4 + (str3 == null ? 0 : str3.hashCode())) * 31;
        Long l6 = this.messageFlags;
        int hashCode6 = (hashCode5 + (l6 == null ? 0 : l6.hashCode())) * 31;
        Integer num3 = this.channelType;
        int hashCode7 = (hashCode6 + (num3 == null ? 0 : num3.hashCode())) * 31;
        String str4 = this.channelName;
        int hashCode8 = (hashCode7 + (str4 == null ? 0 : str4.hashCode())) * 31;
        ChannelId channelId = this.channelId;
        int m1168hashCodeimpl = (hashCode8 + (channelId == null ? 0 : ChannelId.m1168hashCodeimpl(channelId.m1172unboximpl()))) * 31;
        String str5 = this.channelIcon;
        int hashCode9 = (m1168hashCodeimpl + (str5 == null ? 0 : str5.hashCode())) * 31;
        String str6 = this.parentName;
        int hashCode10 = (hashCode9 + (str6 == null ? 0 : str6.hashCode())) * 31;
        ChannelId channelId2 = this.parentId;
        int m1168hashCodeimpl2 = (hashCode10 + (channelId2 == null ? 0 : ChannelId.m1168hashCodeimpl(channelId2.m1172unboximpl()))) * 31;
        Integer num4 = this.messageReferenceType;
        int hashCode11 = (m1168hashCodeimpl2 + (num4 == null ? 0 : num4.hashCode())) * 31;
        String str7 = this.channelRtcRegion;
        int e9 = a3.e.e(this.ackChannelIds, (hashCode11 + (str7 == null ? 0 : str7.hashCode())) * 31, 31);
        UserId userId = this.userId;
        int m1246hashCodeimpl = (e9 + (userId == null ? 0 : UserId.m1246hashCodeimpl(userId.m1250unboximpl()))) * 31;
        String str8 = this.userUsername;
        int hashCode12 = (m1246hashCodeimpl + (str8 == null ? 0 : str8.hashCode())) * 31;
        String str9 = this.userGlobalName;
        int hashCode13 = (hashCode12 + (str9 == null ? 0 : str9.hashCode())) * 31;
        Integer num5 = this.userDiscriminator;
        int hashCode14 = (hashCode13 + (num5 == null ? 0 : num5.hashCode())) * 31;
        String str10 = this.userAvatar;
        int hashCode15 = (hashCode14 + (str10 == null ? 0 : str10.hashCode())) * 31;
        String str11 = this.userGuildAvatar;
        int hashCode16 = (hashCode15 + (str11 == null ? 0 : str11.hashCode())) * 31;
        String str12 = this.platformUserUsername;
        int hashCode17 = (hashCode16 + (str12 == null ? 0 : str12.hashCode())) * 31;
        Integer num6 = this.relationshipType;
        int hashCode18 = (hashCode17 + (num6 == null ? 0 : num6.hashCode())) * 31;
        GuildId guildId = this.guildId;
        int m1181hashCodeimpl = (hashCode18 + (guildId == null ? 0 : GuildId.m1181hashCodeimpl(guildId.m1185unboximpl()))) * 31;
        String str13 = this.guildName;
        int hashCode19 = (m1181hashCodeimpl + (str13 == null ? 0 : str13.hashCode())) * 31;
        String str14 = this.guildIcon;
        int hashCode20 = (hashCode19 + (str14 == null ? 0 : str14.hashCode())) * 31;
        String str15 = this.activityInstanceId;
        int hashCode21 = (hashCode20 + (str15 == null ? 0 : str15.hashCode())) * 31;
        Integer num7 = this.activityType;
        int hashCode22 = (hashCode21 + (num7 == null ? 0 : num7.hashCode())) * 31;
        String str16 = this.activityName;
        int hashCode23 = (hashCode22 + (str16 == null ? 0 : str16.hashCode())) * 31;
        ApplicationId applicationId = this.applicationId;
        int m1155hashCodeimpl = (hashCode23 + (applicationId == null ? 0 : ApplicationId.m1155hashCodeimpl(applicationId.m1159unboximpl()))) * 31;
        String str17 = this.applicationName;
        int hashCode24 = (m1155hashCodeimpl + (str17 == null ? 0 : str17.hashCode())) * 31;
        String str18 = this.applicationIcon;
        int hashCode25 = (hashCode24 + (str18 == null ? 0 : str18.hashCode())) * 31;
        NotificationMessage notificationMessage = this.message;
        int hashCode26 = (hashCode25 + (notificationMessage == null ? 0 : notificationMessage.hashCode())) * 31;
        String str19 = this.stageInstanceTopic;
        int d6 = d.d(d.d((hashCode26 + (str19 == null ? 0 : str19.hashCode())) * 31, 31, this.canReply), 31, this.isFromCurrentUser);
        UserId userId2 = this.receivingUserId;
        int m1246hashCodeimpl2 = (d6 + (userId2 == null ? 0 : UserId.m1246hashCodeimpl(userId2.m1250unboximpl()))) * 31;
        String str20 = this.title;
        int hashCode27 = (m1246hashCodeimpl2 + (str20 == null ? 0 : str20.hashCode())) * 31;
        String str21 = this.subtitle;
        int hashCode28 = (hashCode27 + (str21 == null ? 0 : str21.hashCode())) * 31;
        String str22 = this.iconUrl;
        int hashCode29 = (hashCode28 + (str22 == null ? 0 : str22.hashCode())) * 31;
        String str23 = this.notificationChannel;
        int hashCode30 = (hashCode29 + (str23 == null ? 0 : str23.hashCode())) * 31;
        String str24 = this.trackingType;
        int hashCode31 = (hashCode30 + (str24 == null ? 0 : str24.hashCode())) * 31;
        String str25 = this.deeplink;
        int hashCode32 = (hashCode31 + (str25 == null ? 0 : str25.hashCode())) * 31;
        Boolean bool = this.expandSubtitle;
        int hashCode33 = (hashCode32 + (bool == null ? 0 : bool.hashCode())) * 31;
        String str26 = this.imageAttachmentUrl;
        int hashCode34 = (hashCode33 + (str26 == null ? 0 : str26.hashCode())) * 31;
        String str27 = this.ergoImageAttachmentUrl;
        int hashCode35 = (hashCode34 + (str27 == null ? 0 : str27.hashCode())) * 31;
        Integer num8 = this.attachmentTextVariant;
        int hashCode36 = (hashCode35 + (num8 == null ? 0 : num8.hashCode())) * 31;
        Integer num9 = this.imageAttachmentCount;
        int hashCode37 = (hashCode36 + (num9 == null ? 0 : num9.hashCode())) * 31;
        Integer num10 = this.videoAttachmentCount;
        int hashCode38 = (hashCode37 + (num10 == null ? 0 : num10.hashCode())) * 31;
        String str28 = this.timeReceived;
        int d7 = d.d((this.userInfo.hashCode() + d.d((hashCode38 + (str28 == null ? 0 : str28.hashCode())) * 31, 31, this.silent)) * 31, 31, this.appDm);
        String str29 = this.notifTypeId;
        int hashCode39 = (d7 + (str29 == null ? 0 : str29.hashCode())) * 31;
        String str30 = this.notifInstanceId;
        int hashCode40 = (hashCode39 + (str30 == null ? 0 : str30.hashCode())) * 31;
        String str31 = this.joinId;
        int hashCode41 = (hashCode40 + (str31 == null ? 0 : str31.hashCode())) * 31;
        String str32 = this.mentionType;
        int hashCode42 = (hashCode41 + (str32 == null ? 0 : str32.hashCode())) * 31;
        String str33 = this.appState;
        int hashCode43 = (hashCode42 + (str33 == null ? 0 : str33.hashCode())) * 31;
        String str34 = this.inviteGuildName;
        int hashCode44 = (hashCode43 + (str34 == null ? 0 : str34.hashCode())) * 31;
        String str35 = this.inviteChannelName;
        int hashCode45 = (hashCode44 + (str35 == null ? 0 : str35.hashCode())) * 31;
        Integer num11 = this.inviteTitleVariant;
        int hashCode46 = (hashCode45 + (num11 == null ? 0 : num11.hashCode())) * 31;
        String str36 = this.pollQuestion;
        return Boolean.hashCode(this.isSpoilerChannel) + com.discord.chat.bridge.botuikit.a.g(this.sentAtMillis, (hashCode46 + (str36 != null ? str36.hashCode() : 0)) * 31, 31);
    }

    public final boolean isFromCurrentUser() {
        return this.isFromCurrentUser;
    }

    public final boolean isSpoilerChannel() {
        return this.isSpoilerChannel;
    }

    @NotNull
    public String toString() {
        String str = this.type;
        String str2 = this.messageId;
        String m1196toStringimpl = str2 == null ? "null" : MessageId.m1196toStringimpl(str2);
        Integer num = this.messageActivityType;
        String str3 = this.messageApplicationName;
        Integer num2 = this.messageType;
        String str4 = this.messageContent;
        Long l6 = this.messageFlags;
        Integer num3 = this.channelType;
        String str5 = this.channelName;
        ChannelId channelId = this.channelId;
        String str6 = this.channelIcon;
        String str7 = this.parentName;
        ChannelId channelId2 = this.parentId;
        Integer num4 = this.messageReferenceType;
        String str8 = this.channelRtcRegion;
        List<ChannelId> list = this.ackChannelIds;
        UserId userId = this.userId;
        String str9 = this.userUsername;
        String str10 = this.userGlobalName;
        Integer num5 = this.userDiscriminator;
        String str11 = this.userAvatar;
        String str12 = this.userGuildAvatar;
        String str13 = this.platformUserUsername;
        Integer num6 = this.relationshipType;
        GuildId guildId = this.guildId;
        String str14 = this.guildName;
        String str15 = this.guildIcon;
        String str16 = this.activityInstanceId;
        Integer num7 = this.activityType;
        String str17 = this.activityName;
        ApplicationId applicationId = this.applicationId;
        String str18 = this.applicationName;
        String str19 = this.applicationIcon;
        NotificationMessage notificationMessage = this.message;
        String str20 = this.stageInstanceTopic;
        boolean z5 = this.canReply;
        boolean z6 = this.isFromCurrentUser;
        UserId userId2 = this.receivingUserId;
        String str21 = this.title;
        String str22 = this.subtitle;
        String str23 = this.iconUrl;
        String str24 = this.notificationChannel;
        String str25 = this.trackingType;
        String str26 = this.deeplink;
        Boolean bool = this.expandSubtitle;
        String str27 = this.imageAttachmentUrl;
        String str28 = this.ergoImageAttachmentUrl;
        Integer num8 = this.attachmentTextVariant;
        Integer num9 = this.imageAttachmentCount;
        Integer num10 = this.videoAttachmentCount;
        String str29 = this.timeReceived;
        boolean z7 = this.silent;
        Map<String, String> map = this.userInfo;
        boolean z8 = this.appDm;
        String str30 = this.notifTypeId;
        String str31 = this.notifInstanceId;
        String str32 = this.joinId;
        String str33 = this.mentionType;
        String str34 = this.appState;
        String str35 = this.inviteGuildName;
        String str36 = this.inviteChannelName;
        Integer num11 = this.inviteTitleVariant;
        String str37 = this.pollQuestion;
        long j = this.sentAtMillis;
        boolean z10 = this.isSpoilerChannel;
        StringBuilder t5 = a3.e.t("NotificationData(type=", str, ", messageId=", m1196toStringimpl, ", messageActivityType=");
        d.r(num, ", messageApplicationName=", str3, ", messageType=", t5);
        d.r(num2, ", messageContent=", str4, ", messageFlags=", t5);
        t5.append(l6);
        t5.append(", channelType=");
        t5.append(num3);
        t5.append(", channelName=");
        t5.append(str5);
        t5.append(", channelId=");
        t5.append(channelId);
        t5.append(", channelIcon=");
        a3.e.A(t5, str6, ", parentName=", str7, ", parentId=");
        t5.append(channelId2);
        t5.append(", messageReferenceType=");
        t5.append(num4);
        t5.append(", channelRtcRegion=");
        t5.append(str8);
        t5.append(", ackChannelIds=");
        t5.append(list);
        t5.append(", userId=");
        t5.append(userId);
        t5.append(", userUsername=");
        t5.append(str9);
        t5.append(", userGlobalName=");
        com.discord.chat.bridge.botuikit.a.r(num5, str10, ", userDiscriminator=", ", userAvatar=", t5);
        a3.e.A(t5, str11, ", userGuildAvatar=", str12, ", platformUserUsername=");
        com.discord.chat.bridge.botuikit.a.r(num6, str13, ", relationshipType=", ", guildId=", t5);
        t5.append(guildId);
        t5.append(", guildName=");
        t5.append(str14);
        t5.append(", guildIcon=");
        a3.e.A(t5, str15, ", activityInstanceId=", str16, ", activityType=");
        d.r(num7, ", activityName=", str17, ", applicationId=", t5);
        t5.append(applicationId);
        t5.append(", applicationName=");
        t5.append(str18);
        t5.append(", applicationIcon=");
        t5.append(str19);
        t5.append(", message=");
        t5.append(notificationMessage);
        t5.append(", stageInstanceTopic=");
        t5.append(str20);
        t5.append(", canReply=");
        t5.append(z5);
        t5.append(", isFromCurrentUser=");
        t5.append(z6);
        t5.append(", receivingUserId=");
        t5.append(userId2);
        t5.append(", title=");
        a3.e.A(t5, str21, ", subtitle=", str22, ", iconUrl=");
        a3.e.A(t5, str23, ", notificationChannel=", str24, ", trackingType=");
        a3.e.A(t5, str25, ", deeplink=", str26, ", expandSubtitle=");
        t5.append(bool);
        t5.append(", imageAttachmentUrl=");
        t5.append(str27);
        t5.append(", ergoImageAttachmentUrl=");
        com.discord.chat.bridge.botuikit.a.r(num8, str28, ", attachmentTextVariant=", ", imageAttachmentCount=", t5);
        d.s(t5, num9, ", videoAttachmentCount=", num10, ", timeReceived=");
        t5.append(str29);
        t5.append(", silent=");
        t5.append(z7);
        t5.append(", userInfo=");
        t5.append(map);
        t5.append(", appDm=");
        t5.append(z8);
        t5.append(", notifTypeId=");
        a3.e.A(t5, str30, ", notifInstanceId=", str31, ", joinId=");
        a3.e.A(t5, str32, ", mentionType=", str33, ", appState=");
        a3.e.A(t5, str34, ", inviteGuildName=", str35, ", inviteChannelName=");
        com.discord.chat.bridge.botuikit.a.r(num11, str36, ", inviteTitleVariant=", ", pollQuestion=", t5);
        t5.append(str37);
        t5.append(", sentAtMillis=");
        t5.append(j);
        t5.append(", isSpoilerChannel=");
        t5.append(z10);
        t5.append(")");
        return t5.toString();
    }

    public /* synthetic */ NotificationData(String str, String str2, Integer num, String str3, Integer num2, String str4, Long l6, Integer num3, String str5, ChannelId channelId, String str6, String str7, ChannelId channelId2, Integer num4, String str8, List list, UserId userId, String str9, String str10, Integer num5, String str11, String str12, String str13, Integer num6, GuildId guildId, String str14, String str15, String str16, Integer num7, String str17, ApplicationId applicationId, String str18, String str19, NotificationMessage notificationMessage, String str20, boolean z5, boolean z6, UserId userId2, String str21, String str22, String str23, String str24, String str25, String str26, Boolean bool, String str27, String str28, Integer num8, Integer num9, Integer num10, String str29, boolean z7, Map map, boolean z8, String str30, String str31, String str32, String str33, String str34, String str35, String str36, Integer num11, String str37, long j, boolean z10, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, num, str3, num2, str4, l6, num3, str5, channelId, str6, str7, channelId2, num4, str8, list, userId, str9, str10, num5, str11, str12, str13, num6, guildId, str14, str15, str16, num7, str17, applicationId, str18, str19, notificationMessage, str20, z5, z6, userId2, str21, str22, str23, str24, str25, str26, bool, str27, str28, num8, num9, num10, str29, z7, map, z8, str30, str31, str32, str33, str34, str35, str36, num11, str37, j, z10);
    }

    private NotificationData(int i5, int i6, int i10, String str, String str2, Integer num, String str3, Integer num2, String str4, Long l6, Integer num3, String str5, ChannelId channelId, String str6, String str7, ChannelId channelId2, Integer num4, String str8, List list, UserId userId, String str9, String str10, Integer num5, String str11, String str12, String str13, Integer num6, GuildId guildId, String str14, String str15, String str16, Integer num7, String str17, ApplicationId applicationId, String str18, String str19, NotificationMessage notificationMessage, String str20, boolean z5, boolean z6, UserId userId2, String str21, String str22, String str23, String str24, String str25, String str26, Boolean bool, String str27, String str28, Integer num8, Integer num9, Integer num10, String str29, boolean z7, Map map, boolean z8, String str30, String str31, String str32, String str33, String str34, String str35, String str36, Integer num11, String str37, long j, boolean z10, SerializationConstructorMarker serializationConstructorMarker) {
        int i11;
        int i12;
        int i13;
        int i14;
        int i15;
        int i16;
        int i17;
        if (1 != (i5 & 1)) {
            h1.k(new int[]{i5, i6, i10}, new int[]{1, 0, 0}, NotificationData$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.type = str;
        if ((i5 & 2) == 0) {
            this.messageId = null;
        } else {
            this.messageId = str2;
        }
        if ((i5 & 4) == 0) {
            this.messageActivityType = null;
        } else {
            this.messageActivityType = num;
        }
        if ((i5 & 8) == 0) {
            this.messageApplicationName = null;
        } else {
            this.messageApplicationName = str3;
        }
        if ((i5 & 16) == 0) {
            this.messageType = null;
        } else {
            this.messageType = num2;
        }
        if ((i5 & 32) == 0) {
            this.messageContent = null;
        } else {
            this.messageContent = str4;
        }
        if ((i5 & 64) == 0) {
            this.messageFlags = null;
        } else {
            this.messageFlags = l6;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            this.channelType = null;
        } else {
            this.channelType = num3;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.channelName = null;
        } else {
            this.channelName = str5;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.channelId = null;
        } else {
            this.channelId = channelId;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 0) {
            this.channelIcon = null;
        } else {
            this.channelIcon = str6;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_MOVED) == 0) {
            this.parentName = null;
        } else {
            this.parentName = str7;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
            this.parentId = null;
        } else {
            this.parentId = channelId2;
        }
        if ((i5 & 8192) == 0) {
            this.messageReferenceType = null;
        } else {
            this.messageReferenceType = num4;
        }
        if ((i5 & 16384) == 0) {
            this.channelRtcRegion = null;
        } else {
            this.channelRtcRegion = str8;
        }
        this.ackChannelIds = (i5 & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) == 0 ? m0.f13512d : list;
        if ((i5 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) == 0) {
            this.userId = null;
        } else {
            this.userId = userId;
        }
        if ((i5 & KeyCommandDescriptor.ModifierFlags.SHIFT) == 0) {
            this.userUsername = null;
        } else {
            this.userUsername = str9;
        }
        if ((i5 & KeyCommandDescriptor.ModifierFlags.CONTROL) == 0) {
            this.userGlobalName = null;
        } else {
            this.userGlobalName = str10;
        }
        if ((i5 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) == 0) {
            this.userDiscriminator = null;
        } else {
            this.userDiscriminator = num5;
        }
        if ((i5 & KeyCommandDescriptor.ModifierFlags.COMMAND) == 0) {
            this.userAvatar = null;
        } else {
            this.userAvatar = str11;
        }
        if ((i5 & KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD) == 0) {
            this.userGuildAvatar = null;
        } else {
            this.userGuildAvatar = str12;
        }
        if ((i5 & 4194304) == 0) {
            this.platformUserUsername = null;
        } else {
            this.platformUserUsername = str13;
        }
        if ((i5 & 8388608) == 0) {
            this.relationshipType = null;
        } else {
            this.relationshipType = num6;
        }
        if ((i5 & PointerEventHelper.X_FLAG_SUPPORTS_HOVER) == 0) {
            this.guildId = null;
            i11 = 32768;
        } else {
            i11 = 32768;
            this.guildId = guildId;
        }
        if ((i5 & 33554432) == 0) {
            this.guildName = null;
            i12 = 33554432;
        } else {
            i12 = 33554432;
            this.guildName = str14;
        }
        if ((i5 & 67108864) == 0) {
            this.guildIcon = null;
            i13 = 67108864;
        } else {
            i13 = 67108864;
            this.guildIcon = str15;
        }
        if ((i5 & 134217728) == 0) {
            this.activityInstanceId = null;
            i14 = 134217728;
        } else {
            i14 = 134217728;
            this.activityInstanceId = str16;
        }
        if ((i5 & 268435456) == 0) {
            this.activityType = null;
            i15 = 268435456;
        } else {
            i15 = 268435456;
            this.activityType = num7;
        }
        if ((i5 & 536870912) == 0) {
            this.activityName = null;
            i16 = 536870912;
        } else {
            i16 = 536870912;
            this.activityName = str17;
        }
        if ((i5 & 1073741824) == 0) {
            this.applicationId = null;
            i17 = 1073741824;
        } else {
            i17 = 1073741824;
            this.applicationId = applicationId;
        }
        if ((i5 & Integer.MIN_VALUE) == 0) {
            this.applicationName = null;
        } else {
            this.applicationName = str18;
        }
        if ((i6 & 1) == 0) {
            this.applicationIcon = null;
        } else {
            this.applicationIcon = str19;
        }
        if ((i6 & 2) == 0) {
            this.message = null;
        } else {
            this.message = notificationMessage;
        }
        if ((i6 & 4) == 0) {
            this.stageInstanceTopic = null;
        } else {
            this.stageInstanceTopic = str20;
        }
        if ((i6 & 8) == 0) {
            this.canReply = false;
        } else {
            this.canReply = z5;
        }
        if ((i6 & 16) == 0) {
            this.isFromCurrentUser = false;
        } else {
            this.isFromCurrentUser = z6;
        }
        if ((i6 & 32) == 0) {
            this.receivingUserId = null;
        } else {
            this.receivingUserId = userId2;
        }
        if ((i6 & 64) == 0) {
            this.title = null;
        } else {
            this.title = str21;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            this.subtitle = null;
        } else {
            this.subtitle = str22;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.iconUrl = null;
        } else {
            this.iconUrl = str23;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.notificationChannel = null;
        } else {
            this.notificationChannel = str24;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 0) {
            this.trackingType = null;
        } else {
            this.trackingType = str25;
        }
        if ((i6 & RecyclerView.ItemAnimator.FLAG_MOVED) == 0) {
            this.deeplink = null;
        } else {
            this.deeplink = str26;
        }
        this.expandSubtitle = (i6 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0 ? Boolean.FALSE : bool;
        if ((i6 & 8192) == 0) {
            this.imageAttachmentUrl = null;
        } else {
            this.imageAttachmentUrl = str27;
        }
        if ((i6 & 16384) == 0) {
            this.ergoImageAttachmentUrl = null;
        } else {
            this.ergoImageAttachmentUrl = str28;
        }
        if ((i6 & i11) == 0) {
            this.attachmentTextVariant = null;
        } else {
            this.attachmentTextVariant = num8;
        }
        if ((i6 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) == 0) {
            this.imageAttachmentCount = null;
        } else {
            this.imageAttachmentCount = num9;
        }
        if ((i6 & KeyCommandDescriptor.ModifierFlags.SHIFT) == 0) {
            this.videoAttachmentCount = null;
        } else {
            this.videoAttachmentCount = num10;
        }
        if ((i6 & KeyCommandDescriptor.ModifierFlags.CONTROL) == 0) {
            this.timeReceived = null;
        } else {
            this.timeReceived = str29;
        }
        if ((i6 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) == 0) {
            this.silent = false;
        } else {
            this.silent = z7;
        }
        this.userInfo = (i6 & KeyCommandDescriptor.ModifierFlags.COMMAND) == 0 ? v0.d() : map;
        if ((i6 & KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD) == 0) {
            this.appDm = false;
        } else {
            this.appDm = z8;
        }
        if ((i6 & 4194304) == 0) {
            this.notifTypeId = null;
        } else {
            this.notifTypeId = str30;
        }
        if ((i6 & 8388608) == 0) {
            this.notifInstanceId = null;
        } else {
            this.notifInstanceId = str31;
        }
        if ((i6 & PointerEventHelper.X_FLAG_SUPPORTS_HOVER) == 0) {
            this.joinId = null;
        } else {
            this.joinId = str32;
        }
        if ((i6 & i12) == 0) {
            this.mentionType = null;
        } else {
            this.mentionType = str33;
        }
        if ((i6 & i13) == 0) {
            this.appState = null;
        } else {
            this.appState = str34;
        }
        if ((i6 & i14) == 0) {
            this.inviteGuildName = null;
        } else {
            this.inviteGuildName = str35;
        }
        if ((i6 & i15) == 0) {
            this.inviteChannelName = null;
        } else {
            this.inviteChannelName = str36;
        }
        if ((i6 & i16) == 0) {
            this.inviteTitleVariant = null;
        } else {
            this.inviteTitleVariant = num11;
        }
        if ((i6 & i17) == 0) {
            this.pollQuestion = null;
        } else {
            this.pollQuestion = str37;
        }
        this.sentAtMillis = (i6 & Integer.MIN_VALUE) == 0 ? System.currentTimeMillis() : j;
        if ((i10 & 1) == 0) {
            this.isSpoilerChannel = false;
        } else {
            this.isSpoilerChannel = z10;
        }
    }

    private NotificationData(String type, String str, Integer num, String str2, Integer num2, String str3, Long l6, Integer num3, String str4, ChannelId channelId, String str5, String str6, ChannelId channelId2, Integer num4, String str7, List<ChannelId> ackChannelIds, UserId userId, String str8, String str9, Integer num5, String str10, String str11, String str12, Integer num6, GuildId guildId, String str13, String str14, String str15, Integer num7, String str16, ApplicationId applicationId, String str17, String str18, NotificationMessage notificationMessage, String str19, boolean z5, boolean z6, UserId userId2, String str20, String str21, String str22, String str23, String str24, String str25, Boolean bool, String str26, String str27, Integer num8, Integer num9, Integer num10, String str28, boolean z7, Map<String, String> userInfo, boolean z8, String str29, String str30, String str31, String str32, String str33, String str34, String str35, Integer num11, String str36, long j, boolean z10) {
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(ackChannelIds, "ackChannelIds");
        Intrinsics.checkNotNullParameter(userInfo, "userInfo");
        this.type = type;
        this.messageId = str;
        this.messageActivityType = num;
        this.messageApplicationName = str2;
        this.messageType = num2;
        this.messageContent = str3;
        this.messageFlags = l6;
        this.channelType = num3;
        this.channelName = str4;
        this.channelId = channelId;
        this.channelIcon = str5;
        this.parentName = str6;
        this.parentId = channelId2;
        this.messageReferenceType = num4;
        this.channelRtcRegion = str7;
        this.ackChannelIds = ackChannelIds;
        this.userId = userId;
        this.userUsername = str8;
        this.userGlobalName = str9;
        this.userDiscriminator = num5;
        this.userAvatar = str10;
        this.userGuildAvatar = str11;
        this.platformUserUsername = str12;
        this.relationshipType = num6;
        this.guildId = guildId;
        this.guildName = str13;
        this.guildIcon = str14;
        this.activityInstanceId = str15;
        this.activityType = num7;
        this.activityName = str16;
        this.applicationId = applicationId;
        this.applicationName = str17;
        this.applicationIcon = str18;
        this.message = notificationMessage;
        this.stageInstanceTopic = str19;
        this.canReply = z5;
        this.isFromCurrentUser = z6;
        this.receivingUserId = userId2;
        this.title = str20;
        this.subtitle = str21;
        this.iconUrl = str22;
        this.notificationChannel = str23;
        this.trackingType = str24;
        this.deeplink = str25;
        this.expandSubtitle = bool;
        this.imageAttachmentUrl = str26;
        this.ergoImageAttachmentUrl = str27;
        this.attachmentTextVariant = num8;
        this.imageAttachmentCount = num9;
        this.videoAttachmentCount = num10;
        this.timeReceived = str28;
        this.silent = z7;
        this.userInfo = userInfo;
        this.appDm = z8;
        this.notifTypeId = str29;
        this.notifInstanceId = str30;
        this.joinId = str31;
        this.mentionType = str32;
        this.appState = str33;
        this.inviteGuildName = str34;
        this.inviteChannelName = str35;
        this.inviteTitleVariant = num11;
        this.pollQuestion = str36;
        this.sentAtMillis = j;
        this.isSpoilerChannel = z10;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public NotificationData(String str, String str2, Integer num, String str3, Integer num2, String str4, Long l6, Integer num3, String str5, ChannelId channelId, String str6, String str7, ChannelId channelId2, Integer num4, String str8, List list, UserId userId, String str9, String str10, Integer num5, String str11, String str12, String str13, Integer num6, GuildId guildId, String str14, String str15, String str16, Integer num7, String str17, ApplicationId applicationId, String str18, String str19, NotificationMessage notificationMessage, String str20, boolean z5, boolean z6, UserId userId2, String str21, String str22, String str23, String str24, String str25, String str26, Boolean bool, String str27, String str28, Integer num8, Integer num9, Integer num10, String str29, boolean z7, Map map, boolean z8, String str30, String str31, String str32, String str33, String str34, String str35, String str36, Integer num11, String str37, long j, boolean z10, int i5, int i6, int i10, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, r2, r64, r65, r66, r67, r68, r69, r70, r71, r72, r73, r74, r75, r3, r17, r19, r21, r23, r25, r27, r29, r31, r33, r35, r37, r39, r41, r43, r45, r47, r61, r49, r50, r51, r52, r54, r55, r56, r62, r63, r64, r65, r66, r67, r68, r0, r16, r18, r20, r22, r24, r26, r28, r30, r32, r34, r36, r38, r40, r42, r44, r46, (i6 & Integer.MIN_VALUE) != 0 ? System.currentTimeMillis() : j, (i10 & 1) == 0 ? z10 : false, null);
        String str38 = (i5 & 2) != 0 ? null : str2;
        Integer num12 = (i5 & 4) != 0 ? null : num;
        String str39 = (i5 & 8) != 0 ? null : str3;
        Integer num13 = (i5 & 16) != 0 ? null : num2;
        String str40 = (i5 & 32) != 0 ? null : str4;
        Long l7 = (i5 & 64) != 0 ? null : l6;
        Integer num14 = (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? null : num3;
        String str41 = (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? null : str5;
        ChannelId channelId3 = (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : channelId;
        String str42 = (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? null : str6;
        String str43 = (i5 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? null : str7;
        ChannelId channelId4 = (i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? null : channelId2;
        Integer num15 = (i5 & 8192) != 0 ? null : num4;
        String str44 = (i5 & 16384) != 0 ? null : str8;
        List list2 = (i5 & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0 ? m0.f13512d : list;
        UserId userId3 = (i5 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) != 0 ? null : userId;
        String str45 = (i5 & KeyCommandDescriptor.ModifierFlags.SHIFT) != 0 ? null : str9;
        String str46 = (i5 & KeyCommandDescriptor.ModifierFlags.CONTROL) != 0 ? null : str10;
        Integer num16 = (i5 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) != 0 ? null : num5;
        String str47 = (i5 & KeyCommandDescriptor.ModifierFlags.COMMAND) != 0 ? null : str11;
        String str48 = (i5 & KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD) != 0 ? null : str12;
        String str49 = (i5 & 4194304) != 0 ? null : str13;
        Integer num17 = (i5 & 8388608) != 0 ? null : num6;
        GuildId guildId2 = (i5 & PointerEventHelper.X_FLAG_SUPPORTS_HOVER) != 0 ? null : guildId;
        String str50 = (i5 & 33554432) != 0 ? null : str14;
        String str51 = (i5 & 67108864) != 0 ? null : str15;
        String str52 = (i5 & 134217728) != 0 ? null : str16;
        Integer num18 = (i5 & 268435456) != 0 ? null : num7;
        String str53 = (i5 & 536870912) != 0 ? null : str17;
        ApplicationId applicationId2 = (i5 & 1073741824) != 0 ? null : applicationId;
        String str54 = (i5 & Integer.MIN_VALUE) != 0 ? null : str18;
        String str55 = (i6 & 1) != 0 ? null : str19;
        NotificationMessage notificationMessage2 = (i6 & 2) != 0 ? null : notificationMessage;
        String str56 = (i6 & 4) != 0 ? null : str20;
        boolean z11 = (i6 & 8) != 0 ? false : z5;
        boolean z12 = (i6 & 16) != 0 ? false : z6;
        UserId userId4 = (i6 & 32) != 0 ? null : userId2;
        String str57 = (i6 & 64) != 0 ? null : str21;
        String str58 = str54;
        String str59 = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? null : str22;
        String str60 = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? null : str23;
        String str61 = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : str24;
        String str62 = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? null : str25;
        String str63 = (i6 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? null : str26;
        Boolean bool2 = (i6 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? Boolean.FALSE : bool;
        String str64 = (i6 & 8192) != 0 ? null : str27;
        String str65 = (i6 & 16384) != 0 ? null : str28;
        Integer num19 = (i6 & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0 ? null : num8;
        Integer num20 = (i6 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) != 0 ? null : num9;
        Integer num21 = (i6 & KeyCommandDescriptor.ModifierFlags.SHIFT) != 0 ? null : num10;
        String str66 = (i6 & KeyCommandDescriptor.ModifierFlags.CONTROL) != 0 ? null : str29;
        boolean z13 = (i6 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) != 0 ? false : z7;
        Map d6 = (i6 & KeyCommandDescriptor.ModifierFlags.COMMAND) != 0 ? v0.d() : map;
        boolean z14 = (i6 & KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD) != 0 ? false : z8;
        String str67 = (i6 & 4194304) != 0 ? null : str30;
        String str68 = (i6 & 8388608) != 0 ? null : str31;
        String str69 = (i6 & PointerEventHelper.X_FLAG_SUPPORTS_HOVER) != 0 ? null : str32;
        String str70 = (i6 & 33554432) != 0 ? null : str33;
        String str71 = (i6 & 67108864) != 0 ? null : str34;
        String str72 = (i6 & 134217728) != 0 ? null : str35;
        String str73 = (i6 & 268435456) != 0 ? null : str36;
        Integer num22 = (i6 & 536870912) != 0 ? null : num11;
        String str74 = (i6 & 1073741824) != 0 ? null : str37;
        Integer num23 = num12;
        String str75 = str39;
        Integer num24 = num13;
        String str76 = str40;
        Long l10 = l7;
        Integer num25 = num14;
        String str77 = str41;
        ChannelId channelId5 = channelId3;
        String str78 = str42;
        String str79 = str43;
        ChannelId channelId6 = channelId4;
        Integer num26 = num15;
    }
}
