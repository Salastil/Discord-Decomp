package com.discord.chat.bridge.codedlinks;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.chat.bridge.codedlinks.InviteType;
import com.discord.jank_stats.JankRecordStore;
import com.discord.key_commands.KeyCommandDescriptor;
import com.discord.notifications.renderer.NotificationRenderer;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.uimanager.events.PointerEventHelper;
import k0.d;
import kotlin.Metadata;
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
@Metadata(d1 = {"\u0000R\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0019\n\u0002\u0018\u0002\n\u0002\bL\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 \u0085\u00012\u00020\u00012\u00020\u0002:\u0004\u0084\u0001\u0085\u0001Bû\u0002\u0012\b\b\u0001\u0010\u0003\u001a\u00020\u0004\u0012\b\b\u0001\u0010\u0005\u001a\u00020\u0004\u0012\b\b\u0001\u0010\u0006\u001a\u00020\u0004\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\u0006\u0010\t\u001a\u00020\n\u0012\n\b\u0003\u0010\u000b\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0003\u0010\f\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0003\u0010\r\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\b\u0012\n\b\u0003\u0010\u0010\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u0012\u0012\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u0012\u0012\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u0018\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u0019\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u0012\u0012\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\b\u0012\n\b\u0003\u0010\u001f\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0003\u0010 \u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010!\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\"\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010#\u001a\u0004\u0018\u00010\b\u0012\n\b\u0003\u0010$\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010&\u001a\u0004\u0018\u00010\b¢\u0006\u0004\b'\u0010(BÝ\u0002\b\u0010\u0012\u0006\u0010)\u001a\u00020\u0004\u0012\u0006\u0010*\u001a\u00020\u0004\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0004\u0012\u0006\u0010\u0006\u001a\u00020\u0004\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\b\u0010\t\u001a\u0004\u0018\u00010\n\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\f\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u0010\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\u0012\u0012\b\u0010\u0013\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u0014\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u0015\u001a\u0004\u0018\u00010\u0012\u0012\b\u0010\u0016\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u0017\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u0018\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u0019\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u001a\u001a\u0004\u0018\u00010\u0012\u0012\b\u0010\u001b\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u001c\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u001d\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u001e\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u001f\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010 \u001a\u0004\u0018\u00010\u0004\u0012\b\u0010!\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\"\u001a\u0004\u0018\u00010\b\u0012\b\u0010#\u001a\u0004\u0018\u00010\b\u0012\b\u0010$\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010%\u001a\u0004\u0018\u00010\b\u0012\b\u0010&\u001a\u0004\u0018\u00010\b\u0012\b\u0010+\u001a\u0004\u0018\u00010,¢\u0006\u0004\b'\u0010-J\t\u0010U\u001a\u00020\u0004HÆ\u0003J\t\u0010V\u001a\u00020\u0004HÆ\u0003J\t\u0010W\u001a\u00020\u0004HÆ\u0003J\u000b\u0010X\u001a\u0004\u0018\u00010\bHÆ\u0003J\t\u0010Y\u001a\u00020\nHÆ\u0003J\u0010\u0010Z\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u0010\u0010[\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u0010\u0010\\\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u000b\u0010]\u001a\u0004\u0018\u00010\bHÆ\u0003J\u000b\u0010^\u001a\u0004\u0018\u00010\bHÆ\u0003J\u0010\u0010_\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u0010\u0010`\u001a\u0004\u0018\u00010\u0012HÆ\u0003¢\u0006\u0002\u0010?J\u000b\u0010a\u001a\u0004\u0018\u00010\bHÆ\u0003J\u000b\u0010b\u001a\u0004\u0018\u00010\bHÆ\u0003J\u0010\u0010c\u001a\u0004\u0018\u00010\u0012HÆ\u0003¢\u0006\u0002\u0010?J\u000b\u0010d\u001a\u0004\u0018\u00010\bHÆ\u0003J\u000b\u0010e\u001a\u0004\u0018\u00010\bHÆ\u0003J\u0010\u0010f\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u0010\u0010g\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u0010\u0010h\u001a\u0004\u0018\u00010\u0012HÆ\u0003¢\u0006\u0002\u0010?J\u0010\u0010i\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u000b\u0010j\u001a\u0004\u0018\u00010\bHÆ\u0003J\u000b\u0010k\u001a\u0004\u0018\u00010\bHÆ\u0003J\u000b\u0010l\u001a\u0004\u0018\u00010\bHÆ\u0003J\u0010\u0010m\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u0010\u0010n\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u0010\u0010o\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u000b\u0010p\u001a\u0004\u0018\u00010\bHÆ\u0003J\u000b\u0010q\u001a\u0004\u0018\u00010\bHÆ\u0003J\u0010\u0010r\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u000b\u0010s\u001a\u0004\u0018\u00010\bHÆ\u0003J\u000b\u0010t\u001a\u0004\u0018\u00010\bHÆ\u0003J\u0086\u0003\u0010u\u001a\u00020\u00002\b\b\u0003\u0010\u0003\u001a\u00020\u00042\b\b\u0003\u0010\u0005\u001a\u00020\u00042\b\b\u0003\u0010\u0006\u001a\u00020\u00042\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b2\b\b\u0002\u0010\t\u001a\u00020\n2\n\b\u0003\u0010\u000b\u001a\u0004\u0018\u00010\u00042\n\b\u0003\u0010\f\u001a\u0004\u0018\u00010\u00042\n\b\u0003\u0010\r\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\b2\n\b\u0003\u0010\u0010\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u00122\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u00122\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u0018\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u0019\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u00122\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\b2\n\b\u0003\u0010\u001f\u001a\u0004\u0018\u00010\u00042\n\b\u0003\u0010 \u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010!\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\"\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010#\u001a\u0004\u0018\u00010\b2\n\b\u0003\u0010$\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010&\u001a\u0004\u0018\u00010\bHÆ\u0001¢\u0006\u0002\u0010vJ\u0013\u0010w\u001a\u00020\u00122\b\u0010x\u001a\u0004\u0018\u00010yHÖ\u0003J\t\u0010z\u001a\u00020\u0004HÖ\u0001J\t\u0010{\u001a\u00020\bHÖ\u0001J)\u0010|\u001a\u00020}2\u0006\u0010~\u001a\u00020\u00002\u0007\u0010\u007f\u001a\u00030\u0080\u00012\b\u0010\u0081\u0001\u001a\u00030\u0082\u0001H\u0001¢\u0006\u0003\b\u0083\u0001R\u0014\u0010\u0003\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b.\u0010/R\u0014\u0010\u0005\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b0\u0010/R\u0014\u0010\u0006\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b1\u0010/R\u0016\u0010\u0007\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b2\u00103R\u0014\u0010\t\u001a\u00020\nX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b4\u00105R\u0018\u0010\u000b\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\b6\u00107R\u0018\u0010\f\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\b9\u00107R\u0018\u0010\r\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\b:\u00107R\u0016\u0010\u000e\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b;\u00103R\u0016\u0010\u000f\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b<\u00103R\u0018\u0010\u0010\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\b=\u00107R\u0018\u0010\u0011\u001a\u0004\u0018\u00010\u0012X\u0096\u0004¢\u0006\n\n\u0002\u0010@\u001a\u0004\b>\u0010?R\u0016\u0010\u0013\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bA\u00103R\u0016\u0010\u0014\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bB\u00103R\u0018\u0010\u0015\u001a\u0004\u0018\u00010\u0012X\u0096\u0004¢\u0006\n\n\u0002\u0010@\u001a\u0004\bC\u0010?R\u0016\u0010\u0016\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bD\u00103R\u0016\u0010\u0017\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bE\u00103R\u0018\u0010\u0018\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\bF\u00107R\u0018\u0010\u0019\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\bG\u00107R\u0018\u0010\u001a\u001a\u0004\u0018\u00010\u0012X\u0096\u0004¢\u0006\n\n\u0002\u0010@\u001a\u0004\bH\u0010?R\u0018\u0010\u001b\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\bI\u00107R\u0016\u0010\u001c\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bJ\u00103R\u0016\u0010\u001d\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bK\u00103R\u0016\u0010\u001e\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bL\u00103R\u0018\u0010\u001f\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\bM\u00107R\u0018\u0010 \u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\bN\u00107R\u0018\u0010!\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\bO\u00107R\u0016\u0010\"\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bP\u00103R\u0016\u0010#\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bQ\u00103R\u0018\u0010$\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\bR\u00107R\u0016\u0010%\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bS\u00103R\u0016\u0010&\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bT\u00103¨\u0006\u0086\u0001"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/GuildInviteEmbedImpl;", "Lcom/discord/chat/bridge/codedlinks/CodedLinkEmbed;", "Lcom/discord/chat/bridge/codedlinks/GuildInviteEmbed;", ViewProps.BACKGROUND_COLOR, "", ViewProps.BORDER_COLOR, "headerColor", "headerText", "", "type", "Lcom/discord/chat/bridge/codedlinks/InviteType;", "acceptLabelBackgroundColor", "acceptLabelBorderColor", "acceptLabelColor", "acceptLabelText", "bodyText", "bodyTextColor", "canBeAccepted", "", "channelIcon", NotificationRenderer.CHANNEL_NAME, "embedCanBeTapped", "memberText", "onlineText", "resolvingGradientEnd", "resolvingGradientStart", "splashHasRadialGradient", "splashOpacity", "splashUrl", "inviteSplash", "subtitle", "subtitleColor", "thumbnailBackgroundColor", "thumbnailCornerRadius", "thumbnailText", "thumbnailUrl", "titleColor", "titleText", "badgeIconUrl", "<init>", "(IIILjava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V", "seen0", "seen1", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IIIIILjava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getBackgroundColor", "()I", "getBorderColor", "getHeaderColor", "getHeaderText", "()Ljava/lang/String;", "getType", "()Lcom/discord/chat/bridge/codedlinks/InviteType;", "getAcceptLabelBackgroundColor", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getAcceptLabelBorderColor", "getAcceptLabelColor", "getAcceptLabelText", "getBodyText", "getBodyTextColor", "getCanBeAccepted", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "getChannelIcon", "getChannelName", "getEmbedCanBeTapped", "getMemberText", "getOnlineText", "getResolvingGradientEnd", "getResolvingGradientStart", "getSplashHasRadialGradient", "getSplashOpacity", "getSplashUrl", "getInviteSplash", "getSubtitle", "getSubtitleColor", "getThumbnailBackgroundColor", "getThumbnailCornerRadius", "getThumbnailText", "getThumbnailUrl", "getTitleColor", "getTitleText", "getBadgeIconUrl", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "component14", "component15", "component16", "component17", "component18", "component19", "component20", "component21", "component22", "component23", "component24", "component25", "component26", "component27", "component28", "component29", "component30", "component31", "component32", "copy", "(IIILjava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)Lcom/discord/chat/bridge/codedlinks/GuildInviteEmbedImpl;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class GuildInviteEmbedImpl extends CodedLinkEmbed implements GuildInviteEmbed {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final Integer acceptLabelBackgroundColor;
    private final Integer acceptLabelBorderColor;
    private final Integer acceptLabelColor;
    private final String acceptLabelText;
    private final int backgroundColor;
    private final String badgeIconUrl;
    private final String bodyText;
    private final Integer bodyTextColor;
    private final int borderColor;
    private final Boolean canBeAccepted;
    private final String channelIcon;
    private final String channelName;
    private final Boolean embedCanBeTapped;
    private final int headerColor;
    private final String headerText;
    private final String inviteSplash;
    private final String memberText;
    private final String onlineText;
    private final Integer resolvingGradientEnd;
    private final Integer resolvingGradientStart;
    private final Boolean splashHasRadialGradient;
    private final Integer splashOpacity;
    private final String splashUrl;
    private final String subtitle;
    private final Integer subtitleColor;
    private final Integer thumbnailBackgroundColor;
    private final Integer thumbnailCornerRadius;
    private final String thumbnailText;
    private final String thumbnailUrl;
    private final Integer titleColor;
    private final String titleText;

    @NotNull
    private final InviteType type;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/GuildInviteEmbedImpl$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/codedlinks/GuildInviteEmbedImpl;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return GuildInviteEmbedImpl$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ GuildInviteEmbedImpl(int i5, int i6, int i10, int i11, int i12, String str, InviteType inviteType, Integer num, Integer num2, Integer num3, String str2, String str3, Integer num4, Boolean bool, String str4, String str5, Boolean bool2, String str6, String str7, Integer num5, Integer num6, Boolean bool3, Integer num7, String str8, String str9, String str10, Integer num8, Integer num9, Integer num10, String str11, String str12, Integer num11, String str13, String str14, SerializationConstructorMarker serializationConstructorMarker) {
        super(r3);
        DefaultConstructorMarker defaultConstructorMarker = null;
        if (31 != (i5 & 31)) {
            h1.k(new int[]{i5, i6}, new int[]{31, 0}, GuildInviteEmbedImpl$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.backgroundColor = i10;
        this.borderColor = i11;
        this.headerColor = i12;
        this.headerText = str;
        this.type = inviteType;
        if ((i5 & 32) == 0) {
            this.acceptLabelBackgroundColor = null;
        } else {
            this.acceptLabelBackgroundColor = num;
        }
        if ((i5 & 64) == 0) {
            this.acceptLabelBorderColor = null;
        } else {
            this.acceptLabelBorderColor = num2;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            this.acceptLabelColor = null;
        } else {
            this.acceptLabelColor = num3;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.acceptLabelText = null;
        } else {
            this.acceptLabelText = str2;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.bodyText = null;
        } else {
            this.bodyText = str3;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 0) {
            this.bodyTextColor = null;
        } else {
            this.bodyTextColor = num4;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_MOVED) == 0) {
            this.canBeAccepted = null;
        } else {
            this.canBeAccepted = bool;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
            this.channelIcon = null;
        } else {
            this.channelIcon = str4;
        }
        if ((i5 & 8192) == 0) {
            this.channelName = null;
        } else {
            this.channelName = str5;
        }
        if ((i5 & 16384) == 0) {
            this.embedCanBeTapped = null;
        } else {
            this.embedCanBeTapped = bool2;
        }
        if ((32768 & i5) == 0) {
            this.memberText = null;
        } else {
            this.memberText = str6;
        }
        if ((65536 & i5) == 0) {
            this.onlineText = null;
        } else {
            this.onlineText = str7;
        }
        if ((131072 & i5) == 0) {
            this.resolvingGradientEnd = null;
        } else {
            this.resolvingGradientEnd = num5;
        }
        if ((262144 & i5) == 0) {
            this.resolvingGradientStart = null;
        } else {
            this.resolvingGradientStart = num6;
        }
        if ((524288 & i5) == 0) {
            this.splashHasRadialGradient = null;
        } else {
            this.splashHasRadialGradient = bool3;
        }
        if ((1048576 & i5) == 0) {
            this.splashOpacity = null;
        } else {
            this.splashOpacity = num7;
        }
        if ((2097152 & i5) == 0) {
            this.splashUrl = null;
        } else {
            this.splashUrl = str8;
        }
        if ((4194304 & i5) == 0) {
            this.inviteSplash = null;
        } else {
            this.inviteSplash = str9;
        }
        if ((8388608 & i5) == 0) {
            this.subtitle = null;
        } else {
            this.subtitle = str10;
        }
        if ((16777216 & i5) == 0) {
            this.subtitleColor = null;
        } else {
            this.subtitleColor = num8;
        }
        if ((33554432 & i5) == 0) {
            this.thumbnailBackgroundColor = null;
        } else {
            this.thumbnailBackgroundColor = num9;
        }
        if ((67108864 & i5) == 0) {
            this.thumbnailCornerRadius = null;
        } else {
            this.thumbnailCornerRadius = num10;
        }
        if ((134217728 & i5) == 0) {
            this.thumbnailText = null;
        } else {
            this.thumbnailText = str11;
        }
        if ((268435456 & i5) == 0) {
            this.thumbnailUrl = null;
        } else {
            this.thumbnailUrl = str12;
        }
        if ((536870912 & i5) == 0) {
            this.titleColor = null;
        } else {
            this.titleColor = num11;
        }
        if ((1073741824 & i5) == 0) {
            this.titleText = null;
        } else {
            this.titleText = str13;
        }
        if ((i5 & Integer.MIN_VALUE) == 0) {
            this.badgeIconUrl = null;
        } else {
            this.badgeIconUrl = str14;
        }
    }

    public static /* synthetic */ GuildInviteEmbedImpl copy$default(GuildInviteEmbedImpl guildInviteEmbedImpl, int i5, int i6, int i10, String str, InviteType inviteType, Integer num, Integer num2, Integer num3, String str2, String str3, Integer num4, Boolean bool, String str4, String str5, Boolean bool2, String str6, String str7, Integer num5, Integer num6, Boolean bool3, Integer num7, String str8, String str9, String str10, Integer num8, Integer num9, Integer num10, String str11, String str12, Integer num11, String str13, String str14, int i11, Object obj) {
        String str15;
        String str16;
        String str17;
        String str18;
        Integer num12;
        Integer num13;
        Boolean bool4;
        Integer num14;
        String str19;
        String str20;
        String str21;
        Integer num15;
        Integer num16;
        Integer num17;
        String str22;
        String str23;
        Integer num18;
        Boolean bool5;
        int i12;
        int i13;
        String str24;
        InviteType inviteType2;
        Integer num19;
        Integer num20;
        Integer num21;
        String str25;
        String str26;
        Integer num22;
        Boolean bool6;
        String str27;
        String str28;
        int i14 = (i11 & 1) != 0 ? guildInviteEmbedImpl.backgroundColor : i5;
        int i15 = (i11 & 2) != 0 ? guildInviteEmbedImpl.borderColor : i6;
        int i16 = (i11 & 4) != 0 ? guildInviteEmbedImpl.headerColor : i10;
        String str29 = (i11 & 8) != 0 ? guildInviteEmbedImpl.headerText : str;
        InviteType inviteType3 = (i11 & 16) != 0 ? guildInviteEmbedImpl.type : inviteType;
        Integer num23 = (i11 & 32) != 0 ? guildInviteEmbedImpl.acceptLabelBackgroundColor : num;
        Integer num24 = (i11 & 64) != 0 ? guildInviteEmbedImpl.acceptLabelBorderColor : num2;
        Integer num25 = (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? guildInviteEmbedImpl.acceptLabelColor : num3;
        String str30 = (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? guildInviteEmbedImpl.acceptLabelText : str2;
        String str31 = (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? guildInviteEmbedImpl.bodyText : str3;
        Integer num26 = (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? guildInviteEmbedImpl.bodyTextColor : num4;
        Boolean bool7 = (i11 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? guildInviteEmbedImpl.canBeAccepted : bool;
        String str32 = (i11 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? guildInviteEmbedImpl.channelIcon : str4;
        String str33 = (i11 & 8192) != 0 ? guildInviteEmbedImpl.channelName : str5;
        int i17 = i14;
        Boolean bool8 = (i11 & 16384) != 0 ? guildInviteEmbedImpl.embedCanBeTapped : bool2;
        String str34 = (i11 & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0 ? guildInviteEmbedImpl.memberText : str6;
        String str35 = (i11 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) != 0 ? guildInviteEmbedImpl.onlineText : str7;
        Integer num27 = (i11 & KeyCommandDescriptor.ModifierFlags.SHIFT) != 0 ? guildInviteEmbedImpl.resolvingGradientEnd : num5;
        Integer num28 = (i11 & KeyCommandDescriptor.ModifierFlags.CONTROL) != 0 ? guildInviteEmbedImpl.resolvingGradientStart : num6;
        Boolean bool9 = (i11 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) != 0 ? guildInviteEmbedImpl.splashHasRadialGradient : bool3;
        Integer num29 = (i11 & KeyCommandDescriptor.ModifierFlags.COMMAND) != 0 ? guildInviteEmbedImpl.splashOpacity : num7;
        String str36 = (i11 & KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD) != 0 ? guildInviteEmbedImpl.splashUrl : str8;
        String str37 = (i11 & 4194304) != 0 ? guildInviteEmbedImpl.inviteSplash : str9;
        String str38 = (i11 & 8388608) != 0 ? guildInviteEmbedImpl.subtitle : str10;
        Integer num30 = (i11 & PointerEventHelper.X_FLAG_SUPPORTS_HOVER) != 0 ? guildInviteEmbedImpl.subtitleColor : num8;
        Integer num31 = (i11 & 33554432) != 0 ? guildInviteEmbedImpl.thumbnailBackgroundColor : num9;
        Integer num32 = (i11 & 67108864) != 0 ? guildInviteEmbedImpl.thumbnailCornerRadius : num10;
        String str39 = (i11 & 134217728) != 0 ? guildInviteEmbedImpl.thumbnailText : str11;
        String str40 = (i11 & 268435456) != 0 ? guildInviteEmbedImpl.thumbnailUrl : str12;
        Integer num33 = (i11 & 536870912) != 0 ? guildInviteEmbedImpl.titleColor : num11;
        String str41 = (i11 & 1073741824) != 0 ? guildInviteEmbedImpl.titleText : str13;
        if ((i11 & Integer.MIN_VALUE) != 0) {
            str16 = str41;
            str15 = guildInviteEmbedImpl.badgeIconUrl;
            str18 = str35;
            num12 = num27;
            num13 = num28;
            bool4 = bool9;
            num14 = num29;
            str19 = str36;
            str20 = str37;
            str21 = str38;
            num15 = num30;
            num16 = num31;
            num17 = num32;
            str22 = str39;
            str23 = str40;
            num18 = num33;
            bool5 = bool8;
            i12 = i15;
            i13 = i16;
            str24 = str29;
            inviteType2 = inviteType3;
            num19 = num23;
            num20 = num24;
            num21 = num25;
            str25 = str30;
            str26 = str31;
            num22 = num26;
            bool6 = bool7;
            str27 = str32;
            str28 = str33;
            str17 = str34;
        } else {
            str15 = str14;
            str16 = str41;
            str17 = str34;
            str18 = str35;
            num12 = num27;
            num13 = num28;
            bool4 = bool9;
            num14 = num29;
            str19 = str36;
            str20 = str37;
            str21 = str38;
            num15 = num30;
            num16 = num31;
            num17 = num32;
            str22 = str39;
            str23 = str40;
            num18 = num33;
            bool5 = bool8;
            i12 = i15;
            i13 = i16;
            str24 = str29;
            inviteType2 = inviteType3;
            num19 = num23;
            num20 = num24;
            num21 = num25;
            str25 = str30;
            str26 = str31;
            num22 = num26;
            bool6 = bool7;
            str27 = str32;
            str28 = str33;
        }
        return guildInviteEmbedImpl.copy(i17, i12, i13, str24, inviteType2, num19, num20, num21, str25, str26, num22, bool6, str27, str28, bool5, str17, str18, num12, num13, bool4, num14, str19, str20, str21, num15, num16, num17, str22, str23, num18, str16, str15);
    }

    public static final /* synthetic */ void write$Self$chat_release(GuildInviteEmbedImpl self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.n(0, self.getBackgroundColor(), serialDesc);
        output.n(1, self.getBorderColor(), serialDesc);
        output.n(2, self.getHeaderColor(), serialDesc);
        v1 v1Var = v1.a;
        output.z(serialDesc, 3, v1Var, self.getHeaderText());
        output.g(serialDesc, 4, InviteType.Serializer.INSTANCE, self.getType());
        if (output.I(serialDesc, 5) || self.getAcceptLabelBackgroundColor() != null) {
            output.z(serialDesc, 5, o0.a, self.getAcceptLabelBackgroundColor());
        }
        if (output.I(serialDesc, 6) || self.getAcceptLabelBorderColor() != null) {
            output.z(serialDesc, 6, o0.a, self.getAcceptLabelBorderColor());
        }
        if (output.I(serialDesc, 7) || self.getAcceptLabelColor() != null) {
            output.z(serialDesc, 7, o0.a, self.getAcceptLabelColor());
        }
        if (output.I(serialDesc, 8) || self.getAcceptLabelText() != null) {
            output.z(serialDesc, 8, v1Var, self.getAcceptLabelText());
        }
        if (output.I(serialDesc, 9) || self.getBodyText() != null) {
            output.z(serialDesc, 9, v1Var, self.getBodyText());
        }
        if (output.I(serialDesc, 10) || self.getBodyTextColor() != null) {
            output.z(serialDesc, 10, o0.a, self.getBodyTextColor());
        }
        if (output.I(serialDesc, 11) || self.getCanBeAccepted() != null) {
            output.z(serialDesc, 11, g.a, self.getCanBeAccepted());
        }
        if (output.I(serialDesc, 12) || self.getChannelIcon() != null) {
            output.z(serialDesc, 12, v1Var, self.getChannelIcon());
        }
        if (output.I(serialDesc, 13) || self.getChannelName() != null) {
            output.z(serialDesc, 13, v1Var, self.getChannelName());
        }
        if (output.I(serialDesc, 14) || self.getEmbedCanBeTapped() != null) {
            output.z(serialDesc, 14, g.a, self.getEmbedCanBeTapped());
        }
        if (output.I(serialDesc, 15) || self.getMemberText() != null) {
            output.z(serialDesc, 15, v1Var, self.getMemberText());
        }
        if (output.I(serialDesc, 16) || self.getOnlineText() != null) {
            output.z(serialDesc, 16, v1Var, self.getOnlineText());
        }
        if (output.I(serialDesc, 17) || self.getResolvingGradientEnd() != null) {
            output.z(serialDesc, 17, o0.a, self.getResolvingGradientEnd());
        }
        if (output.I(serialDesc, 18) || self.getResolvingGradientStart() != null) {
            output.z(serialDesc, 18, o0.a, self.getResolvingGradientStart());
        }
        if (output.I(serialDesc, 19) || self.getSplashHasRadialGradient() != null) {
            output.z(serialDesc, 19, g.a, self.getSplashHasRadialGradient());
        }
        if (output.I(serialDesc, 20) || self.getSplashOpacity() != null) {
            output.z(serialDesc, 20, o0.a, self.getSplashOpacity());
        }
        if (output.I(serialDesc, 21) || self.getSplashUrl() != null) {
            output.z(serialDesc, 21, v1Var, self.getSplashUrl());
        }
        if (output.I(serialDesc, 22) || self.getInviteSplash() != null) {
            output.z(serialDesc, 22, v1Var, self.getInviteSplash());
        }
        if (output.I(serialDesc, 23) || self.getSubtitle() != null) {
            output.z(serialDesc, 23, v1Var, self.getSubtitle());
        }
        if (output.I(serialDesc, 24) || self.getSubtitleColor() != null) {
            output.z(serialDesc, 24, o0.a, self.getSubtitleColor());
        }
        if (output.I(serialDesc, 25) || self.getThumbnailBackgroundColor() != null) {
            output.z(serialDesc, 25, o0.a, self.getThumbnailBackgroundColor());
        }
        if (output.I(serialDesc, 26) || self.getThumbnailCornerRadius() != null) {
            output.z(serialDesc, 26, o0.a, self.getThumbnailCornerRadius());
        }
        if (output.I(serialDesc, 27) || self.getThumbnailText() != null) {
            output.z(serialDesc, 27, v1Var, self.getThumbnailText());
        }
        if (output.I(serialDesc, 28) || self.getThumbnailUrl() != null) {
            output.z(serialDesc, 28, v1Var, self.getThumbnailUrl());
        }
        if (output.I(serialDesc, 29) || self.getTitleColor() != null) {
            output.z(serialDesc, 29, o0.a, self.getTitleColor());
        }
        if (output.I(serialDesc, 30) || self.getTitleText() != null) {
            output.z(serialDesc, 30, v1Var, self.getTitleText());
        }
        if (!output.I(serialDesc, 31) && self.getBadgeIconUrl() == null) {
            return;
        }
        output.z(serialDesc, 31, v1Var, self.getBadgeIconUrl());
    }

    /* renamed from: component1, reason: from getter */
    public final int getBackgroundColor() {
        return this.backgroundColor;
    }

    /* renamed from: component10, reason: from getter */
    public final String getBodyText() {
        return this.bodyText;
    }

    /* renamed from: component11, reason: from getter */
    public final Integer getBodyTextColor() {
        return this.bodyTextColor;
    }

    /* renamed from: component12, reason: from getter */
    public final Boolean getCanBeAccepted() {
        return this.canBeAccepted;
    }

    /* renamed from: component13, reason: from getter */
    public final String getChannelIcon() {
        return this.channelIcon;
    }

    /* renamed from: component14, reason: from getter */
    public final String getChannelName() {
        return this.channelName;
    }

    /* renamed from: component15, reason: from getter */
    public final Boolean getEmbedCanBeTapped() {
        return this.embedCanBeTapped;
    }

    /* renamed from: component16, reason: from getter */
    public final String getMemberText() {
        return this.memberText;
    }

    /* renamed from: component17, reason: from getter */
    public final String getOnlineText() {
        return this.onlineText;
    }

    /* renamed from: component18, reason: from getter */
    public final Integer getResolvingGradientEnd() {
        return this.resolvingGradientEnd;
    }

    /* renamed from: component19, reason: from getter */
    public final Integer getResolvingGradientStart() {
        return this.resolvingGradientStart;
    }

    /* renamed from: component2, reason: from getter */
    public final int getBorderColor() {
        return this.borderColor;
    }

    /* renamed from: component20, reason: from getter */
    public final Boolean getSplashHasRadialGradient() {
        return this.splashHasRadialGradient;
    }

    /* renamed from: component21, reason: from getter */
    public final Integer getSplashOpacity() {
        return this.splashOpacity;
    }

    /* renamed from: component22, reason: from getter */
    public final String getSplashUrl() {
        return this.splashUrl;
    }

    /* renamed from: component23, reason: from getter */
    public final String getInviteSplash() {
        return this.inviteSplash;
    }

    /* renamed from: component24, reason: from getter */
    public final String getSubtitle() {
        return this.subtitle;
    }

    /* renamed from: component25, reason: from getter */
    public final Integer getSubtitleColor() {
        return this.subtitleColor;
    }

    /* renamed from: component26, reason: from getter */
    public final Integer getThumbnailBackgroundColor() {
        return this.thumbnailBackgroundColor;
    }

    /* renamed from: component27, reason: from getter */
    public final Integer getThumbnailCornerRadius() {
        return this.thumbnailCornerRadius;
    }

    /* renamed from: component28, reason: from getter */
    public final String getThumbnailText() {
        return this.thumbnailText;
    }

    /* renamed from: component29, reason: from getter */
    public final String getThumbnailUrl() {
        return this.thumbnailUrl;
    }

    /* renamed from: component3, reason: from getter */
    public final int getHeaderColor() {
        return this.headerColor;
    }

    /* renamed from: component30, reason: from getter */
    public final Integer getTitleColor() {
        return this.titleColor;
    }

    /* renamed from: component31, reason: from getter */
    public final String getTitleText() {
        return this.titleText;
    }

    /* renamed from: component32, reason: from getter */
    public final String getBadgeIconUrl() {
        return this.badgeIconUrl;
    }

    /* renamed from: component4, reason: from getter */
    public final String getHeaderText() {
        return this.headerText;
    }

    @NotNull
    /* renamed from: component5, reason: from getter */
    public final InviteType getType() {
        return this.type;
    }

    /* renamed from: component6, reason: from getter */
    public final Integer getAcceptLabelBackgroundColor() {
        return this.acceptLabelBackgroundColor;
    }

    /* renamed from: component7, reason: from getter */
    public final Integer getAcceptLabelBorderColor() {
        return this.acceptLabelBorderColor;
    }

    /* renamed from: component8, reason: from getter */
    public final Integer getAcceptLabelColor() {
        return this.acceptLabelColor;
    }

    /* renamed from: component9, reason: from getter */
    public final String getAcceptLabelText() {
        return this.acceptLabelText;
    }

    @NotNull
    public final GuildInviteEmbedImpl copy(int backgroundColor, int borderColor, int headerColor, String headerText, @NotNull InviteType type, Integer acceptLabelBackgroundColor, Integer acceptLabelBorderColor, Integer acceptLabelColor, String acceptLabelText, String bodyText, Integer bodyTextColor, Boolean canBeAccepted, String channelIcon, String channelName, Boolean embedCanBeTapped, String memberText, String onlineText, Integer resolvingGradientEnd, Integer resolvingGradientStart, Boolean splashHasRadialGradient, Integer splashOpacity, String splashUrl, String inviteSplash, String subtitle, Integer subtitleColor, Integer thumbnailBackgroundColor, Integer thumbnailCornerRadius, String thumbnailText, String thumbnailUrl, Integer titleColor, String titleText, String badgeIconUrl) {
        Intrinsics.checkNotNullParameter(type, "type");
        return new GuildInviteEmbedImpl(backgroundColor, borderColor, headerColor, headerText, type, acceptLabelBackgroundColor, acceptLabelBorderColor, acceptLabelColor, acceptLabelText, bodyText, bodyTextColor, canBeAccepted, channelIcon, channelName, embedCanBeTapped, memberText, onlineText, resolvingGradientEnd, resolvingGradientStart, splashHasRadialGradient, splashOpacity, splashUrl, inviteSplash, subtitle, subtitleColor, thumbnailBackgroundColor, thumbnailCornerRadius, thumbnailText, thumbnailUrl, titleColor, titleText, badgeIconUrl);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof GuildInviteEmbedImpl)) {
            return false;
        }
        GuildInviteEmbedImpl guildInviteEmbedImpl = (GuildInviteEmbedImpl) other;
        return this.backgroundColor == guildInviteEmbedImpl.backgroundColor && this.borderColor == guildInviteEmbedImpl.borderColor && this.headerColor == guildInviteEmbedImpl.headerColor && Intrinsics.areEqual(this.headerText, guildInviteEmbedImpl.headerText) && this.type == guildInviteEmbedImpl.type && Intrinsics.areEqual(this.acceptLabelBackgroundColor, guildInviteEmbedImpl.acceptLabelBackgroundColor) && Intrinsics.areEqual(this.acceptLabelBorderColor, guildInviteEmbedImpl.acceptLabelBorderColor) && Intrinsics.areEqual(this.acceptLabelColor, guildInviteEmbedImpl.acceptLabelColor) && Intrinsics.areEqual(this.acceptLabelText, guildInviteEmbedImpl.acceptLabelText) && Intrinsics.areEqual(this.bodyText, guildInviteEmbedImpl.bodyText) && Intrinsics.areEqual(this.bodyTextColor, guildInviteEmbedImpl.bodyTextColor) && Intrinsics.areEqual(this.canBeAccepted, guildInviteEmbedImpl.canBeAccepted) && Intrinsics.areEqual(this.channelIcon, guildInviteEmbedImpl.channelIcon) && Intrinsics.areEqual(this.channelName, guildInviteEmbedImpl.channelName) && Intrinsics.areEqual(this.embedCanBeTapped, guildInviteEmbedImpl.embedCanBeTapped) && Intrinsics.areEqual(this.memberText, guildInviteEmbedImpl.memberText) && Intrinsics.areEqual(this.onlineText, guildInviteEmbedImpl.onlineText) && Intrinsics.areEqual(this.resolvingGradientEnd, guildInviteEmbedImpl.resolvingGradientEnd) && Intrinsics.areEqual(this.resolvingGradientStart, guildInviteEmbedImpl.resolvingGradientStart) && Intrinsics.areEqual(this.splashHasRadialGradient, guildInviteEmbedImpl.splashHasRadialGradient) && Intrinsics.areEqual(this.splashOpacity, guildInviteEmbedImpl.splashOpacity) && Intrinsics.areEqual(this.splashUrl, guildInviteEmbedImpl.splashUrl) && Intrinsics.areEqual(this.inviteSplash, guildInviteEmbedImpl.inviteSplash) && Intrinsics.areEqual(this.subtitle, guildInviteEmbedImpl.subtitle) && Intrinsics.areEqual(this.subtitleColor, guildInviteEmbedImpl.subtitleColor) && Intrinsics.areEqual(this.thumbnailBackgroundColor, guildInviteEmbedImpl.thumbnailBackgroundColor) && Intrinsics.areEqual(this.thumbnailCornerRadius, guildInviteEmbedImpl.thumbnailCornerRadius) && Intrinsics.areEqual(this.thumbnailText, guildInviteEmbedImpl.thumbnailText) && Intrinsics.areEqual(this.thumbnailUrl, guildInviteEmbedImpl.thumbnailUrl) && Intrinsics.areEqual(this.titleColor, guildInviteEmbedImpl.titleColor) && Intrinsics.areEqual(this.titleText, guildInviteEmbedImpl.titleText) && Intrinsics.areEqual(this.badgeIconUrl, guildInviteEmbedImpl.badgeIconUrl);
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getAcceptLabelBackgroundColor() {
        return this.acceptLabelBackgroundColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getAcceptLabelBorderColor() {
        return this.acceptLabelBorderColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getAcceptLabelColor() {
        return this.acceptLabelColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getAcceptLabelText() {
        return this.acceptLabelText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public int getBackgroundColor() {
        return this.backgroundColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteEmbed
    public String getBadgeIconUrl() {
        return this.badgeIconUrl;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getBodyText() {
        return this.bodyText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getBodyTextColor() {
        return this.bodyTextColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public int getBorderColor() {
        return this.borderColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Boolean getCanBeAccepted() {
        return this.canBeAccepted;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteEmbed
    public String getChannelIcon() {
        return this.channelIcon;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteEmbed
    public String getChannelName() {
        return this.channelName;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Boolean getEmbedCanBeTapped() {
        return this.embedCanBeTapped;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public int getHeaderColor() {
        return this.headerColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getHeaderText() {
        return this.headerText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getInviteSplash() {
        return this.inviteSplash;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteEmbed
    public String getMemberText() {
        return this.memberText;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteEmbed
    public String getOnlineText() {
        return this.onlineText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getResolvingGradientEnd() {
        return this.resolvingGradientEnd;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getResolvingGradientStart() {
        return this.resolvingGradientStart;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Boolean getSplashHasRadialGradient() {
        return this.splashHasRadialGradient;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getSplashOpacity() {
        return this.splashOpacity;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getSplashUrl() {
        return this.splashUrl;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getSubtitle() {
        return this.subtitle;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getSubtitleColor() {
        return this.subtitleColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getThumbnailBackgroundColor() {
        return this.thumbnailBackgroundColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getThumbnailCornerRadius() {
        return this.thumbnailCornerRadius;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getThumbnailText() {
        return this.thumbnailText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getThumbnailUrl() {
        return this.thumbnailUrl;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getTitleColor() {
        return this.titleColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getTitleText() {
        return this.titleText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    @NotNull
    public InviteType getType() {
        return this.type;
    }

    public int hashCode() {
        int u5 = a.u(this.headerColor, a.u(this.borderColor, Integer.hashCode(this.backgroundColor) * 31, 31), 31);
        String str = this.headerText;
        int hashCode = (this.type.hashCode() + ((u5 + (str == null ? 0 : str.hashCode())) * 31)) * 31;
        Integer num = this.acceptLabelBackgroundColor;
        int hashCode2 = (hashCode + (num == null ? 0 : num.hashCode())) * 31;
        Integer num2 = this.acceptLabelBorderColor;
        int hashCode3 = (hashCode2 + (num2 == null ? 0 : num2.hashCode())) * 31;
        Integer num3 = this.acceptLabelColor;
        int hashCode4 = (hashCode3 + (num3 == null ? 0 : num3.hashCode())) * 31;
        String str2 = this.acceptLabelText;
        int hashCode5 = (hashCode4 + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.bodyText;
        int hashCode6 = (hashCode5 + (str3 == null ? 0 : str3.hashCode())) * 31;
        Integer num4 = this.bodyTextColor;
        int hashCode7 = (hashCode6 + (num4 == null ? 0 : num4.hashCode())) * 31;
        Boolean bool = this.canBeAccepted;
        int hashCode8 = (hashCode7 + (bool == null ? 0 : bool.hashCode())) * 31;
        String str4 = this.channelIcon;
        int hashCode9 = (hashCode8 + (str4 == null ? 0 : str4.hashCode())) * 31;
        String str5 = this.channelName;
        int hashCode10 = (hashCode9 + (str5 == null ? 0 : str5.hashCode())) * 31;
        Boolean bool2 = this.embedCanBeTapped;
        int hashCode11 = (hashCode10 + (bool2 == null ? 0 : bool2.hashCode())) * 31;
        String str6 = this.memberText;
        int hashCode12 = (hashCode11 + (str6 == null ? 0 : str6.hashCode())) * 31;
        String str7 = this.onlineText;
        int hashCode13 = (hashCode12 + (str7 == null ? 0 : str7.hashCode())) * 31;
        Integer num5 = this.resolvingGradientEnd;
        int hashCode14 = (hashCode13 + (num5 == null ? 0 : num5.hashCode())) * 31;
        Integer num6 = this.resolvingGradientStart;
        int hashCode15 = (hashCode14 + (num6 == null ? 0 : num6.hashCode())) * 31;
        Boolean bool3 = this.splashHasRadialGradient;
        int hashCode16 = (hashCode15 + (bool3 == null ? 0 : bool3.hashCode())) * 31;
        Integer num7 = this.splashOpacity;
        int hashCode17 = (hashCode16 + (num7 == null ? 0 : num7.hashCode())) * 31;
        String str8 = this.splashUrl;
        int hashCode18 = (hashCode17 + (str8 == null ? 0 : str8.hashCode())) * 31;
        String str9 = this.inviteSplash;
        int hashCode19 = (hashCode18 + (str9 == null ? 0 : str9.hashCode())) * 31;
        String str10 = this.subtitle;
        int hashCode20 = (hashCode19 + (str10 == null ? 0 : str10.hashCode())) * 31;
        Integer num8 = this.subtitleColor;
        int hashCode21 = (hashCode20 + (num8 == null ? 0 : num8.hashCode())) * 31;
        Integer num9 = this.thumbnailBackgroundColor;
        int hashCode22 = (hashCode21 + (num9 == null ? 0 : num9.hashCode())) * 31;
        Integer num10 = this.thumbnailCornerRadius;
        int hashCode23 = (hashCode22 + (num10 == null ? 0 : num10.hashCode())) * 31;
        String str11 = this.thumbnailText;
        int hashCode24 = (hashCode23 + (str11 == null ? 0 : str11.hashCode())) * 31;
        String str12 = this.thumbnailUrl;
        int hashCode25 = (hashCode24 + (str12 == null ? 0 : str12.hashCode())) * 31;
        Integer num11 = this.titleColor;
        int hashCode26 = (hashCode25 + (num11 == null ? 0 : num11.hashCode())) * 31;
        String str13 = this.titleText;
        int hashCode27 = (hashCode26 + (str13 == null ? 0 : str13.hashCode())) * 31;
        String str14 = this.badgeIconUrl;
        return hashCode27 + (str14 != null ? str14.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        int i5 = this.backgroundColor;
        int i6 = this.borderColor;
        int i10 = this.headerColor;
        String str = this.headerText;
        InviteType inviteType = this.type;
        Integer num = this.acceptLabelBackgroundColor;
        Integer num2 = this.acceptLabelBorderColor;
        Integer num3 = this.acceptLabelColor;
        String str2 = this.acceptLabelText;
        String str3 = this.bodyText;
        Integer num4 = this.bodyTextColor;
        Boolean bool = this.canBeAccepted;
        String str4 = this.channelIcon;
        String str5 = this.channelName;
        Boolean bool2 = this.embedCanBeTapped;
        String str6 = this.memberText;
        String str7 = this.onlineText;
        Integer num5 = this.resolvingGradientEnd;
        Integer num6 = this.resolvingGradientStart;
        Boolean bool3 = this.splashHasRadialGradient;
        Integer num7 = this.splashOpacity;
        String str8 = this.splashUrl;
        String str9 = this.inviteSplash;
        String str10 = this.subtitle;
        Integer num8 = this.subtitleColor;
        Integer num9 = this.thumbnailBackgroundColor;
        Integer num10 = this.thumbnailCornerRadius;
        String str11 = this.thumbnailText;
        String str12 = this.thumbnailUrl;
        Integer num11 = this.titleColor;
        String str13 = this.titleText;
        String str14 = this.badgeIconUrl;
        StringBuilder q5 = a3.e.q(i5, "GuildInviteEmbedImpl(backgroundColor=", i6, ", borderColor=", ", headerColor=");
        a3.e.z(q5, i10, ", headerText=", str, ", type=");
        q5.append(inviteType);
        q5.append(", acceptLabelBackgroundColor=");
        q5.append(num);
        q5.append(", acceptLabelBorderColor=");
        d.s(q5, num2, ", acceptLabelColor=", num3, ", acceptLabelText=");
        a3.e.A(q5, str2, ", bodyText=", str3, ", bodyTextColor=");
        q5.append(num4);
        q5.append(", canBeAccepted=");
        q5.append(bool);
        q5.append(", channelIcon=");
        a3.e.A(q5, str4, ", channelName=", str5, ", embedCanBeTapped=");
        q5.append(bool2);
        q5.append(", memberText=");
        q5.append(str6);
        q5.append(", onlineText=");
        a.r(num5, str7, ", resolvingGradientEnd=", ", resolvingGradientStart=", q5);
        q5.append(num6);
        q5.append(", splashHasRadialGradient=");
        q5.append(bool3);
        q5.append(", splashOpacity=");
        d.r(num7, ", splashUrl=", str8, ", inviteSplash=", q5);
        a3.e.A(q5, str9, ", subtitle=", str10, ", subtitleColor=");
        d.s(q5, num8, ", thumbnailBackgroundColor=", num9, ", thumbnailCornerRadius=");
        d.r(num10, ", thumbnailText=", str11, ", thumbnailUrl=", q5);
        a.r(num11, str12, ", titleColor=", ", titleText=", q5);
        return a.k(q5, str13, ", badgeIconUrl=", str14, ")");
    }

    public /* synthetic */ GuildInviteEmbedImpl(int i5, int i6, int i10, String str, InviteType inviteType, Integer num, Integer num2, Integer num3, String str2, String str3, Integer num4, Boolean bool, String str4, String str5, Boolean bool2, String str6, String str7, Integer num5, Integer num6, Boolean bool3, Integer num7, String str8, String str9, String str10, Integer num8, Integer num9, Integer num10, String str11, String str12, Integer num11, String str13, String str14, int i11, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, i6, i10, str, inviteType, (i11 & 32) != 0 ? null : num, (i11 & 64) != 0 ? null : num2, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? null : num3, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? null : str2, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : str3, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? null : num4, (i11 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? null : bool, (i11 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? null : str4, (i11 & 8192) != 0 ? null : str5, (i11 & 16384) != 0 ? null : bool2, (32768 & i11) != 0 ? null : str6, (65536 & i11) != 0 ? null : str7, (131072 & i11) != 0 ? null : num5, (262144 & i11) != 0 ? null : num6, (524288 & i11) != 0 ? null : bool3, (1048576 & i11) != 0 ? null : num7, (2097152 & i11) != 0 ? null : str8, (4194304 & i11) != 0 ? null : str9, (8388608 & i11) != 0 ? null : str10, (16777216 & i11) != 0 ? null : num8, (33554432 & i11) != 0 ? null : num9, (67108864 & i11) != 0 ? null : num10, (134217728 & i11) != 0 ? null : str11, (268435456 & i11) != 0 ? null : str12, (536870912 & i11) != 0 ? null : num11, (1073741824 & i11) != 0 ? null : str13, (i11 & Integer.MIN_VALUE) != 0 ? null : str14);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public GuildInviteEmbedImpl(int i5, int i6, int i10, String str, @NotNull InviteType type, Integer num, Integer num2, Integer num3, String str2, String str3, Integer num4, Boolean bool, String str4, String str5, Boolean bool2, String str6, String str7, Integer num5, Integer num6, Boolean bool3, Integer num7, String str8, String str9, String str10, Integer num8, Integer num9, Integer num10, String str11, String str12, Integer num11, String str13, String str14) {
        super(null);
        Intrinsics.checkNotNullParameter(type, "type");
        this.backgroundColor = i5;
        this.borderColor = i6;
        this.headerColor = i10;
        this.headerText = str;
        this.type = type;
        this.acceptLabelBackgroundColor = num;
        this.acceptLabelBorderColor = num2;
        this.acceptLabelColor = num3;
        this.acceptLabelText = str2;
        this.bodyText = str3;
        this.bodyTextColor = num4;
        this.canBeAccepted = bool;
        this.channelIcon = str4;
        this.channelName = str5;
        this.embedCanBeTapped = bool2;
        this.memberText = str6;
        this.onlineText = str7;
        this.resolvingGradientEnd = num5;
        this.resolvingGradientStart = num6;
        this.splashHasRadialGradient = bool3;
        this.splashOpacity = num7;
        this.splashUrl = str8;
        this.inviteSplash = str9;
        this.subtitle = str10;
        this.subtitleColor = num8;
        this.thumbnailBackgroundColor = num9;
        this.thumbnailCornerRadius = num10;
        this.thumbnailText = str11;
        this.thumbnailUrl = str12;
        this.titleColor = num11;
        this.titleText = str13;
        this.badgeIconUrl = str14;
    }
}
