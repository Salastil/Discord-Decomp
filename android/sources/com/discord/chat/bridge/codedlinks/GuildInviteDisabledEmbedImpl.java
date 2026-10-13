package com.discord.chat.bridge.codedlinks;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.chat.bridge.codedlinks.CodedLinkExtendedType;
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
@Metadata(d1 = {"\u0000^\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0002\b\u0012\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\bY\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 \u009a\u00012\u00020\u00012\u00020\u00022\u00020\u0003:\u0004\u0099\u0001\u009a\u0001B«\u0003\u0012\b\b\u0001\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0001\u0010\u0006\u001a\u00020\u0005\u0012\b\b\u0001\u0010\u0007\u001a\u00020\u0005\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\t\u0012\u0006\u0010\r\u001a\u00020\t\u0012\u0006\u0010\u000e\u001a\u00020\t\u0012\u0006\u0010\u000f\u001a\u00020\t\u0012\n\b\u0003\u0010\u0010\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0003\u0010\u0011\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0003\u0010\u0012\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\t\u0012\n\b\u0003\u0010\u0015\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\u0017\u0012\n\b\u0002\u0010\u0018\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010\u0019\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u0017\u0012\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\u0017\u0012\n\b\u0002\u0010 \u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010!\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010\"\u001a\u0004\u0018\u00010\t\u0012\n\b\u0003\u0010#\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0003\u0010$\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010&\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010'\u001a\u0004\u0018\u00010\t\u0012\n\b\u0003\u0010(\u001a\u0004\u0018\u00010\u0005\u0012\b\b\u0002\u0010)\u001a\u00020*\u0012\u0006\u0010+\u001a\u00020\t\u0012\n\b\u0002\u0010,\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010-\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010.\u001a\u0004\u0018\u00010\t¢\u0006\u0004\b/\u00100B\u0099\u0003\b\u0010\u0012\u0006\u00101\u001a\u00020\u0005\u0012\u0006\u00102\u001a\u00020\u0005\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\u0006\u0010\u0007\u001a\u00020\u0005\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\t\u0012\b\u0010\r\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u0010\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0013\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u0014\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u0015\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017\u0012\b\u0010\u0018\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u0019\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u001a\u001a\u0004\u0018\u00010\u0017\u0012\b\u0010\u001b\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u001c\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u001d\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u001e\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u001f\u001a\u0004\u0018\u00010\u0017\u0012\b\u0010 \u001a\u0004\u0018\u00010\u0005\u0012\b\u0010!\u001a\u0004\u0018\u00010\t\u0012\b\u0010\"\u001a\u0004\u0018\u00010\t\u0012\b\u0010#\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010$\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010%\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010&\u001a\u0004\u0018\u00010\t\u0012\b\u0010'\u001a\u0004\u0018\u00010\t\u0012\b\u0010(\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010)\u001a\u0004\u0018\u00010*\u0012\b\u0010+\u001a\u0004\u0018\u00010\t\u0012\b\u0010,\u001a\u0004\u0018\u00010\t\u0012\b\u0010-\u001a\u0004\u0018\u00010\t\u0012\b\u0010.\u001a\u0004\u0018\u00010\t\u0012\b\u00103\u001a\u0004\u0018\u000104¢\u0006\u0004\b/\u00105J\t\u0010d\u001a\u00020\u0005HÆ\u0003J\t\u0010e\u001a\u00020\u0005HÆ\u0003J\t\u0010f\u001a\u00020\u0005HÆ\u0003J\t\u0010g\u001a\u00020\tHÆ\u0003J\t\u0010h\u001a\u00020\u000bHÆ\u0003J\t\u0010i\u001a\u00020\tHÆ\u0003J\t\u0010j\u001a\u00020\tHÆ\u0003J\t\u0010k\u001a\u00020\tHÆ\u0003J\t\u0010l\u001a\u00020\tHÆ\u0003J\u0010\u0010m\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010CJ\u0010\u0010n\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010CJ\u0010\u0010o\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010CJ\u000b\u0010p\u001a\u0004\u0018\u00010\tHÆ\u0003J\u000b\u0010q\u001a\u0004\u0018\u00010\tHÆ\u0003J\u0010\u0010r\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010CJ\u0010\u0010s\u001a\u0004\u0018\u00010\u0017HÆ\u0003¢\u0006\u0002\u0010KJ\u000b\u0010t\u001a\u0004\u0018\u00010\tHÆ\u0003J\u000b\u0010u\u001a\u0004\u0018\u00010\tHÆ\u0003J\u0010\u0010v\u001a\u0004\u0018\u00010\u0017HÆ\u0003¢\u0006\u0002\u0010KJ\u000b\u0010w\u001a\u0004\u0018\u00010\tHÆ\u0003J\u000b\u0010x\u001a\u0004\u0018\u00010\tHÆ\u0003J\u0010\u0010y\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010CJ\u0010\u0010z\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010CJ\u0010\u0010{\u001a\u0004\u0018\u00010\u0017HÆ\u0003¢\u0006\u0002\u0010KJ\u0010\u0010|\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010CJ\u000b\u0010}\u001a\u0004\u0018\u00010\tHÆ\u0003J\u000b\u0010~\u001a\u0004\u0018\u00010\tHÆ\u0003J\u0010\u0010\u007f\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010CJ\u0011\u0010\u0080\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010CJ\u0011\u0010\u0081\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010CJ\f\u0010\u0082\u0001\u001a\u0004\u0018\u00010\tHÆ\u0003J\f\u0010\u0083\u0001\u001a\u0004\u0018\u00010\tHÆ\u0003J\u0011\u0010\u0084\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010CJ\n\u0010\u0085\u0001\u001a\u00020*HÆ\u0003J\n\u0010\u0086\u0001\u001a\u00020\tHÆ\u0003J\f\u0010\u0087\u0001\u001a\u0004\u0018\u00010\tHÆ\u0003J\f\u0010\u0088\u0001\u001a\u0004\u0018\u00010\tHÆ\u0003J\f\u0010\u0089\u0001\u001a\u0004\u0018\u00010\tHÆ\u0003JÂ\u0003\u0010\u008a\u0001\u001a\u00020\u00002\b\b\u0003\u0010\u0004\u001a\u00020\u00052\b\b\u0003\u0010\u0006\u001a\u00020\u00052\b\b\u0003\u0010\u0007\u001a\u00020\u00052\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u000b2\b\b\u0002\u0010\f\u001a\u00020\t2\b\b\u0002\u0010\r\u001a\u00020\t2\b\b\u0002\u0010\u000e\u001a\u00020\t2\b\b\u0002\u0010\u000f\u001a\u00020\t2\n\b\u0003\u0010\u0010\u001a\u0004\u0018\u00010\u00052\n\b\u0003\u0010\u0011\u001a\u0004\u0018\u00010\u00052\n\b\u0003\u0010\u0012\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\t2\n\b\u0003\u0010\u0015\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\u00172\n\b\u0002\u0010\u0018\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\u0019\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u00172\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\u00172\n\b\u0002\u0010 \u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010!\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\"\u001a\u0004\u0018\u00010\t2\n\b\u0003\u0010#\u001a\u0004\u0018\u00010\u00052\n\b\u0003\u0010$\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010&\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010'\u001a\u0004\u0018\u00010\t2\n\b\u0003\u0010(\u001a\u0004\u0018\u00010\u00052\b\b\u0002\u0010)\u001a\u00020*2\b\b\u0002\u0010+\u001a\u00020\t2\n\b\u0002\u0010,\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010-\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010.\u001a\u0004\u0018\u00010\tHÆ\u0001¢\u0006\u0003\u0010\u008b\u0001J\u0016\u0010\u008c\u0001\u001a\u00020\u00172\n\u0010\u008d\u0001\u001a\u0005\u0018\u00010\u008e\u0001HÖ\u0003J\n\u0010\u008f\u0001\u001a\u00020\u0005HÖ\u0001J\n\u0010\u0090\u0001\u001a\u00020\tHÖ\u0001J-\u0010\u0091\u0001\u001a\u00030\u0092\u00012\u0007\u0010\u0093\u0001\u001a\u00020\u00002\b\u0010\u0094\u0001\u001a\u00030\u0095\u00012\b\u0010\u0096\u0001\u001a\u00030\u0097\u0001H\u0001¢\u0006\u0003\b\u0098\u0001R\u0014\u0010\u0004\u001a\u00020\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b6\u00107R\u0014\u0010\u0006\u001a\u00020\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b8\u00107R\u0014\u0010\u0007\u001a\u00020\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b9\u00107R\u0014\u0010\b\u001a\u00020\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b:\u0010;R\u0014\u0010\n\u001a\u00020\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b<\u0010=R\u0014\u0010\f\u001a\u00020\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b>\u0010;R\u0014\u0010\r\u001a\u00020\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b?\u0010;R\u0014\u0010\u000e\u001a\u00020\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b@\u0010;R\u0014\u0010\u000f\u001a\u00020\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bA\u0010;R\u0018\u0010\u0010\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010D\u001a\u0004\bB\u0010CR\u0018\u0010\u0011\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010D\u001a\u0004\bE\u0010CR\u0018\u0010\u0012\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010D\u001a\u0004\bF\u0010CR\u0016\u0010\u0013\u001a\u0004\u0018\u00010\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bG\u0010;R\u0016\u0010\u0014\u001a\u0004\u0018\u00010\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bH\u0010;R\u0018\u0010\u0015\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010D\u001a\u0004\bI\u0010CR\u0018\u0010\u0016\u001a\u0004\u0018\u00010\u0017X\u0096\u0004¢\u0006\n\n\u0002\u0010L\u001a\u0004\bJ\u0010KR\u0016\u0010\u0018\u001a\u0004\u0018\u00010\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bM\u0010;R\u0016\u0010\u0019\u001a\u0004\u0018\u00010\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bN\u0010;R\u0018\u0010\u001a\u001a\u0004\u0018\u00010\u0017X\u0096\u0004¢\u0006\n\n\u0002\u0010L\u001a\u0004\bO\u0010KR\u0016\u0010\u001b\u001a\u0004\u0018\u00010\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bP\u0010;R\u0016\u0010\u001c\u001a\u0004\u0018\u00010\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bQ\u0010;R\u0018\u0010\u001d\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010D\u001a\u0004\bR\u0010CR\u0018\u0010\u001e\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010D\u001a\u0004\bS\u0010CR\u0018\u0010\u001f\u001a\u0004\u0018\u00010\u0017X\u0096\u0004¢\u0006\n\n\u0002\u0010L\u001a\u0004\bT\u0010KR\u0018\u0010 \u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010D\u001a\u0004\bU\u0010CR\u0016\u0010!\u001a\u0004\u0018\u00010\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bV\u0010;R\u0016\u0010\"\u001a\u0004\u0018\u00010\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bW\u0010;R\u0018\u0010#\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010D\u001a\u0004\bX\u0010CR\u0018\u0010$\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010D\u001a\u0004\bY\u0010CR\u0018\u0010%\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010D\u001a\u0004\bZ\u0010CR\u0016\u0010&\u001a\u0004\u0018\u00010\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b[\u0010;R\u0016\u0010'\u001a\u0004\u0018\u00010\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\\\u0010;R\u0018\u0010(\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010D\u001a\u0004\b]\u0010CR\u0014\u0010)\u001a\u00020*X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b^\u0010_R\u0014\u0010+\u001a\u00020\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b`\u0010;R\u0016\u0010,\u001a\u0004\u0018\u00010\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\ba\u0010;R\u0016\u0010-\u001a\u0004\u0018\u00010\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bb\u0010;R\u0016\u0010.\u001a\u0004\u0018\u00010\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bc\u0010;¨\u0006\u009b\u0001"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/GuildInviteDisabledEmbedImpl;", "Lcom/discord/chat/bridge/codedlinks/CodedLinkEmbed;", "Lcom/discord/chat/bridge/codedlinks/GuildDisabledInviteEmbed;", "Lcom/discord/chat/bridge/codedlinks/GuildInviteExtendedEmbed;", ViewProps.BACKGROUND_COLOR, "", ViewProps.BORDER_COLOR, "headerColor", "headerText", "", "type", "Lcom/discord/chat/bridge/codedlinks/InviteType;", "titleText", "subtitle", "helpCenterArticleLabel", "helpCenterArticleURL", "acceptLabelBackgroundColor", "acceptLabelBorderColor", "acceptLabelColor", "acceptLabelText", "bodyText", "bodyTextColor", "canBeAccepted", "", "channelIcon", NotificationRenderer.CHANNEL_NAME, "embedCanBeTapped", "memberText", "onlineText", "resolvingGradientEnd", "resolvingGradientStart", "splashHasRadialGradient", "splashOpacity", "splashUrl", "inviteSplash", "subtitleColor", "thumbnailBackgroundColor", "thumbnailCornerRadius", "thumbnailText", "thumbnailUrl", "titleColor", "extendedType", "Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;", "guildName", "guildIcon", "headerIcon", "badgeIconUrl", "<init>", "(IIILjava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "seen0", "seen1", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IIIIILjava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getBackgroundColor", "()I", "getBorderColor", "getHeaderColor", "getHeaderText", "()Ljava/lang/String;", "getType", "()Lcom/discord/chat/bridge/codedlinks/InviteType;", "getTitleText", "getSubtitle", "getHelpCenterArticleLabel", "getHelpCenterArticleURL", "getAcceptLabelBackgroundColor", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getAcceptLabelBorderColor", "getAcceptLabelColor", "getAcceptLabelText", "getBodyText", "getBodyTextColor", "getCanBeAccepted", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "getChannelIcon", "getChannelName", "getEmbedCanBeTapped", "getMemberText", "getOnlineText", "getResolvingGradientEnd", "getResolvingGradientStart", "getSplashHasRadialGradient", "getSplashOpacity", "getSplashUrl", "getInviteSplash", "getSubtitleColor", "getThumbnailBackgroundColor", "getThumbnailCornerRadius", "getThumbnailText", "getThumbnailUrl", "getTitleColor", "getExtendedType", "()Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;", "getGuildName", "getGuildIcon", "getHeaderIcon", "getBadgeIconUrl", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "component14", "component15", "component16", "component17", "component18", "component19", "component20", "component21", "component22", "component23", "component24", "component25", "component26", "component27", "component28", "component29", "component30", "component31", "component32", "component33", "component34", "component35", "component36", "component37", "component38", "copy", "(IIILjava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/discord/chat/bridge/codedlinks/GuildInviteDisabledEmbedImpl;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class GuildInviteDisabledEmbedImpl extends CodedLinkEmbed implements GuildDisabledInviteEmbed, GuildInviteExtendedEmbed {

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

    @NotNull
    private final CodedLinkExtendedType extendedType;
    private final String guildIcon;

    @NotNull
    private final String guildName;
    private final int headerColor;
    private final String headerIcon;

    @NotNull
    private final String headerText;

    @NotNull
    private final String helpCenterArticleLabel;

    @NotNull
    private final String helpCenterArticleURL;
    private final String inviteSplash;
    private final String memberText;
    private final String onlineText;
    private final Integer resolvingGradientEnd;
    private final Integer resolvingGradientStart;
    private final Boolean splashHasRadialGradient;
    private final Integer splashOpacity;
    private final String splashUrl;

    @NotNull
    private final String subtitle;
    private final Integer subtitleColor;
    private final Integer thumbnailBackgroundColor;
    private final Integer thumbnailCornerRadius;
    private final String thumbnailText;
    private final String thumbnailUrl;
    private final Integer titleColor;

    @NotNull
    private final String titleText;

    @NotNull
    private final InviteType type;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/GuildInviteDisabledEmbedImpl$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/codedlinks/GuildInviteDisabledEmbedImpl;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return GuildInviteDisabledEmbedImpl$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ GuildInviteDisabledEmbedImpl(int i5, int i6, int i10, int i11, int i12, String str, InviteType inviteType, String str2, String str3, String str4, String str5, Integer num, Integer num2, Integer num3, String str6, String str7, Integer num4, Boolean bool, String str8, String str9, Boolean bool2, String str10, String str11, Integer num5, Integer num6, Boolean bool3, Integer num7, String str12, String str13, Integer num8, Integer num9, Integer num10, String str14, String str15, Integer num11, CodedLinkExtendedType codedLinkExtendedType, String str16, String str17, String str18, String str19, SerializationConstructorMarker serializationConstructorMarker) {
        super(r1);
        DefaultConstructorMarker defaultConstructorMarker = null;
        if ((511 != (i5 & 511)) || (4 != (i6 & 4))) {
            h1.k(new int[]{i5, i6}, new int[]{511, 4}, GuildInviteDisabledEmbedImpl$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.backgroundColor = i10;
        this.borderColor = i11;
        this.headerColor = i12;
        this.headerText = str;
        this.type = inviteType;
        this.titleText = str2;
        this.subtitle = str3;
        this.helpCenterArticleLabel = str4;
        this.helpCenterArticleURL = str5;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.acceptLabelBackgroundColor = null;
        } else {
            this.acceptLabelBackgroundColor = num;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 0) {
            this.acceptLabelBorderColor = null;
        } else {
            this.acceptLabelBorderColor = num2;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_MOVED) == 0) {
            this.acceptLabelColor = null;
        } else {
            this.acceptLabelColor = num3;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
            this.acceptLabelText = null;
        } else {
            this.acceptLabelText = str6;
        }
        if ((i5 & 8192) == 0) {
            this.bodyText = null;
        } else {
            this.bodyText = str7;
        }
        if ((i5 & 16384) == 0) {
            this.bodyTextColor = null;
        } else {
            this.bodyTextColor = num4;
        }
        if ((32768 & i5) == 0) {
            this.canBeAccepted = null;
        } else {
            this.canBeAccepted = bool;
        }
        if ((65536 & i5) == 0) {
            this.channelIcon = null;
        } else {
            this.channelIcon = str8;
        }
        if ((131072 & i5) == 0) {
            this.channelName = null;
        } else {
            this.channelName = str9;
        }
        if ((262144 & i5) == 0) {
            this.embedCanBeTapped = null;
        } else {
            this.embedCanBeTapped = bool2;
        }
        if ((524288 & i5) == 0) {
            this.memberText = null;
        } else {
            this.memberText = str10;
        }
        if ((1048576 & i5) == 0) {
            this.onlineText = null;
        } else {
            this.onlineText = str11;
        }
        if ((2097152 & i5) == 0) {
            this.resolvingGradientEnd = null;
        } else {
            this.resolvingGradientEnd = num5;
        }
        if ((4194304 & i5) == 0) {
            this.resolvingGradientStart = null;
        } else {
            this.resolvingGradientStart = num6;
        }
        if ((8388608 & i5) == 0) {
            this.splashHasRadialGradient = null;
        } else {
            this.splashHasRadialGradient = bool3;
        }
        if ((16777216 & i5) == 0) {
            this.splashOpacity = null;
        } else {
            this.splashOpacity = num7;
        }
        if ((33554432 & i5) == 0) {
            this.splashUrl = null;
        } else {
            this.splashUrl = str12;
        }
        if ((67108864 & i5) == 0) {
            this.inviteSplash = null;
        } else {
            this.inviteSplash = str13;
        }
        if ((134217728 & i5) == 0) {
            this.subtitleColor = null;
        } else {
            this.subtitleColor = num8;
        }
        if ((268435456 & i5) == 0) {
            this.thumbnailBackgroundColor = null;
        } else {
            this.thumbnailBackgroundColor = num9;
        }
        if ((536870912 & i5) == 0) {
            this.thumbnailCornerRadius = null;
        } else {
            this.thumbnailCornerRadius = num10;
        }
        if ((1073741824 & i5) == 0) {
            this.thumbnailText = null;
        } else {
            this.thumbnailText = str14;
        }
        if ((i5 & Integer.MIN_VALUE) == 0) {
            this.thumbnailUrl = null;
        } else {
            this.thumbnailUrl = str15;
        }
        if ((i6 & 1) == 0) {
            this.titleColor = null;
        } else {
            this.titleColor = num11;
        }
        this.extendedType = (i6 & 2) == 0 ? CodedLinkExtendedType.GUILD_INVITE_DISABLED : codedLinkExtendedType;
        this.guildName = str16;
        if ((i6 & 8) == 0) {
            this.guildIcon = null;
        } else {
            this.guildIcon = str17;
        }
        if ((i6 & 16) == 0) {
            this.headerIcon = null;
        } else {
            this.headerIcon = str18;
        }
        if ((i6 & 32) == 0) {
            this.badgeIconUrl = null;
        } else {
            this.badgeIconUrl = str19;
        }
    }

    public static /* synthetic */ GuildInviteDisabledEmbedImpl copy$default(GuildInviteDisabledEmbedImpl guildInviteDisabledEmbedImpl, int i5, int i6, int i10, String str, InviteType inviteType, String str2, String str3, String str4, String str5, Integer num, Integer num2, Integer num3, String str6, String str7, Integer num4, Boolean bool, String str8, String str9, Boolean bool2, String str10, String str11, Integer num5, Integer num6, Boolean bool3, Integer num7, String str12, String str13, Integer num8, Integer num9, Integer num10, String str14, String str15, Integer num11, CodedLinkExtendedType codedLinkExtendedType, String str16, String str17, String str18, String str19, int i11, int i12, Object obj) {
        String str20;
        String str21;
        Integer num12;
        Integer num13;
        Boolean bool4;
        Integer num14;
        String str22;
        String str23;
        Integer num15;
        Integer num16;
        Integer num17;
        String str24;
        String str25;
        Integer num18;
        CodedLinkExtendedType codedLinkExtendedType2;
        String str26;
        String str27;
        Integer num19;
        String str28;
        String str29;
        String str30;
        Integer num20;
        Integer num21;
        Integer num22;
        String str31;
        String str32;
        Boolean bool5;
        String str33;
        String str34;
        Boolean bool6;
        String str35;
        String str36;
        int i13;
        int i14;
        String str37;
        InviteType inviteType2;
        String str38;
        int i15 = (i11 & 1) != 0 ? guildInviteDisabledEmbedImpl.backgroundColor : i5;
        int i16 = (i11 & 2) != 0 ? guildInviteDisabledEmbedImpl.borderColor : i6;
        int i17 = (i11 & 4) != 0 ? guildInviteDisabledEmbedImpl.headerColor : i10;
        String str39 = (i11 & 8) != 0 ? guildInviteDisabledEmbedImpl.headerText : str;
        InviteType inviteType3 = (i11 & 16) != 0 ? guildInviteDisabledEmbedImpl.type : inviteType;
        String str40 = (i11 & 32) != 0 ? guildInviteDisabledEmbedImpl.titleText : str2;
        String str41 = (i11 & 64) != 0 ? guildInviteDisabledEmbedImpl.subtitle : str3;
        String str42 = (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? guildInviteDisabledEmbedImpl.helpCenterArticleLabel : str4;
        String str43 = (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? guildInviteDisabledEmbedImpl.helpCenterArticleURL : str5;
        Integer num23 = (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? guildInviteDisabledEmbedImpl.acceptLabelBackgroundColor : num;
        Integer num24 = (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? guildInviteDisabledEmbedImpl.acceptLabelBorderColor : num2;
        Integer num25 = (i11 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? guildInviteDisabledEmbedImpl.acceptLabelColor : num3;
        String str44 = (i11 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? guildInviteDisabledEmbedImpl.acceptLabelText : str6;
        String str45 = (i11 & 8192) != 0 ? guildInviteDisabledEmbedImpl.bodyText : str7;
        int i18 = i15;
        Integer num26 = (i11 & 16384) != 0 ? guildInviteDisabledEmbedImpl.bodyTextColor : num4;
        Boolean bool7 = (i11 & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0 ? guildInviteDisabledEmbedImpl.canBeAccepted : bool;
        String str46 = (i11 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) != 0 ? guildInviteDisabledEmbedImpl.channelIcon : str8;
        String str47 = (i11 & KeyCommandDescriptor.ModifierFlags.SHIFT) != 0 ? guildInviteDisabledEmbedImpl.channelName : str9;
        Boolean bool8 = (i11 & KeyCommandDescriptor.ModifierFlags.CONTROL) != 0 ? guildInviteDisabledEmbedImpl.embedCanBeTapped : bool2;
        String str48 = (i11 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) != 0 ? guildInviteDisabledEmbedImpl.memberText : str10;
        String str49 = (i11 & KeyCommandDescriptor.ModifierFlags.COMMAND) != 0 ? guildInviteDisabledEmbedImpl.onlineText : str11;
        Integer num27 = (i11 & KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD) != 0 ? guildInviteDisabledEmbedImpl.resolvingGradientEnd : num5;
        Integer num28 = (i11 & 4194304) != 0 ? guildInviteDisabledEmbedImpl.resolvingGradientStart : num6;
        Boolean bool9 = (i11 & 8388608) != 0 ? guildInviteDisabledEmbedImpl.splashHasRadialGradient : bool3;
        Integer num29 = (i11 & PointerEventHelper.X_FLAG_SUPPORTS_HOVER) != 0 ? guildInviteDisabledEmbedImpl.splashOpacity : num7;
        String str50 = (i11 & 33554432) != 0 ? guildInviteDisabledEmbedImpl.splashUrl : str12;
        String str51 = (i11 & 67108864) != 0 ? guildInviteDisabledEmbedImpl.inviteSplash : str13;
        Integer num30 = (i11 & 134217728) != 0 ? guildInviteDisabledEmbedImpl.subtitleColor : num8;
        Integer num31 = (i11 & 268435456) != 0 ? guildInviteDisabledEmbedImpl.thumbnailBackgroundColor : num9;
        Integer num32 = (i11 & 536870912) != 0 ? guildInviteDisabledEmbedImpl.thumbnailCornerRadius : num10;
        String str52 = (i11 & 1073741824) != 0 ? guildInviteDisabledEmbedImpl.thumbnailText : str14;
        String str53 = (i11 & Integer.MIN_VALUE) != 0 ? guildInviteDisabledEmbedImpl.thumbnailUrl : str15;
        Integer num33 = (i12 & 1) != 0 ? guildInviteDisabledEmbedImpl.titleColor : num11;
        CodedLinkExtendedType codedLinkExtendedType3 = (i12 & 2) != 0 ? guildInviteDisabledEmbedImpl.extendedType : codedLinkExtendedType;
        String str54 = (i12 & 4) != 0 ? guildInviteDisabledEmbedImpl.guildName : str16;
        String str55 = (i12 & 8) != 0 ? guildInviteDisabledEmbedImpl.guildIcon : str17;
        String str56 = (i12 & 16) != 0 ? guildInviteDisabledEmbedImpl.headerIcon : str18;
        if ((i12 & 32) != 0) {
            str21 = str56;
            str20 = guildInviteDisabledEmbedImpl.badgeIconUrl;
            num13 = num28;
            bool4 = bool9;
            num14 = num29;
            str22 = str50;
            str23 = str51;
            num15 = num30;
            num16 = num31;
            num17 = num32;
            str24 = str52;
            str25 = str53;
            num18 = num33;
            codedLinkExtendedType2 = codedLinkExtendedType3;
            str26 = str54;
            str27 = str55;
            num19 = num26;
            str29 = str42;
            str30 = str43;
            num20 = num23;
            num21 = num24;
            num22 = num25;
            str31 = str44;
            str32 = str45;
            bool5 = bool7;
            str33 = str46;
            str34 = str47;
            bool6 = bool8;
            str35 = str48;
            str36 = str49;
            num12 = num27;
            i13 = i16;
            i14 = i17;
            str37 = str39;
            inviteType2 = inviteType3;
            str38 = str40;
            str28 = str41;
        } else {
            str20 = str19;
            str21 = str56;
            num12 = num27;
            num13 = num28;
            bool4 = bool9;
            num14 = num29;
            str22 = str50;
            str23 = str51;
            num15 = num30;
            num16 = num31;
            num17 = num32;
            str24 = str52;
            str25 = str53;
            num18 = num33;
            codedLinkExtendedType2 = codedLinkExtendedType3;
            str26 = str54;
            str27 = str55;
            num19 = num26;
            str28 = str41;
            str29 = str42;
            str30 = str43;
            num20 = num23;
            num21 = num24;
            num22 = num25;
            str31 = str44;
            str32 = str45;
            bool5 = bool7;
            str33 = str46;
            str34 = str47;
            bool6 = bool8;
            str35 = str48;
            str36 = str49;
            i13 = i16;
            i14 = i17;
            str37 = str39;
            inviteType2 = inviteType3;
            str38 = str40;
        }
        return guildInviteDisabledEmbedImpl.copy(i18, i13, i14, str37, inviteType2, str38, str28, str29, str30, num20, num21, num22, str31, str32, num19, bool5, str33, str34, bool6, str35, str36, num12, num13, bool4, num14, str22, str23, num15, num16, num17, str24, str25, num18, codedLinkExtendedType2, str26, str27, str21, str20);
    }

    public static final /* synthetic */ void write$Self$chat_release(GuildInviteDisabledEmbedImpl self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.n(0, self.getBackgroundColor(), serialDesc);
        output.n(1, self.getBorderColor(), serialDesc);
        output.n(2, self.getHeaderColor(), serialDesc);
        output.y(serialDesc, 3, self.getHeaderText());
        output.g(serialDesc, 4, InviteType.Serializer.INSTANCE, self.getType());
        output.y(serialDesc, 5, self.getTitleText());
        output.y(serialDesc, 6, self.getSubtitle());
        output.y(serialDesc, 7, self.getHelpCenterArticleLabel());
        output.y(serialDesc, 8, self.getHelpCenterArticleURL());
        if (output.I(serialDesc, 9) || self.getAcceptLabelBackgroundColor() != null) {
            output.z(serialDesc, 9, o0.a, self.getAcceptLabelBackgroundColor());
        }
        if (output.I(serialDesc, 10) || self.getAcceptLabelBorderColor() != null) {
            output.z(serialDesc, 10, o0.a, self.getAcceptLabelBorderColor());
        }
        if (output.I(serialDesc, 11) || self.getAcceptLabelColor() != null) {
            output.z(serialDesc, 11, o0.a, self.getAcceptLabelColor());
        }
        if (output.I(serialDesc, 12) || self.getAcceptLabelText() != null) {
            output.z(serialDesc, 12, v1.a, self.getAcceptLabelText());
        }
        if (output.I(serialDesc, 13) || self.getBodyText() != null) {
            output.z(serialDesc, 13, v1.a, self.getBodyText());
        }
        if (output.I(serialDesc, 14) || self.getBodyTextColor() != null) {
            output.z(serialDesc, 14, o0.a, self.getBodyTextColor());
        }
        if (output.I(serialDesc, 15) || self.getCanBeAccepted() != null) {
            output.z(serialDesc, 15, g.a, self.getCanBeAccepted());
        }
        if (output.I(serialDesc, 16) || self.getChannelIcon() != null) {
            output.z(serialDesc, 16, v1.a, self.getChannelIcon());
        }
        if (output.I(serialDesc, 17) || self.getChannelName() != null) {
            output.z(serialDesc, 17, v1.a, self.getChannelName());
        }
        if (output.I(serialDesc, 18) || self.getEmbedCanBeTapped() != null) {
            output.z(serialDesc, 18, g.a, self.getEmbedCanBeTapped());
        }
        if (output.I(serialDesc, 19) || self.getMemberText() != null) {
            output.z(serialDesc, 19, v1.a, self.getMemberText());
        }
        if (output.I(serialDesc, 20) || self.getOnlineText() != null) {
            output.z(serialDesc, 20, v1.a, self.getOnlineText());
        }
        if (output.I(serialDesc, 21) || self.getResolvingGradientEnd() != null) {
            output.z(serialDesc, 21, o0.a, self.getResolvingGradientEnd());
        }
        if (output.I(serialDesc, 22) || self.getResolvingGradientStart() != null) {
            output.z(serialDesc, 22, o0.a, self.getResolvingGradientStart());
        }
        if (output.I(serialDesc, 23) || self.getSplashHasRadialGradient() != null) {
            output.z(serialDesc, 23, g.a, self.getSplashHasRadialGradient());
        }
        if (output.I(serialDesc, 24) || self.getSplashOpacity() != null) {
            output.z(serialDesc, 24, o0.a, self.getSplashOpacity());
        }
        if (output.I(serialDesc, 25) || self.getSplashUrl() != null) {
            output.z(serialDesc, 25, v1.a, self.getSplashUrl());
        }
        if (output.I(serialDesc, 26) || self.getInviteSplash() != null) {
            output.z(serialDesc, 26, v1.a, self.getInviteSplash());
        }
        if (output.I(serialDesc, 27) || self.getSubtitleColor() != null) {
            output.z(serialDesc, 27, o0.a, self.getSubtitleColor());
        }
        if (output.I(serialDesc, 28) || self.getThumbnailBackgroundColor() != null) {
            output.z(serialDesc, 28, o0.a, self.getThumbnailBackgroundColor());
        }
        if (output.I(serialDesc, 29) || self.getThumbnailCornerRadius() != null) {
            output.z(serialDesc, 29, o0.a, self.getThumbnailCornerRadius());
        }
        if (output.I(serialDesc, 30) || self.getThumbnailText() != null) {
            output.z(serialDesc, 30, v1.a, self.getThumbnailText());
        }
        if (output.I(serialDesc, 31) || self.getThumbnailUrl() != null) {
            output.z(serialDesc, 31, v1.a, self.getThumbnailUrl());
        }
        if (output.I(serialDesc, 32) || self.getTitleColor() != null) {
            output.z(serialDesc, 32, o0.a, self.getTitleColor());
        }
        if (output.I(serialDesc, 33) || self.getExtendedType() != CodedLinkExtendedType.GUILD_INVITE_DISABLED) {
            output.g(serialDesc, 33, CodedLinkExtendedType.Serializer.INSTANCE, self.getExtendedType());
        }
        output.y(serialDesc, 34, self.getGuildName());
        if (output.I(serialDesc, 35) || self.getGuildIcon() != null) {
            output.z(serialDesc, 35, v1.a, self.getGuildIcon());
        }
        if (output.I(serialDesc, 36) || self.getHeaderIcon() != null) {
            output.z(serialDesc, 36, v1.a, self.getHeaderIcon());
        }
        if (!output.I(serialDesc, 37) && self.getBadgeIconUrl() == null) {
            return;
        }
        output.z(serialDesc, 37, v1.a, self.getBadgeIconUrl());
    }

    /* renamed from: component1, reason: from getter */
    public final int getBackgroundColor() {
        return this.backgroundColor;
    }

    /* renamed from: component10, reason: from getter */
    public final Integer getAcceptLabelBackgroundColor() {
        return this.acceptLabelBackgroundColor;
    }

    /* renamed from: component11, reason: from getter */
    public final Integer getAcceptLabelBorderColor() {
        return this.acceptLabelBorderColor;
    }

    /* renamed from: component12, reason: from getter */
    public final Integer getAcceptLabelColor() {
        return this.acceptLabelColor;
    }

    /* renamed from: component13, reason: from getter */
    public final String getAcceptLabelText() {
        return this.acceptLabelText;
    }

    /* renamed from: component14, reason: from getter */
    public final String getBodyText() {
        return this.bodyText;
    }

    /* renamed from: component15, reason: from getter */
    public final Integer getBodyTextColor() {
        return this.bodyTextColor;
    }

    /* renamed from: component16, reason: from getter */
    public final Boolean getCanBeAccepted() {
        return this.canBeAccepted;
    }

    /* renamed from: component17, reason: from getter */
    public final String getChannelIcon() {
        return this.channelIcon;
    }

    /* renamed from: component18, reason: from getter */
    public final String getChannelName() {
        return this.channelName;
    }

    /* renamed from: component19, reason: from getter */
    public final Boolean getEmbedCanBeTapped() {
        return this.embedCanBeTapped;
    }

    /* renamed from: component2, reason: from getter */
    public final int getBorderColor() {
        return this.borderColor;
    }

    /* renamed from: component20, reason: from getter */
    public final String getMemberText() {
        return this.memberText;
    }

    /* renamed from: component21, reason: from getter */
    public final String getOnlineText() {
        return this.onlineText;
    }

    /* renamed from: component22, reason: from getter */
    public final Integer getResolvingGradientEnd() {
        return this.resolvingGradientEnd;
    }

    /* renamed from: component23, reason: from getter */
    public final Integer getResolvingGradientStart() {
        return this.resolvingGradientStart;
    }

    /* renamed from: component24, reason: from getter */
    public final Boolean getSplashHasRadialGradient() {
        return this.splashHasRadialGradient;
    }

    /* renamed from: component25, reason: from getter */
    public final Integer getSplashOpacity() {
        return this.splashOpacity;
    }

    /* renamed from: component26, reason: from getter */
    public final String getSplashUrl() {
        return this.splashUrl;
    }

    /* renamed from: component27, reason: from getter */
    public final String getInviteSplash() {
        return this.inviteSplash;
    }

    /* renamed from: component28, reason: from getter */
    public final Integer getSubtitleColor() {
        return this.subtitleColor;
    }

    /* renamed from: component29, reason: from getter */
    public final Integer getThumbnailBackgroundColor() {
        return this.thumbnailBackgroundColor;
    }

    /* renamed from: component3, reason: from getter */
    public final int getHeaderColor() {
        return this.headerColor;
    }

    /* renamed from: component30, reason: from getter */
    public final Integer getThumbnailCornerRadius() {
        return this.thumbnailCornerRadius;
    }

    /* renamed from: component31, reason: from getter */
    public final String getThumbnailText() {
        return this.thumbnailText;
    }

    /* renamed from: component32, reason: from getter */
    public final String getThumbnailUrl() {
        return this.thumbnailUrl;
    }

    /* renamed from: component33, reason: from getter */
    public final Integer getTitleColor() {
        return this.titleColor;
    }

    @NotNull
    /* renamed from: component34, reason: from getter */
    public final CodedLinkExtendedType getExtendedType() {
        return this.extendedType;
    }

    @NotNull
    /* renamed from: component35, reason: from getter */
    public final String getGuildName() {
        return this.guildName;
    }

    /* renamed from: component36, reason: from getter */
    public final String getGuildIcon() {
        return this.guildIcon;
    }

    /* renamed from: component37, reason: from getter */
    public final String getHeaderIcon() {
        return this.headerIcon;
    }

    /* renamed from: component38, reason: from getter */
    public final String getBadgeIconUrl() {
        return this.badgeIconUrl;
    }

    @NotNull
    /* renamed from: component4, reason: from getter */
    public final String getHeaderText() {
        return this.headerText;
    }

    @NotNull
    /* renamed from: component5, reason: from getter */
    public final InviteType getType() {
        return this.type;
    }

    @NotNull
    /* renamed from: component6, reason: from getter */
    public final String getTitleText() {
        return this.titleText;
    }

    @NotNull
    /* renamed from: component7, reason: from getter */
    public final String getSubtitle() {
        return this.subtitle;
    }

    @NotNull
    /* renamed from: component8, reason: from getter */
    public final String getHelpCenterArticleLabel() {
        return this.helpCenterArticleLabel;
    }

    @NotNull
    /* renamed from: component9, reason: from getter */
    public final String getHelpCenterArticleURL() {
        return this.helpCenterArticleURL;
    }

    @NotNull
    public final GuildInviteDisabledEmbedImpl copy(int backgroundColor, int borderColor, int headerColor, @NotNull String headerText, @NotNull InviteType type, @NotNull String titleText, @NotNull String subtitle, @NotNull String helpCenterArticleLabel, @NotNull String helpCenterArticleURL, Integer acceptLabelBackgroundColor, Integer acceptLabelBorderColor, Integer acceptLabelColor, String acceptLabelText, String bodyText, Integer bodyTextColor, Boolean canBeAccepted, String channelIcon, String channelName, Boolean embedCanBeTapped, String memberText, String onlineText, Integer resolvingGradientEnd, Integer resolvingGradientStart, Boolean splashHasRadialGradient, Integer splashOpacity, String splashUrl, String inviteSplash, Integer subtitleColor, Integer thumbnailBackgroundColor, Integer thumbnailCornerRadius, String thumbnailText, String thumbnailUrl, Integer titleColor, @NotNull CodedLinkExtendedType extendedType, @NotNull String guildName, String guildIcon, String headerIcon, String badgeIconUrl) {
        Intrinsics.checkNotNullParameter(headerText, "headerText");
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(titleText, "titleText");
        Intrinsics.checkNotNullParameter(subtitle, "subtitle");
        Intrinsics.checkNotNullParameter(helpCenterArticleLabel, "helpCenterArticleLabel");
        Intrinsics.checkNotNullParameter(helpCenterArticleURL, "helpCenterArticleURL");
        Intrinsics.checkNotNullParameter(extendedType, "extendedType");
        Intrinsics.checkNotNullParameter(guildName, "guildName");
        return new GuildInviteDisabledEmbedImpl(backgroundColor, borderColor, headerColor, headerText, type, titleText, subtitle, helpCenterArticleLabel, helpCenterArticleURL, acceptLabelBackgroundColor, acceptLabelBorderColor, acceptLabelColor, acceptLabelText, bodyText, bodyTextColor, canBeAccepted, channelIcon, channelName, embedCanBeTapped, memberText, onlineText, resolvingGradientEnd, resolvingGradientStart, splashHasRadialGradient, splashOpacity, splashUrl, inviteSplash, subtitleColor, thumbnailBackgroundColor, thumbnailCornerRadius, thumbnailText, thumbnailUrl, titleColor, extendedType, guildName, guildIcon, headerIcon, badgeIconUrl);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof GuildInviteDisabledEmbedImpl)) {
            return false;
        }
        GuildInviteDisabledEmbedImpl guildInviteDisabledEmbedImpl = (GuildInviteDisabledEmbedImpl) other;
        return this.backgroundColor == guildInviteDisabledEmbedImpl.backgroundColor && this.borderColor == guildInviteDisabledEmbedImpl.borderColor && this.headerColor == guildInviteDisabledEmbedImpl.headerColor && Intrinsics.areEqual(this.headerText, guildInviteDisabledEmbedImpl.headerText) && this.type == guildInviteDisabledEmbedImpl.type && Intrinsics.areEqual(this.titleText, guildInviteDisabledEmbedImpl.titleText) && Intrinsics.areEqual(this.subtitle, guildInviteDisabledEmbedImpl.subtitle) && Intrinsics.areEqual(this.helpCenterArticleLabel, guildInviteDisabledEmbedImpl.helpCenterArticleLabel) && Intrinsics.areEqual(this.helpCenterArticleURL, guildInviteDisabledEmbedImpl.helpCenterArticleURL) && Intrinsics.areEqual(this.acceptLabelBackgroundColor, guildInviteDisabledEmbedImpl.acceptLabelBackgroundColor) && Intrinsics.areEqual(this.acceptLabelBorderColor, guildInviteDisabledEmbedImpl.acceptLabelBorderColor) && Intrinsics.areEqual(this.acceptLabelColor, guildInviteDisabledEmbedImpl.acceptLabelColor) && Intrinsics.areEqual(this.acceptLabelText, guildInviteDisabledEmbedImpl.acceptLabelText) && Intrinsics.areEqual(this.bodyText, guildInviteDisabledEmbedImpl.bodyText) && Intrinsics.areEqual(this.bodyTextColor, guildInviteDisabledEmbedImpl.bodyTextColor) && Intrinsics.areEqual(this.canBeAccepted, guildInviteDisabledEmbedImpl.canBeAccepted) && Intrinsics.areEqual(this.channelIcon, guildInviteDisabledEmbedImpl.channelIcon) && Intrinsics.areEqual(this.channelName, guildInviteDisabledEmbedImpl.channelName) && Intrinsics.areEqual(this.embedCanBeTapped, guildInviteDisabledEmbedImpl.embedCanBeTapped) && Intrinsics.areEqual(this.memberText, guildInviteDisabledEmbedImpl.memberText) && Intrinsics.areEqual(this.onlineText, guildInviteDisabledEmbedImpl.onlineText) && Intrinsics.areEqual(this.resolvingGradientEnd, guildInviteDisabledEmbedImpl.resolvingGradientEnd) && Intrinsics.areEqual(this.resolvingGradientStart, guildInviteDisabledEmbedImpl.resolvingGradientStart) && Intrinsics.areEqual(this.splashHasRadialGradient, guildInviteDisabledEmbedImpl.splashHasRadialGradient) && Intrinsics.areEqual(this.splashOpacity, guildInviteDisabledEmbedImpl.splashOpacity) && Intrinsics.areEqual(this.splashUrl, guildInviteDisabledEmbedImpl.splashUrl) && Intrinsics.areEqual(this.inviteSplash, guildInviteDisabledEmbedImpl.inviteSplash) && Intrinsics.areEqual(this.subtitleColor, guildInviteDisabledEmbedImpl.subtitleColor) && Intrinsics.areEqual(this.thumbnailBackgroundColor, guildInviteDisabledEmbedImpl.thumbnailBackgroundColor) && Intrinsics.areEqual(this.thumbnailCornerRadius, guildInviteDisabledEmbedImpl.thumbnailCornerRadius) && Intrinsics.areEqual(this.thumbnailText, guildInviteDisabledEmbedImpl.thumbnailText) && Intrinsics.areEqual(this.thumbnailUrl, guildInviteDisabledEmbedImpl.thumbnailUrl) && Intrinsics.areEqual(this.titleColor, guildInviteDisabledEmbedImpl.titleColor) && this.extendedType == guildInviteDisabledEmbedImpl.extendedType && Intrinsics.areEqual(this.guildName, guildInviteDisabledEmbedImpl.guildName) && Intrinsics.areEqual(this.guildIcon, guildInviteDisabledEmbedImpl.guildIcon) && Intrinsics.areEqual(this.headerIcon, guildInviteDisabledEmbedImpl.headerIcon) && Intrinsics.areEqual(this.badgeIconUrl, guildInviteDisabledEmbedImpl.badgeIconUrl);
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

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteExtendedEmbed
    @NotNull
    public CodedLinkExtendedType getExtendedType() {
        return this.extendedType;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteExtendedEmbed
    public String getGuildIcon() {
        return this.guildIcon;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteExtendedEmbed
    @NotNull
    public String getGuildName() {
        return this.guildName;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public int getHeaderColor() {
        return this.headerColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteExtendedEmbed
    public String getHeaderIcon() {
        return this.headerIcon;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    @NotNull
    public String getHeaderText() {
        return this.headerText;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildDisabledInviteEmbed
    @NotNull
    public String getHelpCenterArticleLabel() {
        return this.helpCenterArticleLabel;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildDisabledInviteEmbed
    @NotNull
    public String getHelpCenterArticleURL() {
        return this.helpCenterArticleURL;
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
    @NotNull
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
    @NotNull
    public String getTitleText() {
        return this.titleText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    @NotNull
    public InviteType getType() {
        return this.type;
    }

    public int hashCode() {
        int d6 = a3.e.d(a3.e.d(a3.e.d(a3.e.d((this.type.hashCode() + a3.e.d(a.u(this.headerColor, a.u(this.borderColor, Integer.hashCode(this.backgroundColor) * 31, 31), 31), 31, this.headerText)) * 31, 31, this.titleText), 31, this.subtitle), 31, this.helpCenterArticleLabel), 31, this.helpCenterArticleURL);
        Integer num = this.acceptLabelBackgroundColor;
        int hashCode = (d6 + (num == null ? 0 : num.hashCode())) * 31;
        Integer num2 = this.acceptLabelBorderColor;
        int hashCode2 = (hashCode + (num2 == null ? 0 : num2.hashCode())) * 31;
        Integer num3 = this.acceptLabelColor;
        int hashCode3 = (hashCode2 + (num3 == null ? 0 : num3.hashCode())) * 31;
        String str = this.acceptLabelText;
        int hashCode4 = (hashCode3 + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.bodyText;
        int hashCode5 = (hashCode4 + (str2 == null ? 0 : str2.hashCode())) * 31;
        Integer num4 = this.bodyTextColor;
        int hashCode6 = (hashCode5 + (num4 == null ? 0 : num4.hashCode())) * 31;
        Boolean bool = this.canBeAccepted;
        int hashCode7 = (hashCode6 + (bool == null ? 0 : bool.hashCode())) * 31;
        String str3 = this.channelIcon;
        int hashCode8 = (hashCode7 + (str3 == null ? 0 : str3.hashCode())) * 31;
        String str4 = this.channelName;
        int hashCode9 = (hashCode8 + (str4 == null ? 0 : str4.hashCode())) * 31;
        Boolean bool2 = this.embedCanBeTapped;
        int hashCode10 = (hashCode9 + (bool2 == null ? 0 : bool2.hashCode())) * 31;
        String str5 = this.memberText;
        int hashCode11 = (hashCode10 + (str5 == null ? 0 : str5.hashCode())) * 31;
        String str6 = this.onlineText;
        int hashCode12 = (hashCode11 + (str6 == null ? 0 : str6.hashCode())) * 31;
        Integer num5 = this.resolvingGradientEnd;
        int hashCode13 = (hashCode12 + (num5 == null ? 0 : num5.hashCode())) * 31;
        Integer num6 = this.resolvingGradientStart;
        int hashCode14 = (hashCode13 + (num6 == null ? 0 : num6.hashCode())) * 31;
        Boolean bool3 = this.splashHasRadialGradient;
        int hashCode15 = (hashCode14 + (bool3 == null ? 0 : bool3.hashCode())) * 31;
        Integer num7 = this.splashOpacity;
        int hashCode16 = (hashCode15 + (num7 == null ? 0 : num7.hashCode())) * 31;
        String str7 = this.splashUrl;
        int hashCode17 = (hashCode16 + (str7 == null ? 0 : str7.hashCode())) * 31;
        String str8 = this.inviteSplash;
        int hashCode18 = (hashCode17 + (str8 == null ? 0 : str8.hashCode())) * 31;
        Integer num8 = this.subtitleColor;
        int hashCode19 = (hashCode18 + (num8 == null ? 0 : num8.hashCode())) * 31;
        Integer num9 = this.thumbnailBackgroundColor;
        int hashCode20 = (hashCode19 + (num9 == null ? 0 : num9.hashCode())) * 31;
        Integer num10 = this.thumbnailCornerRadius;
        int hashCode21 = (hashCode20 + (num10 == null ? 0 : num10.hashCode())) * 31;
        String str9 = this.thumbnailText;
        int hashCode22 = (hashCode21 + (str9 == null ? 0 : str9.hashCode())) * 31;
        String str10 = this.thumbnailUrl;
        int hashCode23 = (hashCode22 + (str10 == null ? 0 : str10.hashCode())) * 31;
        Integer num11 = this.titleColor;
        int d7 = a3.e.d((this.extendedType.hashCode() + ((hashCode23 + (num11 == null ? 0 : num11.hashCode())) * 31)) * 31, 31, this.guildName);
        String str11 = this.guildIcon;
        int hashCode24 = (d7 + (str11 == null ? 0 : str11.hashCode())) * 31;
        String str12 = this.headerIcon;
        int hashCode25 = (hashCode24 + (str12 == null ? 0 : str12.hashCode())) * 31;
        String str13 = this.badgeIconUrl;
        return hashCode25 + (str13 != null ? str13.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        int i5 = this.backgroundColor;
        int i6 = this.borderColor;
        int i10 = this.headerColor;
        String str = this.headerText;
        InviteType inviteType = this.type;
        String str2 = this.titleText;
        String str3 = this.subtitle;
        String str4 = this.helpCenterArticleLabel;
        String str5 = this.helpCenterArticleURL;
        Integer num = this.acceptLabelBackgroundColor;
        Integer num2 = this.acceptLabelBorderColor;
        Integer num3 = this.acceptLabelColor;
        String str6 = this.acceptLabelText;
        String str7 = this.bodyText;
        Integer num4 = this.bodyTextColor;
        Boolean bool = this.canBeAccepted;
        String str8 = this.channelIcon;
        String str9 = this.channelName;
        Boolean bool2 = this.embedCanBeTapped;
        String str10 = this.memberText;
        String str11 = this.onlineText;
        Integer num5 = this.resolvingGradientEnd;
        Integer num6 = this.resolvingGradientStart;
        Boolean bool3 = this.splashHasRadialGradient;
        Integer num7 = this.splashOpacity;
        String str12 = this.splashUrl;
        String str13 = this.inviteSplash;
        Integer num8 = this.subtitleColor;
        Integer num9 = this.thumbnailBackgroundColor;
        Integer num10 = this.thumbnailCornerRadius;
        String str14 = this.thumbnailText;
        String str15 = this.thumbnailUrl;
        Integer num11 = this.titleColor;
        CodedLinkExtendedType codedLinkExtendedType = this.extendedType;
        String str16 = this.guildName;
        String str17 = this.guildIcon;
        String str18 = this.headerIcon;
        String str19 = this.badgeIconUrl;
        StringBuilder q5 = a3.e.q(i5, "GuildInviteDisabledEmbedImpl(backgroundColor=", i6, ", borderColor=", ", headerColor=");
        a3.e.z(q5, i10, ", headerText=", str, ", type=");
        q5.append(inviteType);
        q5.append(", titleText=");
        q5.append(str2);
        q5.append(", subtitle=");
        a3.e.A(q5, str3, ", helpCenterArticleLabel=", str4, ", helpCenterArticleURL=");
        a.r(num, str5, ", acceptLabelBackgroundColor=", ", acceptLabelBorderColor=", q5);
        d.s(q5, num2, ", acceptLabelColor=", num3, ", acceptLabelText=");
        a3.e.A(q5, str6, ", bodyText=", str7, ", bodyTextColor=");
        q5.append(num4);
        q5.append(", canBeAccepted=");
        q5.append(bool);
        q5.append(", channelIcon=");
        a3.e.A(q5, str8, ", channelName=", str9, ", embedCanBeTapped=");
        q5.append(bool2);
        q5.append(", memberText=");
        q5.append(str10);
        q5.append(", onlineText=");
        a.r(num5, str11, ", resolvingGradientEnd=", ", resolvingGradientStart=", q5);
        q5.append(num6);
        q5.append(", splashHasRadialGradient=");
        q5.append(bool3);
        q5.append(", splashOpacity=");
        d.r(num7, ", splashUrl=", str12, ", inviteSplash=", q5);
        a.r(num8, str13, ", subtitleColor=", ", thumbnailBackgroundColor=", q5);
        d.s(q5, num9, ", thumbnailCornerRadius=", num10, ", thumbnailText=");
        a3.e.A(q5, str14, ", thumbnailUrl=", str15, ", titleColor=");
        q5.append(num11);
        q5.append(", extendedType=");
        q5.append(codedLinkExtendedType);
        q5.append(", guildName=");
        a3.e.A(q5, str16, ", guildIcon=", str17, ", headerIcon=");
        return a.k(q5, str18, ", badgeIconUrl=", str19, ")");
    }

    public /* synthetic */ GuildInviteDisabledEmbedImpl(int i5, int i6, int i10, String str, InviteType inviteType, String str2, String str3, String str4, String str5, Integer num, Integer num2, Integer num3, String str6, String str7, Integer num4, Boolean bool, String str8, String str9, Boolean bool2, String str10, String str11, Integer num5, Integer num6, Boolean bool3, Integer num7, String str12, String str13, Integer num8, Integer num9, Integer num10, String str14, String str15, Integer num11, CodedLinkExtendedType codedLinkExtendedType, String str16, String str17, String str18, String str19, int i11, int i12, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, i6, i10, str, inviteType, str2, str3, str4, str5, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : num, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? null : num2, (i11 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? null : num3, (i11 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? null : str6, (i11 & 8192) != 0 ? null : str7, (i11 & 16384) != 0 ? null : num4, (32768 & i11) != 0 ? null : bool, (65536 & i11) != 0 ? null : str8, (131072 & i11) != 0 ? null : str9, (262144 & i11) != 0 ? null : bool2, (524288 & i11) != 0 ? null : str10, (1048576 & i11) != 0 ? null : str11, (2097152 & i11) != 0 ? null : num5, (4194304 & i11) != 0 ? null : num6, (8388608 & i11) != 0 ? null : bool3, (16777216 & i11) != 0 ? null : num7, (33554432 & i11) != 0 ? null : str12, (67108864 & i11) != 0 ? null : str13, (134217728 & i11) != 0 ? null : num8, (268435456 & i11) != 0 ? null : num9, (536870912 & i11) != 0 ? null : num10, (1073741824 & i11) != 0 ? null : str14, (i11 & Integer.MIN_VALUE) != 0 ? null : str15, (i12 & 1) != 0 ? null : num11, (i12 & 2) != 0 ? CodedLinkExtendedType.GUILD_INVITE_DISABLED : codedLinkExtendedType, str16, (i12 & 8) != 0 ? null : str17, (i12 & 16) != 0 ? null : str18, (i12 & 32) != 0 ? null : str19);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public GuildInviteDisabledEmbedImpl(int i5, int i6, int i10, @NotNull String headerText, @NotNull InviteType type, @NotNull String titleText, @NotNull String subtitle, @NotNull String helpCenterArticleLabel, @NotNull String helpCenterArticleURL, Integer num, Integer num2, Integer num3, String str, String str2, Integer num4, Boolean bool, String str3, String str4, Boolean bool2, String str5, String str6, Integer num5, Integer num6, Boolean bool3, Integer num7, String str7, String str8, Integer num8, Integer num9, Integer num10, String str9, String str10, Integer num11, @NotNull CodedLinkExtendedType extendedType, @NotNull String guildName, String str11, String str12, String str13) {
        super(null);
        Intrinsics.checkNotNullParameter(headerText, "headerText");
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(titleText, "titleText");
        Intrinsics.checkNotNullParameter(subtitle, "subtitle");
        Intrinsics.checkNotNullParameter(helpCenterArticleLabel, "helpCenterArticleLabel");
        Intrinsics.checkNotNullParameter(helpCenterArticleURL, "helpCenterArticleURL");
        Intrinsics.checkNotNullParameter(extendedType, "extendedType");
        Intrinsics.checkNotNullParameter(guildName, "guildName");
        this.backgroundColor = i5;
        this.borderColor = i6;
        this.headerColor = i10;
        this.headerText = headerText;
        this.type = type;
        this.titleText = titleText;
        this.subtitle = subtitle;
        this.helpCenterArticleLabel = helpCenterArticleLabel;
        this.helpCenterArticleURL = helpCenterArticleURL;
        this.acceptLabelBackgroundColor = num;
        this.acceptLabelBorderColor = num2;
        this.acceptLabelColor = num3;
        this.acceptLabelText = str;
        this.bodyText = str2;
        this.bodyTextColor = num4;
        this.canBeAccepted = bool;
        this.channelIcon = str3;
        this.channelName = str4;
        this.embedCanBeTapped = bool2;
        this.memberText = str5;
        this.onlineText = str6;
        this.resolvingGradientEnd = num5;
        this.resolvingGradientStart = num6;
        this.splashHasRadialGradient = bool3;
        this.splashOpacity = num7;
        this.splashUrl = str7;
        this.inviteSplash = str8;
        this.subtitleColor = num8;
        this.thumbnailBackgroundColor = num9;
        this.thumbnailCornerRadius = num10;
        this.thumbnailText = str9;
        this.thumbnailUrl = str10;
        this.titleColor = num11;
        this.extendedType = extendedType;
        this.guildName = guildName;
        this.guildIcon = str11;
        this.headerIcon = str12;
        this.badgeIconUrl = str13;
    }
}
