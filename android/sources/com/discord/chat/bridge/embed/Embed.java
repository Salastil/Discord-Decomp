package com.discord.chat.bridge.embed;

import androidx.recyclerview.widget.RecyclerView;
import bs.d;
import bs.g;
import bs.h1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.botuikit.Component;
import com.discord.chat.bridge.botuikit.ComponentSerializer;
import com.discord.chat.bridge.embed.EmbedFailureState;
import com.discord.chat.bridge.spoiler.SpoilerableData;
import com.discord.chat.bridge.structurabletext.StructurableText;
import com.discord.chat.bridge.structurabletext.StructurableTextSerializer;
import com.discord.jank_stats.JankRecordStore;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.modules.dialog.AlertFragment;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.uimanager.events.PointerEventHelper;
import fo.l;
import fo.m;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import org.webrtc.MediaStreamTrack;
import org.webrtc.PeerConnection;
import xr.e;

@e
@Metadata(d1 = {"\u0000\u008e\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\bX\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 \u009d\u00012\u00020\u0001:\u0004\u009c\u0001\u009d\u0001B\u009f\u0003\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\f\u0012\u0010\b\u0002\u0010\r\u001a\n\u0012\u0004\u0012\u00020\u000f\u0018\u00010\u000e\u0012\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\f\u0012\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u0014\u0012\u0010\b\u0002\u0010\u0015\u001a\n\u0012\u0004\u0012\u00020\u0014\u0018\u00010\u000e\u0012\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\u0014\u0012\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\u0018\u0012\n\b\u0002\u0010\u0019\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\u001d\u0012\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\u001f\u0012\n\b\u0002\u0010 \u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010!\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\"\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010#\u001a\u0004\u0018\u00010\u001d\u0012\n\b\u0002\u0010$\u001a\u0004\u0018\u00010\u001d\u0012\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\u001d\u0012\n\b\u0002\u0010&\u001a\u0004\u0018\u00010\u0005\u0012\u0010\b\u0002\u0010'\u001a\n\u0012\u0004\u0012\u00020(\u0018\u00010\u000e\u0012\n\b\u0002\u0010)\u001a\u0004\u0018\u00010*\u0012\n\b\u0003\u0010+\u001a\u0004\u0018\u00010,\u0012\n\b\u0003\u0010-\u001a\u0004\u0018\u00010,\u0012\n\b\u0003\u0010.\u001a\u0004\u0018\u00010,\u0012\b\b\u0001\u0010/\u001a\u00020,\u0012\n\b\u0003\u00100\u001a\u0004\u0018\u00010,¢\u0006\u0004\b1\u00102B\u0091\u0003\b\u0010\u0012\u0006\u00103\u001a\u00020,\u0012\u0006\u00104\u001a\u00020,\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f\u0012\u000e\u0010\r\u001a\n\u0012\u0004\u0012\u00020\u000f\u0018\u00010\u000e\u0012\b\u0010\u0010\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\f\u0012\b\u0010\u0013\u001a\u0004\u0018\u00010\u0014\u0012\u000e\u0010\u0015\u001a\n\u0012\u0004\u0012\u00020\u0014\u0018\u00010\u000e\u0012\b\u0010\u0016\u001a\u0004\u0018\u00010\u0014\u0012\b\u0010\u0017\u001a\u0004\u0018\u00010\u0018\u0012\b\u0010\u0019\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u001a\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u001b\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u001c\u001a\u0004\u0018\u00010\u001d\u0012\b\u0010\u001e\u001a\u0004\u0018\u00010\u001f\u0012\b\u0010 \u001a\u0004\u0018\u00010\u0005\u0012\b\u0010!\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\"\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010#\u001a\u0004\u0018\u00010\u001d\u0012\b\u0010$\u001a\u0004\u0018\u00010\u001d\u0012\b\u0010%\u001a\u0004\u0018\u00010\u001d\u0012\b\u0010&\u001a\u0004\u0018\u00010\u0005\u0012\u000e\u0010'\u001a\n\u0012\u0004\u0012\u00020(\u0018\u00010\u000e\u0012\b\u0010)\u001a\u0004\u0018\u00010*\u0012\b\u0010+\u001a\u0004\u0018\u00010,\u0012\b\u0010-\u001a\u0004\u0018\u00010,\u0012\b\u0010.\u001a\u0004\u0018\u00010,\u0012\u0006\u0010/\u001a\u00020,\u0012\b\u00100\u001a\u0004\u0018\u00010,\u0012\b\u00105\u001a\u0004\u0018\u00010\u0005\u0012\b\u00106\u001a\u0004\u0018\u00010\u0005\u0012\b\u00107\u001a\u0004\u0018\u000108¢\u0006\u0004\b1\u00109J\t\u0010l\u001a\u00020\u0003HÆ\u0003J\u000b\u0010m\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000b\u0010n\u001a\u0004\u0018\u00010\u0007HÆ\u0003J\u000b\u0010o\u001a\u0004\u0018\u00010\tHÆ\u0003J\u000b\u0010p\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000b\u0010q\u001a\u0004\u0018\u00010\fHÆ\u0003J\u0011\u0010r\u001a\n\u0012\u0004\u0012\u00020\u000f\u0018\u00010\u000eHÆ\u0003J\u000b\u0010s\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000b\u0010t\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000b\u0010u\u001a\u0004\u0018\u00010\fHÆ\u0003J\u000b\u0010v\u001a\u0004\u0018\u00010\u0014HÆ\u0003J\u0011\u0010w\u001a\n\u0012\u0004\u0012\u00020\u0014\u0018\u00010\u000eHÆ\u0003J\u000b\u0010x\u001a\u0004\u0018\u00010\u0014HÆ\u0003J\u000b\u0010y\u001a\u0004\u0018\u00010\u0018HÆ\u0003J\u000b\u0010z\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000b\u0010{\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000b\u0010|\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u0010\u0010}\u001a\u0004\u0018\u00010\u001dHÆ\u0003¢\u0006\u0002\u0010TJ\u000b\u0010~\u001a\u0004\u0018\u00010\u001fHÆ\u0003J\u000b\u0010\u007f\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\f\u0010\u0080\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\f\u0010\u0081\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u0011\u0010\u0082\u0001\u001a\u0004\u0018\u00010\u001dHÆ\u0003¢\u0006\u0002\u0010TJ\u0011\u0010\u0083\u0001\u001a\u0004\u0018\u00010\u001dHÆ\u0003¢\u0006\u0002\u0010TJ\u0011\u0010\u0084\u0001\u001a\u0004\u0018\u00010\u001dHÆ\u0003¢\u0006\u0002\u0010TJ\f\u0010\u0085\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u0012\u0010\u0086\u0001\u001a\n\u0012\u0004\u0012\u00020(\u0018\u00010\u000eHÆ\u0003J\f\u0010\u0087\u0001\u001a\u0004\u0018\u00010*HÆ\u0003J\u0011\u0010\u0088\u0001\u001a\u0004\u0018\u00010,HÆ\u0003¢\u0006\u0002\u0010cJ\u0011\u0010\u0089\u0001\u001a\u0004\u0018\u00010,HÆ\u0003¢\u0006\u0002\u0010cJ\u0011\u0010\u008a\u0001\u001a\u0004\u0018\u00010,HÆ\u0003¢\u0006\u0002\u0010cJ\n\u0010\u008b\u0001\u001a\u00020,HÆ\u0003J\u0011\u0010\u008c\u0001\u001a\u0004\u0018\u00010,HÆ\u0003¢\u0006\u0002\u0010cJª\u0003\u0010\u008d\u0001\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\f2\u0010\b\u0002\u0010\r\u001a\n\u0012\u0004\u0012\u00020\u000f\u0018\u00010\u000e2\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\f2\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u00142\u0010\b\u0002\u0010\u0015\u001a\n\u0012\u0004\u0012\u00020\u0014\u0018\u00010\u000e2\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\u00142\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\u00182\n\b\u0002\u0010\u0019\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\u001d2\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\u001f2\n\b\u0002\u0010 \u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010!\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\"\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010#\u001a\u0004\u0018\u00010\u001d2\n\b\u0002\u0010$\u001a\u0004\u0018\u00010\u001d2\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\u001d2\n\b\u0002\u0010&\u001a\u0004\u0018\u00010\u00052\u0010\b\u0002\u0010'\u001a\n\u0012\u0004\u0012\u00020(\u0018\u00010\u000e2\n\b\u0002\u0010)\u001a\u0004\u0018\u00010*2\n\b\u0003\u0010+\u001a\u0004\u0018\u00010,2\n\b\u0003\u0010-\u001a\u0004\u0018\u00010,2\n\b\u0003\u0010.\u001a\u0004\u0018\u00010,2\b\b\u0003\u0010/\u001a\u00020,2\n\b\u0003\u00100\u001a\u0004\u0018\u00010,HÆ\u0001¢\u0006\u0003\u0010\u008e\u0001J\u0016\u0010\u008f\u0001\u001a\u00020\u001d2\n\u0010\u0090\u0001\u001a\u0005\u0018\u00010\u0091\u0001HÖ\u0003J\n\u0010\u0092\u0001\u001a\u00020,HÖ\u0001J\n\u0010\u0093\u0001\u001a\u00020\u0005HÖ\u0001J-\u0010\u0094\u0001\u001a\u00030\u0095\u00012\u0007\u0010\u0096\u0001\u001a\u00020\u00002\b\u0010\u0097\u0001\u001a\u00030\u0098\u00012\b\u0010\u0099\u0001\u001a\u00030\u009a\u0001H\u0001¢\u0006\u0003\b\u009b\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b:\u0010;R\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b<\u0010=R\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b>\u0010?R\u0013\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\b\n\u0000\u001a\u0004\b@\u0010AR\u0013\u0010\n\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\bB\u0010=R\u0013\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\b\n\u0000\u001a\u0004\bC\u0010DR\u0019\u0010\r\u001a\n\u0012\u0004\u0012\u00020\u000f\u0018\u00010\u000e¢\u0006\b\n\u0000\u001a\u0004\bE\u0010FR\u0013\u0010\u0010\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\bG\u0010=R\u0013\u0010\u0011\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\bH\u0010=R\u0013\u0010\u0012\u001a\u0004\u0018\u00010\f¢\u0006\b\n\u0000\u001a\u0004\bI\u0010DR\u0013\u0010\u0013\u001a\u0004\u0018\u00010\u0014¢\u0006\b\n\u0000\u001a\u0004\bJ\u0010KR\u0019\u0010\u0015\u001a\n\u0012\u0004\u0012\u00020\u0014\u0018\u00010\u000e¢\u0006\b\n\u0000\u001a\u0004\bL\u0010FR\u0013\u0010\u0016\u001a\u0004\u0018\u00010\u0014¢\u0006\b\n\u0000\u001a\u0004\bM\u0010KR\u0013\u0010\u0017\u001a\u0004\u0018\u00010\u0018¢\u0006\b\n\u0000\u001a\u0004\bN\u0010OR\u0013\u0010\u0019\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\bP\u0010=R\u0013\u0010\u001a\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\bQ\u0010=R\u0013\u0010\u001b\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\bR\u0010=R\u0015\u0010\u001c\u001a\u0004\u0018\u00010\u001d¢\u0006\n\n\u0002\u0010U\u001a\u0004\bS\u0010TR\u0013\u0010\u001e\u001a\u0004\u0018\u00010\u001f¢\u0006\b\n\u0000\u001a\u0004\bV\u0010WR\u0013\u0010 \u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\bX\u0010=R\u0013\u0010!\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\bY\u0010=R\u0013\u0010\"\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\bZ\u0010=R\u0015\u0010#\u001a\u0004\u0018\u00010\u001d¢\u0006\n\n\u0002\u0010U\u001a\u0004\b[\u0010TR\u0015\u0010$\u001a\u0004\u0018\u00010\u001d¢\u0006\n\n\u0002\u0010U\u001a\u0004\b\\\u0010TR\u0015\u0010%\u001a\u0004\u0018\u00010\u001d¢\u0006\n\n\u0002\u0010U\u001a\u0004\b]\u0010TR\u0013\u0010&\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b^\u0010=R\u0019\u0010'\u001a\n\u0012\u0004\u0012\u00020(\u0018\u00010\u000e¢\u0006\b\n\u0000\u001a\u0004\b_\u0010FR\u0013\u0010)\u001a\u0004\u0018\u00010*¢\u0006\b\n\u0000\u001a\u0004\b`\u0010aR\u0015\u0010+\u001a\u0004\u0018\u00010,¢\u0006\n\n\u0002\u0010d\u001a\u0004\bb\u0010cR\u0015\u0010-\u001a\u0004\u0018\u00010,¢\u0006\n\n\u0002\u0010d\u001a\u0004\be\u0010cR\u0015\u0010.\u001a\u0004\u0018\u00010,¢\u0006\n\n\u0002\u0010d\u001a\u0004\bf\u0010cR\u0011\u0010/\u001a\u00020,¢\u0006\b\n\u0000\u001a\u0004\bg\u0010hR\u0015\u00100\u001a\u0004\u0018\u00010,¢\u0006\n\n\u0002\u0010d\u001a\u0004\bi\u0010cR\u0016\u00105\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bj\u0010=R\u0016\u00106\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bk\u0010=¨\u0006\u009e\u0001"}, d2 = {"Lcom/discord/chat/bridge/embed/Embed;", "Lcom/discord/chat/bridge/spoiler/SpoilerableData;", "type", "Lcom/discord/chat/bridge/embed/EmbedType;", StackTraceHelper.ID_KEY, "", "author", "Lcom/discord/chat/bridge/embed/EmbedAuthor;", "provider", "Lcom/discord/chat/bridge/embed/EmbedProvider;", "rawTitle", AlertFragment.ARG_TITLE, "Lcom/discord/chat/bridge/structurabletext/StructurableText;", "fields", "", "Lcom/discord/chat/bridge/embed/EmbedField;", "url", "rawDescription", "description", "image", "Lcom/discord/chat/bridge/embed/EmbedMedia;", "images", MediaStreamTrack.VIDEO_TRACK_KIND, "thumbnail", "Lcom/discord/chat/bridge/embed/EmbedThumbnail;", "numAttachments", "attachmentsSize", "messageSendError", "disableBackgroundColor", "", "footer", "Lcom/discord/chat/bridge/embed/EmbedFooter;", "spoiler", "obscure", "obscureAwaitingScan", "obscureHideControls", "obscureIsOpaque", "verifyAge", "iconURL", "components", "Lcom/discord/chat/bridge/botuikit/Component;", "failureState", "Lcom/discord/chat/bridge/embed/EmbedFailureState;", "providerColor", "", ViewProps.BORDER_LEFT_COLOR, "headerTextColor", "bodyTextColor", ViewProps.BACKGROUND_COLOR, "<init>", "(Lcom/discord/chat/bridge/embed/EmbedType;Ljava/lang/String;Lcom/discord/chat/bridge/embed/EmbedAuthor;Lcom/discord/chat/bridge/embed/EmbedProvider;Ljava/lang/String;Lcom/discord/chat/bridge/structurabletext/StructurableText;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/discord/chat/bridge/structurabletext/StructurableText;Lcom/discord/chat/bridge/embed/EmbedMedia;Ljava/util/List;Lcom/discord/chat/bridge/embed/EmbedMedia;Lcom/discord/chat/bridge/embed/EmbedThumbnail;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Lcom/discord/chat/bridge/embed/EmbedFooter;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/String;Ljava/util/List;Lcom/discord/chat/bridge/embed/EmbedFailureState;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;ILjava/lang/Integer;)V", "seen0", "seen1", "spoilerOrNull", "obscureOrNull", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILcom/discord/chat/bridge/embed/EmbedType;Ljava/lang/String;Lcom/discord/chat/bridge/embed/EmbedAuthor;Lcom/discord/chat/bridge/embed/EmbedProvider;Ljava/lang/String;Lcom/discord/chat/bridge/structurabletext/StructurableText;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/discord/chat/bridge/structurabletext/StructurableText;Lcom/discord/chat/bridge/embed/EmbedMedia;Ljava/util/List;Lcom/discord/chat/bridge/embed/EmbedMedia;Lcom/discord/chat/bridge/embed/EmbedThumbnail;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Lcom/discord/chat/bridge/embed/EmbedFooter;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/String;Ljava/util/List;Lcom/discord/chat/bridge/embed/EmbedFailureState;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;ILjava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getType", "()Lcom/discord/chat/bridge/embed/EmbedType;", "getId", "()Ljava/lang/String;", "getAuthor", "()Lcom/discord/chat/bridge/embed/EmbedAuthor;", "getProvider", "()Lcom/discord/chat/bridge/embed/EmbedProvider;", "getRawTitle", "getTitle", "()Lcom/discord/chat/bridge/structurabletext/StructurableText;", "getFields", "()Ljava/util/List;", "getUrl", "getRawDescription", "getDescription", "getImage", "()Lcom/discord/chat/bridge/embed/EmbedMedia;", "getImages", "getVideo", "getThumbnail", "()Lcom/discord/chat/bridge/embed/EmbedThumbnail;", "getNumAttachments", "getAttachmentsSize", "getMessageSendError", "getDisableBackgroundColor", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "getFooter", "()Lcom/discord/chat/bridge/embed/EmbedFooter;", "getSpoiler", "getObscure", "getObscureAwaitingScan", "getObscureHideControls", "getObscureIsOpaque", "getVerifyAge", "getIconURL", "getComponents", "getFailureState", "()Lcom/discord/chat/bridge/embed/EmbedFailureState;", "getProviderColor", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getBorderLeftColor", "getHeaderTextColor", "getBodyTextColor", "()I", "getBackgroundColor", "getSpoilerOrNull", "getObscureOrNull", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "component14", "component15", "component16", "component17", "component18", "component19", "component20", "component21", "component22", "component23", "component24", "component25", "component26", "component27", "component28", "component29", "component30", "component31", "component32", "component33", "copy", "(Lcom/discord/chat/bridge/embed/EmbedType;Ljava/lang/String;Lcom/discord/chat/bridge/embed/EmbedAuthor;Lcom/discord/chat/bridge/embed/EmbedProvider;Ljava/lang/String;Lcom/discord/chat/bridge/structurabletext/StructurableText;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/discord/chat/bridge/structurabletext/StructurableText;Lcom/discord/chat/bridge/embed/EmbedMedia;Ljava/util/List;Lcom/discord/chat/bridge/embed/EmbedMedia;Lcom/discord/chat/bridge/embed/EmbedThumbnail;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Lcom/discord/chat/bridge/embed/EmbedFooter;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/String;Ljava/util/List;Lcom/discord/chat/bridge/embed/EmbedFailureState;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;ILjava/lang/Integer;)Lcom/discord/chat/bridge/embed/Embed;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nEmbed.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Embed.kt\ncom/discord/chat/bridge/embed/Embed\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,48:1\n1#2:49\n*E\n"})
/* loaded from: classes.dex */
public final /* data */ class Embed implements SpoilerableData {

    @NotNull
    private static final Lazy[] $childSerializers;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String attachmentsSize;
    private final EmbedAuthor author;
    private final Integer backgroundColor;
    private final int bodyTextColor;
    private final Integer borderLeftColor;
    private final List<Component> components;
    private final StructurableText description;
    private final Boolean disableBackgroundColor;
    private final EmbedFailureState failureState;
    private final List<EmbedField> fields;
    private final EmbedFooter footer;
    private final Integer headerTextColor;
    private final String iconURL;
    private final String id;
    private final EmbedMedia image;
    private final List<EmbedMedia> images;
    private final String messageSendError;
    private final String numAttachments;
    private final String obscure;
    private final String obscureAwaitingScan;
    private final Boolean obscureHideControls;
    private final Boolean obscureIsOpaque;
    private final String obscureOrNull;
    private final EmbedProvider provider;
    private final Integer providerColor;
    private final String rawDescription;
    private final String rawTitle;
    private final String spoiler;
    private final String spoilerOrNull;
    private final EmbedThumbnail thumbnail;
    private final StructurableText title;

    @NotNull
    private final EmbedType type;
    private final String url;
    private final Boolean verifyAge;
    private final EmbedMedia video;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/embed/Embed$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/embed/Embed;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return Embed$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    static {
        m mVar = m.f8827e;
        $childSerializers = new Lazy[]{l.b(mVar, new com.discord.chat.bridge.botuikit.b(24)), null, null, null, null, null, l.b(mVar, new com.discord.chat.bridge.botuikit.b(25)), null, null, null, null, l.b(mVar, new com.discord.chat.bridge.botuikit.b(26)), null, null, null, null, null, null, null, null, null, null, null, null, null, null, l.b(mVar, new com.discord.chat.bridge.botuikit.b(27)), null, null, null, null, null, null, null, null};
    }

    public /* synthetic */ Embed(int i5, int i6, EmbedType embedType, String str, EmbedAuthor embedAuthor, EmbedProvider embedProvider, String str2, StructurableText structurableText, List list, String str3, String str4, StructurableText structurableText2, EmbedMedia embedMedia, List list2, EmbedMedia embedMedia2, EmbedThumbnail embedThumbnail, String str5, String str6, String str7, Boolean bool, EmbedFooter embedFooter, String str8, String str9, String str10, Boolean bool2, Boolean bool3, Boolean bool4, String str11, List list3, EmbedFailureState embedFailureState, Integer num, Integer num2, Integer num3, int i10, Integer num4, String str12, String str13, SerializationConstructorMarker serializationConstructorMarker) {
        String str14;
        String str15 = null;
        if (-2147483647 != (i5 & (-2147483647))) {
            h1.k(new int[]{i5, i6}, new int[]{-2147483647, 0}, Embed$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.type = embedType;
        if ((i5 & 2) == 0) {
            this.id = null;
        } else {
            this.id = str;
        }
        if ((i5 & 4) == 0) {
            this.author = null;
        } else {
            this.author = embedAuthor;
        }
        if ((i5 & 8) == 0) {
            this.provider = null;
        } else {
            this.provider = embedProvider;
        }
        if ((i5 & 16) == 0) {
            this.rawTitle = null;
        } else {
            this.rawTitle = str2;
        }
        if ((i5 & 32) == 0) {
            this.title = null;
        } else {
            this.title = structurableText;
        }
        if ((i5 & 64) == 0) {
            this.fields = null;
        } else {
            this.fields = list;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            this.url = null;
        } else {
            this.url = str3;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.rawDescription = null;
        } else {
            this.rawDescription = str4;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.description = null;
        } else {
            this.description = structurableText2;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 0) {
            this.image = null;
        } else {
            this.image = embedMedia;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_MOVED) == 0) {
            this.images = null;
        } else {
            this.images = list2;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
            this.video = null;
        } else {
            this.video = embedMedia2;
        }
        if ((i5 & 8192) == 0) {
            this.thumbnail = null;
        } else {
            this.thumbnail = embedThumbnail;
        }
        if ((i5 & 16384) == 0) {
            this.numAttachments = null;
        } else {
            this.numAttachments = str5;
        }
        if ((32768 & i5) == 0) {
            this.attachmentsSize = null;
        } else {
            this.attachmentsSize = str6;
        }
        if ((65536 & i5) == 0) {
            this.messageSendError = null;
        } else {
            this.messageSendError = str7;
        }
        if ((131072 & i5) == 0) {
            this.disableBackgroundColor = null;
        } else {
            this.disableBackgroundColor = bool;
        }
        if ((262144 & i5) == 0) {
            this.footer = null;
        } else {
            this.footer = embedFooter;
        }
        if ((524288 & i5) == 0) {
            this.spoiler = null;
        } else {
            this.spoiler = str8;
        }
        if ((1048576 & i5) == 0) {
            this.obscure = null;
        } else {
            this.obscure = str9;
        }
        if ((2097152 & i5) == 0) {
            this.obscureAwaitingScan = null;
        } else {
            this.obscureAwaitingScan = str10;
        }
        if ((4194304 & i5) == 0) {
            this.obscureHideControls = null;
        } else {
            this.obscureHideControls = bool2;
        }
        if ((8388608 & i5) == 0) {
            this.obscureIsOpaque = null;
        } else {
            this.obscureIsOpaque = bool3;
        }
        if ((16777216 & i5) == 0) {
            this.verifyAge = null;
        } else {
            this.verifyAge = bool4;
        }
        if ((33554432 & i5) == 0) {
            this.iconURL = null;
        } else {
            this.iconURL = str11;
        }
        if ((67108864 & i5) == 0) {
            this.components = null;
        } else {
            this.components = list3;
        }
        if ((134217728 & i5) == 0) {
            this.failureState = null;
        } else {
            this.failureState = embedFailureState;
        }
        if ((268435456 & i5) == 0) {
            this.providerColor = null;
        } else {
            this.providerColor = num;
        }
        if ((536870912 & i5) == 0) {
            this.borderLeftColor = null;
        } else {
            this.borderLeftColor = num2;
        }
        if ((i5 & 1073741824) == 0) {
            this.headerTextColor = null;
        } else {
            this.headerTextColor = num3;
        }
        this.bodyTextColor = i10;
        if ((i6 & 1) == 0) {
            this.backgroundColor = null;
        } else {
            this.backgroundColor = num4;
        }
        if ((i6 & 2) == 0) {
            str14 = this.spoiler;
            if (str14 == null || StringsKt.K(str14)) {
                str14 = null;
            }
        } else {
            str14 = str12;
        }
        this.spoilerOrNull = str14;
        if ((i6 & 4) != 0) {
            this.obscureOrNull = str13;
            return;
        }
        String str16 = this.obscure;
        if (str16 != null && !StringsKt.K(str16)) {
            str15 = str16;
        }
        this.obscureOrNull = str15;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return EmbedType.INSTANCE.serializer();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$6() {
        return new d(EmbedField$$serializer.INSTANCE, 0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$7() {
        return new d(EmbedMedia$$serializer.INSTANCE, 0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$8() {
        return new d(ComponentSerializer.INSTANCE, 0);
    }

    public static /* synthetic */ Embed copy$default(Embed embed, EmbedType embedType, String str, EmbedAuthor embedAuthor, EmbedProvider embedProvider, String str2, StructurableText structurableText, List list, String str3, String str4, StructurableText structurableText2, EmbedMedia embedMedia, List list2, EmbedMedia embedMedia2, EmbedThumbnail embedThumbnail, String str5, String str6, String str7, Boolean bool, EmbedFooter embedFooter, String str8, String str9, String str10, Boolean bool2, Boolean bool3, Boolean bool4, String str11, List list3, EmbedFailureState embedFailureState, Integer num, Integer num2, Integer num3, int i5, Integer num4, int i6, int i10, Object obj) {
        Integer num5;
        int i11;
        String str12;
        Boolean bool5;
        EmbedFooter embedFooter2;
        String str13;
        String str14;
        String str15;
        Boolean bool6;
        Boolean bool7;
        Boolean bool8;
        String str16;
        List list4;
        EmbedFailureState embedFailureState2;
        Integer num6;
        Integer num7;
        Integer num8;
        String str17;
        String str18;
        EmbedAuthor embedAuthor2;
        EmbedProvider embedProvider2;
        String str19;
        StructurableText structurableText3;
        List list5;
        String str20;
        String str21;
        StructurableText structurableText4;
        EmbedMedia embedMedia3;
        List list6;
        EmbedMedia embedMedia4;
        EmbedThumbnail embedThumbnail2;
        String str22;
        EmbedType embedType2 = (i6 & 1) != 0 ? embed.type : embedType;
        String str23 = (i6 & 2) != 0 ? embed.id : str;
        EmbedAuthor embedAuthor3 = (i6 & 4) != 0 ? embed.author : embedAuthor;
        EmbedProvider embedProvider3 = (i6 & 8) != 0 ? embed.provider : embedProvider;
        String str24 = (i6 & 16) != 0 ? embed.rawTitle : str2;
        StructurableText structurableText5 = (i6 & 32) != 0 ? embed.title : structurableText;
        List list7 = (i6 & 64) != 0 ? embed.fields : list;
        String str25 = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? embed.url : str3;
        String str26 = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? embed.rawDescription : str4;
        StructurableText structurableText6 = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? embed.description : structurableText2;
        EmbedMedia embedMedia5 = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? embed.image : embedMedia;
        List list8 = (i6 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? embed.images : list2;
        EmbedMedia embedMedia6 = (i6 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? embed.video : embedMedia2;
        EmbedThumbnail embedThumbnail3 = (i6 & 8192) != 0 ? embed.thumbnail : embedThumbnail;
        EmbedType embedType3 = embedType2;
        String str27 = (i6 & 16384) != 0 ? embed.numAttachments : str5;
        String str28 = (i6 & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0 ? embed.attachmentsSize : str6;
        String str29 = (i6 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) != 0 ? embed.messageSendError : str7;
        Boolean bool9 = (i6 & KeyCommandDescriptor.ModifierFlags.SHIFT) != 0 ? embed.disableBackgroundColor : bool;
        EmbedFooter embedFooter3 = (i6 & KeyCommandDescriptor.ModifierFlags.CONTROL) != 0 ? embed.footer : embedFooter;
        String str30 = (i6 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) != 0 ? embed.spoiler : str8;
        String str31 = (i6 & KeyCommandDescriptor.ModifierFlags.COMMAND) != 0 ? embed.obscure : str9;
        String str32 = (i6 & KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD) != 0 ? embed.obscureAwaitingScan : str10;
        Boolean bool10 = (i6 & 4194304) != 0 ? embed.obscureHideControls : bool2;
        Boolean bool11 = (i6 & 8388608) != 0 ? embed.obscureIsOpaque : bool3;
        Boolean bool12 = (i6 & PointerEventHelper.X_FLAG_SUPPORTS_HOVER) != 0 ? embed.verifyAge : bool4;
        String str33 = (i6 & 33554432) != 0 ? embed.iconURL : str11;
        List list9 = (i6 & 67108864) != 0 ? embed.components : list3;
        EmbedFailureState embedFailureState3 = (i6 & 134217728) != 0 ? embed.failureState : embedFailureState;
        Integer num9 = (i6 & 268435456) != 0 ? embed.providerColor : num;
        Integer num10 = (i6 & 536870912) != 0 ? embed.borderLeftColor : num2;
        Integer num11 = (i6 & 1073741824) != 0 ? embed.headerTextColor : num3;
        int i12 = (i6 & Integer.MIN_VALUE) != 0 ? embed.bodyTextColor : i5;
        if ((i10 & 1) != 0) {
            i11 = i12;
            num5 = embed.backgroundColor;
            bool5 = bool9;
            embedFooter2 = embedFooter3;
            str13 = str30;
            str14 = str31;
            str15 = str32;
            bool6 = bool10;
            bool7 = bool11;
            bool8 = bool12;
            str16 = str33;
            list4 = list9;
            embedFailureState2 = embedFailureState3;
            num6 = num9;
            num7 = num10;
            num8 = num11;
            str17 = str27;
            embedAuthor2 = embedAuthor3;
            embedProvider2 = embedProvider3;
            str19 = str24;
            structurableText3 = structurableText5;
            list5 = list7;
            str20 = str25;
            str21 = str26;
            structurableText4 = structurableText6;
            embedMedia3 = embedMedia5;
            list6 = list8;
            embedMedia4 = embedMedia6;
            embedThumbnail2 = embedThumbnail3;
            str22 = str28;
            str12 = str29;
            str18 = str23;
        } else {
            num5 = num4;
            i11 = i12;
            str12 = str29;
            bool5 = bool9;
            embedFooter2 = embedFooter3;
            str13 = str30;
            str14 = str31;
            str15 = str32;
            bool6 = bool10;
            bool7 = bool11;
            bool8 = bool12;
            str16 = str33;
            list4 = list9;
            embedFailureState2 = embedFailureState3;
            num6 = num9;
            num7 = num10;
            num8 = num11;
            str17 = str27;
            str18 = str23;
            embedAuthor2 = embedAuthor3;
            embedProvider2 = embedProvider3;
            str19 = str24;
            structurableText3 = structurableText5;
            list5 = list7;
            str20 = str25;
            str21 = str26;
            structurableText4 = structurableText6;
            embedMedia3 = embedMedia5;
            list6 = list8;
            embedMedia4 = embedMedia6;
            embedThumbnail2 = embedThumbnail3;
            str22 = str28;
        }
        return embed.copy(embedType3, str18, embedAuthor2, embedProvider2, str19, structurableText3, list5, str20, str21, structurableText4, embedMedia3, list6, embedMedia4, embedThumbnail2, str17, str22, str12, bool5, embedFooter2, str13, str14, str15, bool6, bool7, bool8, str16, list4, embedFailureState2, num6, num7, num8, i11, num5);
    }

    /* JADX WARN: Code restructure failed: missing block: B:132:0x02ac, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r1, r3) == false) goto L199;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final /* synthetic */ void write$Self$chat_release(Embed self, CompositeEncoder output, SerialDescriptor serialDesc) {
        Lazy[] lazyArr = $childSerializers;
        output.g(serialDesc, 0, (KSerializer) lazyArr[0].getValue(), self.type);
        if (output.I(serialDesc, 1) || self.id != null) {
            output.z(serialDesc, 1, v1.a, self.id);
        }
        if (output.I(serialDesc, 2) || self.author != null) {
            output.z(serialDesc, 2, EmbedAuthor$$serializer.INSTANCE, self.author);
        }
        if (output.I(serialDesc, 3) || self.provider != null) {
            output.z(serialDesc, 3, EmbedProvider$$serializer.INSTANCE, self.provider);
        }
        if (output.I(serialDesc, 4) || self.rawTitle != null) {
            output.z(serialDesc, 4, v1.a, self.rawTitle);
        }
        if (output.I(serialDesc, 5) || self.title != null) {
            output.z(serialDesc, 5, StructurableTextSerializer.INSTANCE, self.title);
        }
        if (output.I(serialDesc, 6) || self.fields != null) {
            output.z(serialDesc, 6, (KSerializer) lazyArr[6].getValue(), self.fields);
        }
        if (output.I(serialDesc, 7) || self.url != null) {
            output.z(serialDesc, 7, v1.a, self.url);
        }
        if (output.I(serialDesc, 8) || self.rawDescription != null) {
            output.z(serialDesc, 8, v1.a, self.rawDescription);
        }
        if (output.I(serialDesc, 9) || self.description != null) {
            output.z(serialDesc, 9, StructurableTextSerializer.INSTANCE, self.description);
        }
        if (output.I(serialDesc, 10) || self.image != null) {
            output.z(serialDesc, 10, EmbedMedia$$serializer.INSTANCE, self.image);
        }
        if (output.I(serialDesc, 11) || self.images != null) {
            output.z(serialDesc, 11, (KSerializer) lazyArr[11].getValue(), self.images);
        }
        if (output.I(serialDesc, 12) || self.video != null) {
            output.z(serialDesc, 12, EmbedMedia$$serializer.INSTANCE, self.video);
        }
        if (output.I(serialDesc, 13) || self.thumbnail != null) {
            output.z(serialDesc, 13, EmbedThumbnail$$serializer.INSTANCE, self.thumbnail);
        }
        if (output.I(serialDesc, 14) || self.numAttachments != null) {
            output.z(serialDesc, 14, v1.a, self.numAttachments);
        }
        if (output.I(serialDesc, 15) || self.attachmentsSize != null) {
            output.z(serialDesc, 15, v1.a, self.attachmentsSize);
        }
        if (output.I(serialDesc, 16) || self.messageSendError != null) {
            output.z(serialDesc, 16, v1.a, self.messageSendError);
        }
        if (output.I(serialDesc, 17) || self.disableBackgroundColor != null) {
            output.z(serialDesc, 17, g.a, self.disableBackgroundColor);
        }
        if (output.I(serialDesc, 18) || self.footer != null) {
            output.z(serialDesc, 18, EmbedFooter$$serializer.INSTANCE, self.footer);
        }
        if (output.I(serialDesc, 19) || self.spoiler != null) {
            output.z(serialDesc, 19, v1.a, self.spoiler);
        }
        if (output.I(serialDesc, 20) || self.obscure != null) {
            output.z(serialDesc, 20, v1.a, self.obscure);
        }
        if (output.I(serialDesc, 21) || self.obscureAwaitingScan != null) {
            output.z(serialDesc, 21, v1.a, self.obscureAwaitingScan);
        }
        if (output.I(serialDesc, 22) || self.obscureHideControls != null) {
            output.z(serialDesc, 22, g.a, self.obscureHideControls);
        }
        if (output.I(serialDesc, 23) || self.obscureIsOpaque != null) {
            output.z(serialDesc, 23, g.a, self.obscureIsOpaque);
        }
        if (output.I(serialDesc, 24) || self.verifyAge != null) {
            output.z(serialDesc, 24, g.a, self.verifyAge);
        }
        if (output.I(serialDesc, 25) || self.iconURL != null) {
            output.z(serialDesc, 25, v1.a, self.iconURL);
        }
        if (output.I(serialDesc, 26) || self.components != null) {
            output.z(serialDesc, 26, (KSerializer) lazyArr[26].getValue(), self.components);
        }
        if (output.I(serialDesc, 27) || self.failureState != null) {
            output.z(serialDesc, 27, EmbedFailureState.Serializer.INSTANCE, self.failureState);
        }
        if (output.I(serialDesc, 28) || self.providerColor != null) {
            output.z(serialDesc, 28, o0.a, self.providerColor);
        }
        if (output.I(serialDesc, 29) || self.borderLeftColor != null) {
            output.z(serialDesc, 29, o0.a, self.borderLeftColor);
        }
        if (output.I(serialDesc, 30) || self.headerTextColor != null) {
            output.z(serialDesc, 30, o0.a, self.headerTextColor);
        }
        output.n(31, self.bodyTextColor, serialDesc);
        if (output.I(serialDesc, 32) || self.backgroundColor != null) {
            output.z(serialDesc, 32, o0.a, self.backgroundColor);
        }
        String str = null;
        if (!output.I(serialDesc, 33)) {
            String spoilerOrNull = self.getSpoilerOrNull();
            String str2 = self.spoiler;
            if (str2 == null || StringsKt.K(str2)) {
                str2 = null;
            }
        }
        output.z(serialDesc, 33, v1.a, self.getSpoilerOrNull());
        if (!output.I(serialDesc, 34)) {
            String obscureOrNull = self.getObscureOrNull();
            String str3 = self.obscure;
            if (str3 != null && !StringsKt.K(str3)) {
                str = str3;
            }
            if (Intrinsics.areEqual(obscureOrNull, str)) {
                return;
            }
        }
        output.z(serialDesc, 34, v1.a, self.getObscureOrNull());
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final EmbedType getType() {
        return this.type;
    }

    /* renamed from: component10, reason: from getter */
    public final StructurableText getDescription() {
        return this.description;
    }

    /* renamed from: component11, reason: from getter */
    public final EmbedMedia getImage() {
        return this.image;
    }

    public final List<EmbedMedia> component12() {
        return this.images;
    }

    /* renamed from: component13, reason: from getter */
    public final EmbedMedia getVideo() {
        return this.video;
    }

    /* renamed from: component14, reason: from getter */
    public final EmbedThumbnail getThumbnail() {
        return this.thumbnail;
    }

    /* renamed from: component15, reason: from getter */
    public final String getNumAttachments() {
        return this.numAttachments;
    }

    /* renamed from: component16, reason: from getter */
    public final String getAttachmentsSize() {
        return this.attachmentsSize;
    }

    /* renamed from: component17, reason: from getter */
    public final String getMessageSendError() {
        return this.messageSendError;
    }

    /* renamed from: component18, reason: from getter */
    public final Boolean getDisableBackgroundColor() {
        return this.disableBackgroundColor;
    }

    /* renamed from: component19, reason: from getter */
    public final EmbedFooter getFooter() {
        return this.footer;
    }

    /* renamed from: component2, reason: from getter */
    public final String getId() {
        return this.id;
    }

    /* renamed from: component20, reason: from getter */
    public final String getSpoiler() {
        return this.spoiler;
    }

    /* renamed from: component21, reason: from getter */
    public final String getObscure() {
        return this.obscure;
    }

    /* renamed from: component22, reason: from getter */
    public final String getObscureAwaitingScan() {
        return this.obscureAwaitingScan;
    }

    /* renamed from: component23, reason: from getter */
    public final Boolean getObscureHideControls() {
        return this.obscureHideControls;
    }

    /* renamed from: component24, reason: from getter */
    public final Boolean getObscureIsOpaque() {
        return this.obscureIsOpaque;
    }

    /* renamed from: component25, reason: from getter */
    public final Boolean getVerifyAge() {
        return this.verifyAge;
    }

    /* renamed from: component26, reason: from getter */
    public final String getIconURL() {
        return this.iconURL;
    }

    public final List<Component> component27() {
        return this.components;
    }

    /* renamed from: component28, reason: from getter */
    public final EmbedFailureState getFailureState() {
        return this.failureState;
    }

    /* renamed from: component29, reason: from getter */
    public final Integer getProviderColor() {
        return this.providerColor;
    }

    /* renamed from: component3, reason: from getter */
    public final EmbedAuthor getAuthor() {
        return this.author;
    }

    /* renamed from: component30, reason: from getter */
    public final Integer getBorderLeftColor() {
        return this.borderLeftColor;
    }

    /* renamed from: component31, reason: from getter */
    public final Integer getHeaderTextColor() {
        return this.headerTextColor;
    }

    /* renamed from: component32, reason: from getter */
    public final int getBodyTextColor() {
        return this.bodyTextColor;
    }

    /* renamed from: component33, reason: from getter */
    public final Integer getBackgroundColor() {
        return this.backgroundColor;
    }

    /* renamed from: component4, reason: from getter */
    public final EmbedProvider getProvider() {
        return this.provider;
    }

    /* renamed from: component5, reason: from getter */
    public final String getRawTitle() {
        return this.rawTitle;
    }

    /* renamed from: component6, reason: from getter */
    public final StructurableText getTitle() {
        return this.title;
    }

    public final List<EmbedField> component7() {
        return this.fields;
    }

    /* renamed from: component8, reason: from getter */
    public final String getUrl() {
        return this.url;
    }

    /* renamed from: component9, reason: from getter */
    public final String getRawDescription() {
        return this.rawDescription;
    }

    @NotNull
    public final Embed copy(@NotNull EmbedType type, String id2, EmbedAuthor author, EmbedProvider provider, String rawTitle, StructurableText title, List<EmbedField> fields, String url, String rawDescription, StructurableText description, EmbedMedia image, List<EmbedMedia> images, EmbedMedia video, EmbedThumbnail thumbnail, String numAttachments, String attachmentsSize, String messageSendError, Boolean disableBackgroundColor, EmbedFooter footer, String spoiler, String obscure, String obscureAwaitingScan, Boolean obscureHideControls, Boolean obscureIsOpaque, Boolean verifyAge, String iconURL, List<? extends Component> components, EmbedFailureState failureState, Integer providerColor, Integer borderLeftColor, Integer headerTextColor, int bodyTextColor, Integer backgroundColor) {
        Intrinsics.checkNotNullParameter(type, "type");
        return new Embed(type, id2, author, provider, rawTitle, title, fields, url, rawDescription, description, image, images, video, thumbnail, numAttachments, attachmentsSize, messageSendError, disableBackgroundColor, footer, spoiler, obscure, obscureAwaitingScan, obscureHideControls, obscureIsOpaque, verifyAge, iconURL, components, failureState, providerColor, borderLeftColor, headerTextColor, bodyTextColor, backgroundColor);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof Embed)) {
            return false;
        }
        Embed embed = (Embed) other;
        return this.type == embed.type && Intrinsics.areEqual(this.id, embed.id) && Intrinsics.areEqual(this.author, embed.author) && Intrinsics.areEqual(this.provider, embed.provider) && Intrinsics.areEqual(this.rawTitle, embed.rawTitle) && Intrinsics.areEqual(this.title, embed.title) && Intrinsics.areEqual(this.fields, embed.fields) && Intrinsics.areEqual(this.url, embed.url) && Intrinsics.areEqual(this.rawDescription, embed.rawDescription) && Intrinsics.areEqual(this.description, embed.description) && Intrinsics.areEqual(this.image, embed.image) && Intrinsics.areEqual(this.images, embed.images) && Intrinsics.areEqual(this.video, embed.video) && Intrinsics.areEqual(this.thumbnail, embed.thumbnail) && Intrinsics.areEqual(this.numAttachments, embed.numAttachments) && Intrinsics.areEqual(this.attachmentsSize, embed.attachmentsSize) && Intrinsics.areEqual(this.messageSendError, embed.messageSendError) && Intrinsics.areEqual(this.disableBackgroundColor, embed.disableBackgroundColor) && Intrinsics.areEqual(this.footer, embed.footer) && Intrinsics.areEqual(this.spoiler, embed.spoiler) && Intrinsics.areEqual(this.obscure, embed.obscure) && Intrinsics.areEqual(this.obscureAwaitingScan, embed.obscureAwaitingScan) && Intrinsics.areEqual(this.obscureHideControls, embed.obscureHideControls) && Intrinsics.areEqual(this.obscureIsOpaque, embed.obscureIsOpaque) && Intrinsics.areEqual(this.verifyAge, embed.verifyAge) && Intrinsics.areEqual(this.iconURL, embed.iconURL) && Intrinsics.areEqual(this.components, embed.components) && this.failureState == embed.failureState && Intrinsics.areEqual(this.providerColor, embed.providerColor) && Intrinsics.areEqual(this.borderLeftColor, embed.borderLeftColor) && Intrinsics.areEqual(this.headerTextColor, embed.headerTextColor) && this.bodyTextColor == embed.bodyTextColor && Intrinsics.areEqual(this.backgroundColor, embed.backgroundColor);
    }

    public final String getAttachmentsSize() {
        return this.attachmentsSize;
    }

    public final EmbedAuthor getAuthor() {
        return this.author;
    }

    public final Integer getBackgroundColor() {
        return this.backgroundColor;
    }

    public final int getBodyTextColor() {
        return this.bodyTextColor;
    }

    public final Integer getBorderLeftColor() {
        return this.borderLeftColor;
    }

    public final List<Component> getComponents() {
        return this.components;
    }

    public final StructurableText getDescription() {
        return this.description;
    }

    public final Boolean getDisableBackgroundColor() {
        return this.disableBackgroundColor;
    }

    public final EmbedFailureState getFailureState() {
        return this.failureState;
    }

    public final List<EmbedField> getFields() {
        return this.fields;
    }

    public final EmbedFooter getFooter() {
        return this.footer;
    }

    public final Integer getHeaderTextColor() {
        return this.headerTextColor;
    }

    public final String getIconURL() {
        return this.iconURL;
    }

    public final String getId() {
        return this.id;
    }

    public final EmbedMedia getImage() {
        return this.image;
    }

    public final List<EmbedMedia> getImages() {
        return this.images;
    }

    public final String getMessageSendError() {
        return this.messageSendError;
    }

    public final String getNumAttachments() {
        return this.numAttachments;
    }

    public final String getObscure() {
        return this.obscure;
    }

    public final String getObscureAwaitingScan() {
        return this.obscureAwaitingScan;
    }

    public final Boolean getObscureHideControls() {
        return this.obscureHideControls;
    }

    public final Boolean getObscureIsOpaque() {
        return this.obscureIsOpaque;
    }

    @Override // com.discord.chat.bridge.spoiler.SpoilerableData
    public String getObscureOrNull() {
        return this.obscureOrNull;
    }

    public final EmbedProvider getProvider() {
        return this.provider;
    }

    public final Integer getProviderColor() {
        return this.providerColor;
    }

    public final String getRawDescription() {
        return this.rawDescription;
    }

    public final String getRawTitle() {
        return this.rawTitle;
    }

    public final String getSpoiler() {
        return this.spoiler;
    }

    @Override // com.discord.chat.bridge.spoiler.SpoilerableData
    public String getSpoilerOrNull() {
        return this.spoilerOrNull;
    }

    public final EmbedThumbnail getThumbnail() {
        return this.thumbnail;
    }

    public final StructurableText getTitle() {
        return this.title;
    }

    @NotNull
    public final EmbedType getType() {
        return this.type;
    }

    public final String getUrl() {
        return this.url;
    }

    public final Boolean getVerifyAge() {
        return this.verifyAge;
    }

    public final EmbedMedia getVideo() {
        return this.video;
    }

    public int hashCode() {
        int hashCode = this.type.hashCode() * 31;
        String str = this.id;
        int hashCode2 = (hashCode + (str == null ? 0 : str.hashCode())) * 31;
        EmbedAuthor embedAuthor = this.author;
        int hashCode3 = (hashCode2 + (embedAuthor == null ? 0 : embedAuthor.hashCode())) * 31;
        EmbedProvider embedProvider = this.provider;
        int hashCode4 = (hashCode3 + (embedProvider == null ? 0 : embedProvider.hashCode())) * 31;
        String str2 = this.rawTitle;
        int hashCode5 = (hashCode4 + (str2 == null ? 0 : str2.hashCode())) * 31;
        StructurableText structurableText = this.title;
        int hashCode6 = (hashCode5 + (structurableText == null ? 0 : structurableText.hashCode())) * 31;
        List<EmbedField> list = this.fields;
        int hashCode7 = (hashCode6 + (list == null ? 0 : list.hashCode())) * 31;
        String str3 = this.url;
        int hashCode8 = (hashCode7 + (str3 == null ? 0 : str3.hashCode())) * 31;
        String str4 = this.rawDescription;
        int hashCode9 = (hashCode8 + (str4 == null ? 0 : str4.hashCode())) * 31;
        StructurableText structurableText2 = this.description;
        int hashCode10 = (hashCode9 + (structurableText2 == null ? 0 : structurableText2.hashCode())) * 31;
        EmbedMedia embedMedia = this.image;
        int hashCode11 = (hashCode10 + (embedMedia == null ? 0 : embedMedia.hashCode())) * 31;
        List<EmbedMedia> list2 = this.images;
        int hashCode12 = (hashCode11 + (list2 == null ? 0 : list2.hashCode())) * 31;
        EmbedMedia embedMedia2 = this.video;
        int hashCode13 = (hashCode12 + (embedMedia2 == null ? 0 : embedMedia2.hashCode())) * 31;
        EmbedThumbnail embedThumbnail = this.thumbnail;
        int hashCode14 = (hashCode13 + (embedThumbnail == null ? 0 : embedThumbnail.hashCode())) * 31;
        String str5 = this.numAttachments;
        int hashCode15 = (hashCode14 + (str5 == null ? 0 : str5.hashCode())) * 31;
        String str6 = this.attachmentsSize;
        int hashCode16 = (hashCode15 + (str6 == null ? 0 : str6.hashCode())) * 31;
        String str7 = this.messageSendError;
        int hashCode17 = (hashCode16 + (str7 == null ? 0 : str7.hashCode())) * 31;
        Boolean bool = this.disableBackgroundColor;
        int hashCode18 = (hashCode17 + (bool == null ? 0 : bool.hashCode())) * 31;
        EmbedFooter embedFooter = this.footer;
        int hashCode19 = (hashCode18 + (embedFooter == null ? 0 : embedFooter.hashCode())) * 31;
        String str8 = this.spoiler;
        int hashCode20 = (hashCode19 + (str8 == null ? 0 : str8.hashCode())) * 31;
        String str9 = this.obscure;
        int hashCode21 = (hashCode20 + (str9 == null ? 0 : str9.hashCode())) * 31;
        String str10 = this.obscureAwaitingScan;
        int hashCode22 = (hashCode21 + (str10 == null ? 0 : str10.hashCode())) * 31;
        Boolean bool2 = this.obscureHideControls;
        int hashCode23 = (hashCode22 + (bool2 == null ? 0 : bool2.hashCode())) * 31;
        Boolean bool3 = this.obscureIsOpaque;
        int hashCode24 = (hashCode23 + (bool3 == null ? 0 : bool3.hashCode())) * 31;
        Boolean bool4 = this.verifyAge;
        int hashCode25 = (hashCode24 + (bool4 == null ? 0 : bool4.hashCode())) * 31;
        String str11 = this.iconURL;
        int hashCode26 = (hashCode25 + (str11 == null ? 0 : str11.hashCode())) * 31;
        List<Component> list3 = this.components;
        int hashCode27 = (hashCode26 + (list3 == null ? 0 : list3.hashCode())) * 31;
        EmbedFailureState embedFailureState = this.failureState;
        int hashCode28 = (hashCode27 + (embedFailureState == null ? 0 : embedFailureState.hashCode())) * 31;
        Integer num = this.providerColor;
        int hashCode29 = (hashCode28 + (num == null ? 0 : num.hashCode())) * 31;
        Integer num2 = this.borderLeftColor;
        int hashCode30 = (hashCode29 + (num2 == null ? 0 : num2.hashCode())) * 31;
        Integer num3 = this.headerTextColor;
        int u5 = com.discord.chat.bridge.botuikit.a.u(this.bodyTextColor, (hashCode30 + (num3 == null ? 0 : num3.hashCode())) * 31, 31);
        Integer num4 = this.backgroundColor;
        return u5 + (num4 != null ? num4.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        EmbedType embedType = this.type;
        String str = this.id;
        EmbedAuthor embedAuthor = this.author;
        EmbedProvider embedProvider = this.provider;
        String str2 = this.rawTitle;
        StructurableText structurableText = this.title;
        List<EmbedField> list = this.fields;
        String str3 = this.url;
        String str4 = this.rawDescription;
        StructurableText structurableText2 = this.description;
        EmbedMedia embedMedia = this.image;
        List<EmbedMedia> list2 = this.images;
        EmbedMedia embedMedia2 = this.video;
        EmbedThumbnail embedThumbnail = this.thumbnail;
        String str5 = this.numAttachments;
        String str6 = this.attachmentsSize;
        String str7 = this.messageSendError;
        Boolean bool = this.disableBackgroundColor;
        EmbedFooter embedFooter = this.footer;
        String str8 = this.spoiler;
        String str9 = this.obscure;
        String str10 = this.obscureAwaitingScan;
        Boolean bool2 = this.obscureHideControls;
        Boolean bool3 = this.obscureIsOpaque;
        Boolean bool4 = this.verifyAge;
        String str11 = this.iconURL;
        List<Component> list3 = this.components;
        EmbedFailureState embedFailureState = this.failureState;
        Integer num = this.providerColor;
        Integer num2 = this.borderLeftColor;
        Integer num3 = this.headerTextColor;
        int i5 = this.bodyTextColor;
        Integer num4 = this.backgroundColor;
        StringBuilder sb2 = new StringBuilder("Embed(type=");
        sb2.append(embedType);
        sb2.append(", id=");
        sb2.append(str);
        sb2.append(", author=");
        sb2.append(embedAuthor);
        sb2.append(", provider=");
        sb2.append(embedProvider);
        sb2.append(", rawTitle=");
        sb2.append(str2);
        sb2.append(", title=");
        sb2.append(structurableText);
        sb2.append(", fields=");
        sb2.append(list);
        sb2.append(", url=");
        sb2.append(str3);
        sb2.append(", rawDescription=");
        sb2.append(str4);
        sb2.append(", description=");
        sb2.append(structurableText2);
        sb2.append(", image=");
        sb2.append(embedMedia);
        sb2.append(", images=");
        sb2.append(list2);
        sb2.append(", video=");
        sb2.append(embedMedia2);
        sb2.append(", thumbnail=");
        sb2.append(embedThumbnail);
        sb2.append(", numAttachments=");
        a3.e.A(sb2, str5, ", attachmentsSize=", str6, ", messageSendError=");
        sb2.append(str7);
        sb2.append(", disableBackgroundColor=");
        sb2.append(bool);
        sb2.append(", footer=");
        sb2.append(embedFooter);
        sb2.append(", spoiler=");
        sb2.append(str8);
        sb2.append(", obscure=");
        a3.e.A(sb2, str9, ", obscureAwaitingScan=", str10, ", obscureHideControls=");
        sb2.append(bool2);
        sb2.append(", obscureIsOpaque=");
        sb2.append(bool3);
        sb2.append(", verifyAge=");
        sb2.append(bool4);
        sb2.append(", iconURL=");
        sb2.append(str11);
        sb2.append(", components=");
        sb2.append(list3);
        sb2.append(", failureState=");
        sb2.append(embedFailureState);
        sb2.append(", providerColor=");
        k0.d.s(sb2, num, ", borderLeftColor=", num2, ", headerTextColor=");
        sb2.append(num3);
        sb2.append(", bodyTextColor=");
        sb2.append(i5);
        sb2.append(", backgroundColor=");
        sb2.append(num4);
        sb2.append(")");
        return sb2.toString();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public Embed(@NotNull EmbedType type, String str, EmbedAuthor embedAuthor, EmbedProvider embedProvider, String str2, StructurableText structurableText, List<EmbedField> list, String str3, String str4, StructurableText structurableText2, EmbedMedia embedMedia, List<EmbedMedia> list2, EmbedMedia embedMedia2, EmbedThumbnail embedThumbnail, String str5, String str6, String str7, Boolean bool, EmbedFooter embedFooter, String str8, String str9, String str10, Boolean bool2, Boolean bool3, Boolean bool4, String str11, List<? extends Component> list3, EmbedFailureState embedFailureState, Integer num, Integer num2, Integer num3, int i5, Integer num4) {
        String str12 = str8;
        Intrinsics.checkNotNullParameter(type, "type");
        this.type = type;
        this.id = str;
        this.author = embedAuthor;
        this.provider = embedProvider;
        this.rawTitle = str2;
        this.title = structurableText;
        this.fields = list;
        this.url = str3;
        this.rawDescription = str4;
        this.description = structurableText2;
        this.image = embedMedia;
        this.images = list2;
        this.video = embedMedia2;
        this.thumbnail = embedThumbnail;
        this.numAttachments = str5;
        this.attachmentsSize = str6;
        this.messageSendError = str7;
        this.disableBackgroundColor = bool;
        this.footer = embedFooter;
        this.spoiler = str12;
        this.obscure = str9;
        this.obscureAwaitingScan = str10;
        this.obscureHideControls = bool2;
        this.obscureIsOpaque = bool3;
        this.verifyAge = bool4;
        this.iconURL = str11;
        this.components = list3;
        this.failureState = embedFailureState;
        this.providerColor = num;
        this.borderLeftColor = num2;
        this.headerTextColor = num3;
        this.bodyTextColor = i5;
        this.backgroundColor = num4;
        String str13 = null;
        this.spoilerOrNull = (str12 == null || StringsKt.K(str12)) ? null : str12;
        if (str9 != null && !StringsKt.K(str9)) {
            str13 = str9;
        }
        this.obscureOrNull = str13;
    }

    public /* synthetic */ Embed(EmbedType embedType, String str, EmbedAuthor embedAuthor, EmbedProvider embedProvider, String str2, StructurableText structurableText, List list, String str3, String str4, StructurableText structurableText2, EmbedMedia embedMedia, List list2, EmbedMedia embedMedia2, EmbedThumbnail embedThumbnail, String str5, String str6, String str7, Boolean bool, EmbedFooter embedFooter, String str8, String str9, String str10, Boolean bool2, Boolean bool3, Boolean bool4, String str11, List list3, EmbedFailureState embedFailureState, Integer num, Integer num2, Integer num3, int i5, Integer num4, int i6, int i10, DefaultConstructorMarker defaultConstructorMarker) {
        this(embedType, (i6 & 2) != 0 ? null : str, (i6 & 4) != 0 ? null : embedAuthor, (i6 & 8) != 0 ? null : embedProvider, (i6 & 16) != 0 ? null : str2, (i6 & 32) != 0 ? null : structurableText, (i6 & 64) != 0 ? null : list, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? null : str3, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? null : str4, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : structurableText2, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? null : embedMedia, (i6 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? null : list2, (i6 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? null : embedMedia2, (i6 & 8192) != 0 ? null : embedThumbnail, (i6 & 16384) != 0 ? null : str5, (32768 & i6) != 0 ? null : str6, (65536 & i6) != 0 ? null : str7, (131072 & i6) != 0 ? null : bool, (262144 & i6) != 0 ? null : embedFooter, (524288 & i6) != 0 ? null : str8, (1048576 & i6) != 0 ? null : str9, (2097152 & i6) != 0 ? null : str10, (4194304 & i6) != 0 ? null : bool2, (8388608 & i6) != 0 ? null : bool3, (16777216 & i6) != 0 ? null : bool4, (33554432 & i6) != 0 ? null : str11, (67108864 & i6) != 0 ? null : list3, (134217728 & i6) != 0 ? null : embedFailureState, (268435456 & i6) != 0 ? null : num, (536870912 & i6) != 0 ? null : num2, (i6 & 1073741824) != 0 ? null : num3, i5, (i10 & 1) != 0 ? null : num4);
    }
}
