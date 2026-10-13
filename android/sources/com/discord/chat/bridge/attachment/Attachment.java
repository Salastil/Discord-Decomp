package com.discord.chat.bridge.attachment;

import android.net.UrlQuerySanitizer;
import android.util.Base64;
import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.g0;
import bs.h1;
import bs.i;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.attachment.Attachment;
import com.discord.chat.bridge.botuikit.a;
import com.discord.chat.bridge.spoiler.SpoilerableData;
import com.discord.jank_stats.JankRecordStore;
import com.discord.media_player.HttpEngine;
import com.discord.media_player.MediaPlayer;
import com.discord.react_asset_fetcher.ReactAsset;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.views.progressbar.ReactProgressBarViewManager;
import fo.l;
import fo.q;
import fo.r;
import k0.d;
import ki.b;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.jvm.functions.Function0;
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
import xr.e;

@e
@Metadata(d1 = {"\u0000n\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0018\n\u0002\u0010\u0007\n\u0002\b\u000f\n\u0002\u0010\u0012\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b/\n\u0002\u0018\u0002\n\u0002\b\u000e\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b3\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 ¼\u00012\u00020\u0001:\u0004»\u0001¼\u0001Bé\u0003\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0007\u001a\u00020\u0003\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\t\u0012\u0006\u0010\u000b\u001a\u00020\f\u0012\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u0003\u0012\b\b\u0002\u0010\u0011\u001a\u00020\f\u0012\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\t\u0012\b\b\u0002\u0010\u0018\u001a\u00020\f\u0012\n\b\u0002\u0010\u0019\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\f\u0012\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010 \u001a\u0004\u0018\u00010\f\u0012\n\b\u0002\u0010!\u001a\u0004\u0018\u00010\f\u0012\n\b\u0002\u0010\"\u001a\u0004\u0018\u00010\f\u0012\n\b\u0002\u0010#\u001a\u0004\u0018\u00010\f\u0012\n\b\u0002\u0010$\u001a\u0004\u0018\u00010%\u0012\n\b\u0002\u0010&\u001a\u0004\u0018\u00010\u0003\u0012\b\b\u0002\u0010'\u001a\u00020\f\u0012\n\b\u0002\u0010(\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010)\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010*\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010+\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010,\u001a\u0004\u0018\u00010\f\u0012\n\b\u0002\u0010-\u001a\u0004\u0018\u00010\f\u0012\n\b\u0002\u0010.\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010/\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b0\u00101Bñ\u0003\b\u0010\u0012\u0006\u00102\u001a\u00020\t\u0012\u0006\u00103\u001a\u00020\t\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t\u0012\b\u0010\n\u001a\u0004\u0018\u00010\t\u0012\u0006\u0010\u000b\u001a\u00020\f\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0010\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0011\u001a\u00020\f\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u0013\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0014\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0015\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0016\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u0017\u001a\u0004\u0018\u00010\t\u0012\u0006\u0010\u0018\u001a\u00020\f\u0012\b\u0010\u0019\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u001a\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u001b\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u001c\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u001d\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u001e\u001a\u0004\u0018\u00010\f\u0012\b\u0010\u001f\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010 \u001a\u0004\u0018\u00010\f\u0012\b\u0010!\u001a\u0004\u0018\u00010\f\u0012\b\u0010\"\u001a\u0004\u0018\u00010\f\u0012\b\u0010#\u001a\u0004\u0018\u00010\f\u0012\b\u0010$\u001a\u0004\u0018\u00010%\u0012\b\u0010&\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010'\u001a\u00020\f\u0012\b\u0010(\u001a\u0004\u0018\u00010\t\u0012\b\u0010)\u001a\u0004\u0018\u00010\t\u0012\b\u0010*\u001a\u0004\u0018\u00010\t\u0012\b\u0010+\u001a\u0004\u0018\u00010\t\u0012\b\u0010,\u001a\u0004\u0018\u00010\f\u0012\b\u0010-\u001a\u0004\u0018\u00010\f\u0012\b\u0010.\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010/\u001a\u0004\u0018\u00010\f\u0012\b\u00104\u001a\u0004\u0018\u000105\u0012\b\u00106\u001a\u0004\u0018\u00010\u0003\u0012\b\u00107\u001a\u0004\u0018\u00010\u0003\u0012\b\u00108\u001a\u0004\u0018\u00010\t\u0012\b\u00109\u001a\u0004\u0018\u00010\t\u0012\b\u0010:\u001a\u0004\u0018\u00010;¢\u0006\u0004\b0\u0010<J\u0006\u0010y\u001a\u00020zJ\b\u0010{\u001a\u0004\u0018\u00010|J\b\u0010}\u001a\u00020\fH\u0002J\u0018\u0010~\u001a\u0004\u0018\u00010\t2\u0006\u0010\u007f\u001a\u00020\u0003H\u0002¢\u0006\u0003\u0010\u0080\u0001J\t\u0010\u0081\u0001\u001a\u00020\fH\u0002J\f\u0010\u0082\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\n\u0010\u0083\u0001\u001a\u00020\u0003HÆ\u0003J\f\u0010\u0084\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\n\u0010\u0085\u0001\u001a\u00020\u0003HÆ\u0003J\n\u0010\u0086\u0001\u001a\u00020\u0003HÆ\u0003J\u0011\u0010\u0087\u0001\u001a\u0004\u0018\u00010\tHÂ\u0003¢\u0006\u0002\u0010NJ\u0011\u0010\u0088\u0001\u001a\u0004\u0018\u00010\tHÂ\u0003¢\u0006\u0002\u0010NJ\n\u0010\u0089\u0001\u001a\u00020\fHÆ\u0003J\f\u0010\u008a\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u008b\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u008c\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u008d\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\n\u0010\u008e\u0001\u001a\u00020\fHÆ\u0003J\u0011\u0010\u008f\u0001\u001a\u0004\u0018\u00010\tHÆ\u0003¢\u0006\u0002\u0010NJ\f\u0010\u0090\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u0091\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\f\u0010\u0092\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0011\u0010\u0093\u0001\u001a\u0004\u0018\u00010\tHÆ\u0003¢\u0006\u0002\u0010NJ\u0011\u0010\u0094\u0001\u001a\u0004\u0018\u00010\tHÆ\u0003¢\u0006\u0002\u0010NJ\n\u0010\u0095\u0001\u001a\u00020\fHÆ\u0003J\f\u0010\u0096\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0011\u0010\u0097\u0001\u001a\u0004\u0018\u00010\tHÆ\u0003¢\u0006\u0002\u0010NJ\u0011\u0010\u0098\u0001\u001a\u0004\u0018\u00010\tHÆ\u0003¢\u0006\u0002\u0010NJ\f\u0010\u0099\u0001\u001a\u0004\u0018\u00010\u0003HÂ\u0003J\f\u0010\u009a\u0001\u001a\u0004\u0018\u00010\u0003HÂ\u0003J\u0011\u0010\u009b\u0001\u001a\u0004\u0018\u00010\fHÆ\u0003¢\u0006\u0002\u0010XJ\f\u0010\u009c\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0011\u0010\u009d\u0001\u001a\u0004\u0018\u00010\fHÆ\u0003¢\u0006\u0002\u0010XJ\u0011\u0010\u009e\u0001\u001a\u0004\u0018\u00010\fHÆ\u0003¢\u0006\u0002\u0010XJ\u0011\u0010\u009f\u0001\u001a\u0004\u0018\u00010\fHÆ\u0003¢\u0006\u0002\u0010XJ\u0011\u0010 \u0001\u001a\u0004\u0018\u00010\fHÆ\u0003¢\u0006\u0002\u0010XJ\u0011\u0010¡\u0001\u001a\u0004\u0018\u00010%HÆ\u0003¢\u0006\u0002\u0010`J\f\u0010¢\u0001\u001a\u0004\u0018\u00010\u0003HÂ\u0003J\n\u0010£\u0001\u001a\u00020\fHÆ\u0003J\u0011\u0010¤\u0001\u001a\u0004\u0018\u00010\tHÆ\u0003¢\u0006\u0002\u0010NJ\u0011\u0010¥\u0001\u001a\u0004\u0018\u00010\tHÆ\u0003¢\u0006\u0002\u0010NJ\u0011\u0010¦\u0001\u001a\u0004\u0018\u00010\tHÆ\u0003¢\u0006\u0002\u0010NJ\u0011\u0010§\u0001\u001a\u0004\u0018\u00010\tHÆ\u0003¢\u0006\u0002\u0010NJ\u0011\u0010¨\u0001\u001a\u0004\u0018\u00010\fHÆ\u0003¢\u0006\u0002\u0010XJ\u0011\u0010©\u0001\u001a\u0004\u0018\u00010\fHÆ\u0003¢\u0006\u0002\u0010XJ\f\u0010ª\u0001\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0011\u0010«\u0001\u001a\u0004\u0018\u00010\fHÆ\u0003¢\u0006\u0002\u0010XJú\u0003\u0010¬\u0001\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u00032\b\b\u0002\u0010\u0007\u001a\u00020\u00032\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\t2\b\b\u0002\u0010\u000b\u001a\u00020\f2\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0011\u001a\u00020\f2\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\t2\b\b\u0002\u0010\u0018\u001a\u00020\f2\n\b\u0002\u0010\u0019\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\f2\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010 \u001a\u0004\u0018\u00010\f2\n\b\u0002\u0010!\u001a\u0004\u0018\u00010\f2\n\b\u0002\u0010\"\u001a\u0004\u0018\u00010\f2\n\b\u0002\u0010#\u001a\u0004\u0018\u00010\f2\n\b\u0002\u0010$\u001a\u0004\u0018\u00010%2\n\b\u0002\u0010&\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010'\u001a\u00020\f2\n\b\u0002\u0010(\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010)\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010*\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010+\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010,\u001a\u0004\u0018\u00010\f2\n\b\u0002\u0010-\u001a\u0004\u0018\u00010\f2\n\b\u0002\u0010.\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010/\u001a\u0004\u0018\u00010\fHÆ\u0001¢\u0006\u0003\u0010\u00ad\u0001J\u0016\u0010®\u0001\u001a\u00020\f2\n\u0010¯\u0001\u001a\u0005\u0018\u00010°\u0001HÖ\u0003J\n\u0010±\u0001\u001a\u00020\tHÖ\u0001J\n\u0010²\u0001\u001a\u00020\u0003HÖ\u0001J-\u0010³\u0001\u001a\u00030´\u00012\u0007\u0010µ\u0001\u001a\u00020\u00002\b\u0010¶\u0001\u001a\u00030·\u00012\b\u0010¸\u0001\u001a\u00030¹\u0001H\u0001¢\u0006\u0003\bº\u0001R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b=\u0010>R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b?\u0010>R\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b@\u0010>R\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\bA\u0010>R\u0011\u0010\u0007\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\bB\u0010>R\u001a\u0010\b\u001a\u0004\u0018\u00010\t8\u0002X\u0083\u0004¢\u0006\n\n\u0002\u0010E\u0012\u0004\bC\u0010DR\u001a\u0010\n\u001a\u0004\u0018\u00010\t8\u0002X\u0083\u0004¢\u0006\n\n\u0002\u0010E\u0012\u0004\bF\u0010DR\u0011\u0010\u000b\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010GR\u0013\u0010\r\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\bH\u0010>R\u0013\u0010\u000e\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\bI\u0010>R\u0013\u0010\u000f\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\bJ\u0010>R\u0013\u0010\u0010\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\bK\u0010>R\u0011\u0010\u0011\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\bL\u0010GR\u0015\u0010\u0012\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010E\u001a\u0004\bM\u0010NR\u0013\u0010\u0013\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\bO\u0010>R\u0013\u0010\u0014\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\bP\u0010>R\u0013\u0010\u0015\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\bQ\u0010>R\u0015\u0010\u0016\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010E\u001a\u0004\bR\u0010NR\u0015\u0010\u0017\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010E\u001a\u0004\bS\u0010NR\u0011\u0010\u0018\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010GR\u0013\u0010\u0019\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\bT\u0010>R\u0015\u0010\u001a\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010E\u001a\u0004\bU\u0010NR\u0015\u0010\u001b\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010E\u001a\u0004\bV\u0010NR\u0010\u0010\u001c\u001a\u0004\u0018\u00010\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u001d\u001a\u0004\u0018\u00010\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0015\u0010\u001e\u001a\u0004\u0018\u00010\f¢\u0006\n\n\u0002\u0010Y\u001a\u0004\bW\u0010XR\u0013\u0010\u001f\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\bZ\u0010>R\u0015\u0010 \u001a\u0004\u0018\u00010\f¢\u0006\n\n\u0002\u0010Y\u001a\u0004\b[\u0010XR\u0015\u0010!\u001a\u0004\u0018\u00010\f¢\u0006\n\n\u0002\u0010Y\u001a\u0004\b\\\u0010XR\u0015\u0010\"\u001a\u0004\u0018\u00010\f¢\u0006\n\n\u0002\u0010Y\u001a\u0004\b]\u0010XR\u0015\u0010#\u001a\u0004\u0018\u00010\f¢\u0006\n\n\u0002\u0010Y\u001a\u0004\b^\u0010XR\u0015\u0010$\u001a\u0004\u0018\u00010%¢\u0006\n\n\u0002\u0010a\u001a\u0004\b_\u0010`R\u0010\u0010&\u001a\u0004\u0018\u00010\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0011\u0010'\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b'\u0010GR\u0015\u0010(\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010E\u001a\u0004\bb\u0010NR\u0015\u0010)\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010E\u001a\u0004\bc\u0010NR\u0015\u0010*\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010E\u001a\u0004\bd\u0010NR\u0015\u0010+\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010E\u001a\u0004\be\u0010NR\u0015\u0010,\u001a\u0004\u0018\u00010\f¢\u0006\n\n\u0002\u0010Y\u001a\u0004\bf\u0010XR\u0015\u0010-\u001a\u0004\u0018\u00010\f¢\u0006\n\n\u0002\u0010Y\u001a\u0004\bg\u0010XR\u0013\u0010.\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\bh\u0010>R\u0015\u0010/\u001a\u0004\u0018\u00010\f¢\u0006\n\n\u0002\u0010Y\u001a\u0004\bi\u0010XR\u001b\u0010j\u001a\u00020k8FX\u0086\u0084\u0002¢\u0006\f\n\u0004\bn\u0010o\u001a\u0004\bl\u0010mR\u0013\u00104\u001a\u0004\u0018\u000105¢\u0006\b\n\u0000\u001a\u0004\bp\u0010qR\u0016\u00106\u001a\u0004\u0018\u00010\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\br\u0010>R\u0016\u00107\u001a\u0004\u0018\u00010\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bs\u0010>R\u0012\u00108\u001a\u0004\u0018\u00010\tX\u0082\u0004¢\u0006\u0004\n\u0002\u0010ER\u0012\u00109\u001a\u0004\u0018\u00010\tX\u0082\u0004¢\u0006\u0004\n\u0002\u0010ER\u0011\u0010t\u001a\u00020\t8F¢\u0006\u0006\u001a\u0004\bu\u0010vR\u0011\u0010w\u001a\u00020\t8F¢\u0006\u0006\u001a\u0004\bx\u0010v¨\u0006½\u0001"}, d2 = {"Lcom/discord/chat/bridge/attachment/Attachment;", "Lcom/discord/chat/bridge/spoiler/SpoilerableData;", StackTraceHelper.ID_KEY, "", "url", "videoUrl", "filename", "size", "sourceWidth", "", "sourceHeight", "isSpoiler", "", "spoiler", "description", "hint", ViewProps.ROLE, "showDescription", ReactProgressBarViewManager.PROP_PROGRESS, "uploaderId", "uploaderItemId", "placeholder", "placeholderVersion", ViewProps.BACKGROUND_COLOR, "isSuspiciousDownload", "attachmentTagText", "attachmentTagBackgroundColor", "attachmentTagTextColor", "attachmentTagIconType", "attachmentType", "obscure", "obscureDescription", "obscureAwaitingScan", "obscureHideControls", "obscureIsOpaque", "verifyAge", "durationSecs", "", "waveform", "isAnimated", "mediaViewerBufferForPlaybackMs", "mediaViewerBufferForPlaybackAfterRebufferMs", "mediaViewerMinBufferMs", "mediaViewerMaxBufferMs", "mediaViewerEnableDecoderFallback", "mediaViewerEnableAsyncBufferQueueing", "mediaViewerHttpEngine", "srcIsAnimated", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;ZLjava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Float;Ljava/lang/String;ZLjava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/Boolean;)V", "seen0", "seen1", "waveformByteArray", "", "spoilerOrNull", "obscureOrNull", "proxyWidth", "proxyHeight", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;ZLjava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Float;Ljava/lang/String;ZLjava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/Boolean;[BLjava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getId", "()Ljava/lang/String;", "getUrl", "getVideoUrl", "getFilename", "getSize", "getSourceWidth$annotations", "()V", "Ljava/lang/Integer;", "getSourceHeight$annotations", "()Z", "getSpoiler", "getDescription", "getHint", "getRole", "getShowDescription", "getProgress", "()Ljava/lang/Integer;", "getUploaderId", "getUploaderItemId", "getPlaceholder", "getPlaceholderVersion", "getBackgroundColor", "getAttachmentTagText", "getAttachmentTagBackgroundColor", "getAttachmentTagTextColor", "getObscure", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "getObscureDescription", "getObscureAwaitingScan", "getObscureHideControls", "getObscureIsOpaque", "getVerifyAge", "getDurationSecs", "()Ljava/lang/Float;", "Ljava/lang/Float;", "getMediaViewerBufferForPlaybackMs", "getMediaViewerBufferForPlaybackAfterRebufferMs", "getMediaViewerMinBufferMs", "getMediaViewerMaxBufferMs", "getMediaViewerEnableDecoderFallback", "getMediaViewerEnableAsyncBufferQueueing", "getMediaViewerHttpEngine", "getSrcIsAnimated", "playerSettings", "Lcom/discord/media_player/MediaPlayer$PlayerSettings;", "getPlayerSettings", "()Lcom/discord/media_player/MediaPlayer$PlayerSettings;", "playerSettings$delegate", "Lkotlin/Lazy;", "getWaveformByteArray", "()[B", "getSpoilerOrNull", "getObscureOrNull", "width", "getWidth", "()I", "height", "getHeight", "type", "Lcom/discord/chat/bridge/attachment/AttachmentType;", "getAttachmentTagIcon", "Lcom/discord/react_asset_fetcher/ReactAsset;", "shouldShowImages", "getProxyUrlQueryParam", "paramName", "(Ljava/lang/String;)Ljava/lang/Integer;", "hasDimensions", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "component14", "component15", "component16", "component17", "component18", "component19", "component20", "component21", "component22", "component23", "component24", "component25", "component26", "component27", "component28", "component29", "component30", "component31", "component32", "component33", "component34", "component35", "component36", "component37", "component38", "component39", "component40", "component41", "component42", "copy", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;ZLjava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Float;Ljava/lang/String;ZLjava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/Boolean;)Lcom/discord/chat/bridge/attachment/Attachment;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nAttachment.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Attachment.kt\ncom/discord/chat/bridge/attachment/Attachment\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,133:1\n1#2:134\n*E\n"})
/* loaded from: classes.dex */
public final /* data */ class Attachment implements SpoilerableData {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final Integer attachmentTagBackgroundColor;
    private final String attachmentTagIconType;
    private final String attachmentTagText;
    private final Integer attachmentTagTextColor;
    private final String attachmentType;
    private final Integer backgroundColor;
    private final String description;
    private final Float durationSecs;

    @NotNull
    private final String filename;
    private final String hint;
    private final String id;
    private final boolean isAnimated;
    private final boolean isSpoiler;
    private final boolean isSuspiciousDownload;
    private final Integer mediaViewerBufferForPlaybackAfterRebufferMs;
    private final Integer mediaViewerBufferForPlaybackMs;
    private final Boolean mediaViewerEnableAsyncBufferQueueing;
    private final Boolean mediaViewerEnableDecoderFallback;
    private final String mediaViewerHttpEngine;
    private final Integer mediaViewerMaxBufferMs;
    private final Integer mediaViewerMinBufferMs;
    private final Boolean obscure;
    private final Boolean obscureAwaitingScan;
    private final String obscureDescription;
    private final Boolean obscureHideControls;
    private final Boolean obscureIsOpaque;
    private final String obscureOrNull;
    private final String placeholder;
    private final Integer placeholderVersion;

    /* renamed from: playerSettings$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy playerSettings;
    private final Integer progress;
    private final Integer proxyHeight;
    private final Integer proxyWidth;
    private final String role;
    private final boolean showDescription;

    @NotNull
    private final String size;
    private final Integer sourceHeight;
    private final Integer sourceWidth;
    private final String spoiler;
    private final String spoilerOrNull;
    private final Boolean srcIsAnimated;
    private final String uploaderId;
    private final String uploaderItemId;

    @NotNull
    private final String url;
    private final Boolean verifyAge;
    private final String videoUrl;
    private final String waveform;
    private final byte[] waveformByteArray;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/attachment/Attachment$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/attachment/Attachment;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return Attachment$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ Attachment(int i5, int i6, String str, String str2, String str3, String str4, String str5, Integer num, Integer num2, boolean z5, String str6, String str7, String str8, String str9, boolean z6, Integer num3, String str10, String str11, String str12, Integer num4, Integer num5, boolean z7, String str13, Integer num6, Integer num7, String str14, String str15, Boolean bool, String str16, Boolean bool2, Boolean bool3, Boolean bool4, Boolean bool5, Float f2, String str17, boolean z8, Integer num8, Integer num9, Integer num10, Integer num11, Boolean bool6, Boolean bool7, String str18, Boolean bool8, byte[] bArr, String str19, String str20, Integer num12, Integer num13, SerializationConstructorMarker serializationConstructorMarker) {
        byte[] bArr2;
        String str21;
        String str22;
        String str23 = null;
        if (154 != (i5 & 154)) {
            h1.k(new int[]{i5, i6}, new int[]{154, 0}, Attachment$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        if ((i5 & 1) == 0) {
            this.id = null;
        } else {
            this.id = str;
        }
        this.url = str2;
        if ((i5 & 4) == 0) {
            this.videoUrl = null;
        } else {
            this.videoUrl = str3;
        }
        this.filename = str4;
        this.size = str5;
        if ((i5 & 32) == 0) {
            this.sourceWidth = null;
        } else {
            this.sourceWidth = num;
        }
        if ((i5 & 64) == 0) {
            this.sourceHeight = null;
        } else {
            this.sourceHeight = num2;
        }
        this.isSpoiler = z5;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.spoiler = null;
        } else {
            this.spoiler = str6;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.description = null;
        } else {
            this.description = str7;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 0) {
            this.hint = null;
        } else {
            this.hint = str8;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_MOVED) == 0) {
            this.role = null;
        } else {
            this.role = str9;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
            this.showDescription = false;
        } else {
            this.showDescription = z6;
        }
        if ((i5 & 8192) == 0) {
            this.progress = null;
        } else {
            this.progress = num3;
        }
        if ((i5 & 16384) == 0) {
            this.uploaderId = null;
        } else {
            this.uploaderId = str10;
        }
        if ((32768 & i5) == 0) {
            this.uploaderItemId = null;
        } else {
            this.uploaderItemId = str11;
        }
        if ((65536 & i5) == 0) {
            this.placeholder = null;
        } else {
            this.placeholder = str12;
        }
        if ((131072 & i5) == 0) {
            this.placeholderVersion = null;
        } else {
            this.placeholderVersion = num4;
        }
        if ((262144 & i5) == 0) {
            this.backgroundColor = null;
        } else {
            this.backgroundColor = num5;
        }
        if ((524288 & i5) == 0) {
            this.isSuspiciousDownload = false;
        } else {
            this.isSuspiciousDownload = z7;
        }
        if ((1048576 & i5) == 0) {
            this.attachmentTagText = null;
        } else {
            this.attachmentTagText = str13;
        }
        if ((2097152 & i5) == 0) {
            this.attachmentTagBackgroundColor = null;
        } else {
            this.attachmentTagBackgroundColor = num6;
        }
        if ((4194304 & i5) == 0) {
            this.attachmentTagTextColor = null;
        } else {
            this.attachmentTagTextColor = num7;
        }
        if ((8388608 & i5) == 0) {
            this.attachmentTagIconType = null;
        } else {
            this.attachmentTagIconType = str14;
        }
        if ((16777216 & i5) == 0) {
            this.attachmentType = null;
        } else {
            this.attachmentType = str15;
        }
        if ((33554432 & i5) == 0) {
            this.obscure = null;
        } else {
            this.obscure = bool;
        }
        if ((67108864 & i5) == 0) {
            this.obscureDescription = null;
        } else {
            this.obscureDescription = str16;
        }
        if ((134217728 & i5) == 0) {
            this.obscureAwaitingScan = null;
        } else {
            this.obscureAwaitingScan = bool2;
        }
        if ((268435456 & i5) == 0) {
            this.obscureHideControls = null;
        } else {
            this.obscureHideControls = bool3;
        }
        if ((536870912 & i5) == 0) {
            this.obscureIsOpaque = null;
        } else {
            this.obscureIsOpaque = bool4;
        }
        if ((1073741824 & i5) == 0) {
            this.verifyAge = null;
        } else {
            this.verifyAge = bool5;
        }
        if ((i5 & Integer.MIN_VALUE) == 0) {
            this.durationSecs = null;
        } else {
            this.durationSecs = f2;
        }
        if ((i6 & 1) == 0) {
            this.waveform = null;
        } else {
            this.waveform = str17;
        }
        this.isAnimated = (i6 & 2) == 0 ? true : z8;
        if ((i6 & 4) == 0) {
            this.mediaViewerBufferForPlaybackMs = null;
        } else {
            this.mediaViewerBufferForPlaybackMs = num8;
        }
        if ((i6 & 8) == 0) {
            this.mediaViewerBufferForPlaybackAfterRebufferMs = null;
        } else {
            this.mediaViewerBufferForPlaybackAfterRebufferMs = num9;
        }
        if ((i6 & 16) == 0) {
            this.mediaViewerMinBufferMs = null;
        } else {
            this.mediaViewerMinBufferMs = num10;
        }
        if ((i6 & 32) == 0) {
            this.mediaViewerMaxBufferMs = null;
        } else {
            this.mediaViewerMaxBufferMs = num11;
        }
        this.mediaViewerEnableDecoderFallback = (i6 & 64) == 0 ? Boolean.FALSE : bool6;
        this.mediaViewerEnableAsyncBufferQueueing = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0 ? Boolean.TRUE : bool7;
        this.mediaViewerHttpEngine = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0 ? "default" : str18;
        this.srcIsAnimated = (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0 ? Boolean.FALSE : bool8;
        final int i10 = 1;
        this.playerSettings = l.a(new Function0(this) { // from class: n5.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ Attachment f14959e;

            {
                this.f14959e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                MediaPlayer.PlayerSettings playerSettings_delegate$lambda$0;
                MediaPlayer.PlayerSettings _init_$lambda$8;
                switch (i10) {
                    case 0:
                        playerSettings_delegate$lambda$0 = Attachment.playerSettings_delegate$lambda$0(this.f14959e);
                        return playerSettings_delegate$lambda$0;
                    default:
                        _init_$lambda$8 = Attachment._init_$lambda$8(this.f14959e);
                        return _init_$lambda$8;
                }
            }
        });
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 0) {
            try {
                str21 = this.waveform;
            } catch (Exception unused) {
            }
            if (str21 != null) {
                bArr2 = Base64.decode(str21, 0);
                this.waveformByteArray = bArr2;
            }
            bArr2 = null;
            this.waveformByteArray = bArr2;
        } else {
            this.waveformByteArray = bArr;
        }
        if ((i6 & RecyclerView.ItemAnimator.FLAG_MOVED) == 0) {
            str22 = this.spoiler;
            if (str22 == null || StringsKt.K(str22)) {
                str22 = null;
            }
        } else {
            str22 = str19;
        }
        this.spoilerOrNull = str22;
        if ((i6 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
            String str24 = this.obscureDescription;
            if (str24 != null && !StringsKt.K(str24)) {
                str23 = str24;
            }
            this.obscureOrNull = str23;
        } else {
            this.obscureOrNull = str20;
        }
        this.proxyWidth = (i6 & 8192) == 0 ? getProxyUrlQueryParam("width") : num12;
        this.proxyHeight = (i6 & 16384) == 0 ? getProxyUrlQueryParam("height") : num13;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final MediaPlayer.PlayerSettings _init_$lambda$8(Attachment attachment) {
        Integer num = attachment.mediaViewerMinBufferMs;
        int intValue = num != null ? num.intValue() : MediaPlayer.INSTANCE.getDefaultSettings().getMinBufferMs();
        Integer num2 = attachment.mediaViewerMaxBufferMs;
        int intValue2 = num2 != null ? num2.intValue() : MediaPlayer.INSTANCE.getDefaultSettings().getMaxBufferMs();
        Integer num3 = attachment.mediaViewerBufferForPlaybackMs;
        int intValue3 = num3 != null ? num3.intValue() : MediaPlayer.INSTANCE.getDefaultSettings().getBufferForPlaybackMs();
        Integer num4 = attachment.mediaViewerBufferForPlaybackAfterRebufferMs;
        int intValue4 = num4 != null ? num4.intValue() : MediaPlayer.INSTANCE.getDefaultSettings().getBufferForPlaybackAfterRebufferMs();
        Boolean bool = attachment.mediaViewerEnableDecoderFallback;
        boolean booleanValue = bool != null ? bool.booleanValue() : MediaPlayer.INSTANCE.getDefaultSettings().getEnableDecoderFallback();
        Boolean bool2 = attachment.mediaViewerEnableAsyncBufferQueueing;
        boolean booleanValue2 = bool2 != null ? bool2.booleanValue() : MediaPlayer.INSTANCE.getDefaultSettings().getEnableAsyncBufferQueueing();
        HttpEngine.Companion companion = HttpEngine.INSTANCE;
        String str = attachment.mediaViewerHttpEngine;
        if (str == null) {
            str = "default";
        }
        return new MediaPlayer.PlayerSettings(intValue, intValue2, intValue3, intValue4, booleanValue, booleanValue2, companion.fromString(str));
    }

    /* renamed from: component24, reason: from getter */
    private final String getAttachmentTagIconType() {
        return this.attachmentTagIconType;
    }

    /* renamed from: component25, reason: from getter */
    private final String getAttachmentType() {
        return this.attachmentType;
    }

    /* renamed from: component33, reason: from getter */
    private final String getWaveform() {
        return this.waveform;
    }

    /* renamed from: component6, reason: from getter */
    private final Integer getSourceWidth() {
        return this.sourceWidth;
    }

    /* renamed from: component7, reason: from getter */
    private final Integer getSourceHeight() {
        return this.sourceHeight;
    }

    private final Integer getProxyUrlQueryParam(String paramName) {
        Object i5;
        try {
            q qVar = Result.f13476e;
            String value = new UrlQuerySanitizer(this.url).getValue(paramName);
            i5 = value != null ? StringsKt.toIntOrNull(value) : null;
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = b.i(th2);
        }
        return (Integer) (i5 instanceof r ? null : i5);
    }

    private static /* synthetic */ void getSourceHeight$annotations() {
    }

    private static /* synthetic */ void getSourceWidth$annotations() {
    }

    private final boolean hasDimensions() {
        return getWidth() > 0 && getHeight() > 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final MediaPlayer.PlayerSettings playerSettings_delegate$lambda$0(Attachment attachment) {
        Integer num = attachment.mediaViewerMinBufferMs;
        int intValue = num != null ? num.intValue() : MediaPlayer.INSTANCE.getDefaultSettings().getMinBufferMs();
        Integer num2 = attachment.mediaViewerMaxBufferMs;
        int intValue2 = num2 != null ? num2.intValue() : MediaPlayer.INSTANCE.getDefaultSettings().getMaxBufferMs();
        Integer num3 = attachment.mediaViewerBufferForPlaybackMs;
        int intValue3 = num3 != null ? num3.intValue() : MediaPlayer.INSTANCE.getDefaultSettings().getBufferForPlaybackMs();
        Integer num4 = attachment.mediaViewerBufferForPlaybackAfterRebufferMs;
        int intValue4 = num4 != null ? num4.intValue() : MediaPlayer.INSTANCE.getDefaultSettings().getBufferForPlaybackAfterRebufferMs();
        Boolean bool = attachment.mediaViewerEnableDecoderFallback;
        boolean booleanValue = bool != null ? bool.booleanValue() : MediaPlayer.INSTANCE.getDefaultSettings().getEnableDecoderFallback();
        Boolean bool2 = attachment.mediaViewerEnableAsyncBufferQueueing;
        boolean booleanValue2 = bool2 != null ? bool2.booleanValue() : MediaPlayer.INSTANCE.getDefaultSettings().getEnableAsyncBufferQueueing();
        HttpEngine.Companion companion = HttpEngine.INSTANCE;
        String str = attachment.mediaViewerHttpEngine;
        if (str == null) {
            str = "default";
        }
        return new MediaPlayer.PlayerSettings(intValue, intValue2, intValue3, intValue4, booleanValue, booleanValue2, companion.fromString(str));
    }

    private final boolean shouldShowImages() {
        Integer num = this.sourceWidth;
        if ((num != null ? num.intValue() : 0) > 0) {
            Integer num2 = this.sourceHeight;
            if ((num2 != null ? num2.intValue() : 0) > 0) {
                return true;
            }
        }
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:161:0x0338, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r2, r0) != false) goto L242;
     */
    /* JADX WARN: Code restructure failed: missing block: B:169:0x035d, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r1, r2) == false) goto L252;
     */
    /* JADX WARN: Code restructure failed: missing block: B:178:0x0385, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r1, r3) == false) goto L264;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final /* synthetic */ void write$Self$chat_release(Attachment self, CompositeEncoder output, SerialDescriptor serialDesc) {
        byte[] bArr;
        String str;
        if (output.I(serialDesc, 0) || self.id != null) {
            output.z(serialDesc, 0, v1.a, self.id);
        }
        output.y(serialDesc, 1, self.url);
        if (output.I(serialDesc, 2) || self.videoUrl != null) {
            output.z(serialDesc, 2, v1.a, self.videoUrl);
        }
        output.y(serialDesc, 3, self.filename);
        output.y(serialDesc, 4, self.size);
        if (output.I(serialDesc, 5) || self.sourceWidth != null) {
            output.z(serialDesc, 5, o0.a, self.sourceWidth);
        }
        if (output.I(serialDesc, 6) || self.sourceHeight != null) {
            output.z(serialDesc, 6, o0.a, self.sourceHeight);
        }
        output.x(serialDesc, 7, self.isSpoiler);
        if (output.I(serialDesc, 8) || self.spoiler != null) {
            output.z(serialDesc, 8, v1.a, self.spoiler);
        }
        if (output.I(serialDesc, 9) || self.description != null) {
            output.z(serialDesc, 9, v1.a, self.description);
        }
        if (output.I(serialDesc, 10) || self.hint != null) {
            output.z(serialDesc, 10, v1.a, self.hint);
        }
        if (output.I(serialDesc, 11) || self.role != null) {
            output.z(serialDesc, 11, v1.a, self.role);
        }
        if (output.I(serialDesc, 12) || self.showDescription) {
            output.x(serialDesc, 12, self.showDescription);
        }
        if (output.I(serialDesc, 13) || self.progress != null) {
            output.z(serialDesc, 13, o0.a, self.progress);
        }
        if (output.I(serialDesc, 14) || self.uploaderId != null) {
            output.z(serialDesc, 14, v1.a, self.uploaderId);
        }
        if (output.I(serialDesc, 15) || self.uploaderItemId != null) {
            output.z(serialDesc, 15, v1.a, self.uploaderItemId);
        }
        if (output.I(serialDesc, 16) || self.placeholder != null) {
            output.z(serialDesc, 16, v1.a, self.placeholder);
        }
        if (output.I(serialDesc, 17) || self.placeholderVersion != null) {
            output.z(serialDesc, 17, o0.a, self.placeholderVersion);
        }
        if (output.I(serialDesc, 18) || self.backgroundColor != null) {
            output.z(serialDesc, 18, o0.a, self.backgroundColor);
        }
        if (output.I(serialDesc, 19) || self.isSuspiciousDownload) {
            output.x(serialDesc, 19, self.isSuspiciousDownload);
        }
        if (output.I(serialDesc, 20) || self.attachmentTagText != null) {
            output.z(serialDesc, 20, v1.a, self.attachmentTagText);
        }
        if (output.I(serialDesc, 21) || self.attachmentTagBackgroundColor != null) {
            output.z(serialDesc, 21, o0.a, self.attachmentTagBackgroundColor);
        }
        if (output.I(serialDesc, 22) || self.attachmentTagTextColor != null) {
            output.z(serialDesc, 22, o0.a, self.attachmentTagTextColor);
        }
        if (output.I(serialDesc, 23) || self.attachmentTagIconType != null) {
            output.z(serialDesc, 23, v1.a, self.attachmentTagIconType);
        }
        if (output.I(serialDesc, 24) || self.attachmentType != null) {
            output.z(serialDesc, 24, v1.a, self.attachmentType);
        }
        if (output.I(serialDesc, 25) || self.obscure != null) {
            output.z(serialDesc, 25, g.a, self.obscure);
        }
        if (output.I(serialDesc, 26) || self.obscureDescription != null) {
            output.z(serialDesc, 26, v1.a, self.obscureDescription);
        }
        if (output.I(serialDesc, 27) || self.obscureAwaitingScan != null) {
            output.z(serialDesc, 27, g.a, self.obscureAwaitingScan);
        }
        if (output.I(serialDesc, 28) || self.obscureHideControls != null) {
            output.z(serialDesc, 28, g.a, self.obscureHideControls);
        }
        if (output.I(serialDesc, 29) || self.obscureIsOpaque != null) {
            output.z(serialDesc, 29, g.a, self.obscureIsOpaque);
        }
        if (output.I(serialDesc, 30) || self.verifyAge != null) {
            output.z(serialDesc, 30, g.a, self.verifyAge);
        }
        if (output.I(serialDesc, 31) || self.durationSecs != null) {
            output.z(serialDesc, 31, g0.a, self.durationSecs);
        }
        if (output.I(serialDesc, 32) || self.waveform != null) {
            output.z(serialDesc, 32, v1.a, self.waveform);
        }
        if (output.I(serialDesc, 33) || !self.isAnimated) {
            output.x(serialDesc, 33, self.isAnimated);
        }
        if (output.I(serialDesc, 34) || self.mediaViewerBufferForPlaybackMs != null) {
            output.z(serialDesc, 34, o0.a, self.mediaViewerBufferForPlaybackMs);
        }
        if (output.I(serialDesc, 35) || self.mediaViewerBufferForPlaybackAfterRebufferMs != null) {
            output.z(serialDesc, 35, o0.a, self.mediaViewerBufferForPlaybackAfterRebufferMs);
        }
        if (output.I(serialDesc, 36) || self.mediaViewerMinBufferMs != null) {
            output.z(serialDesc, 36, o0.a, self.mediaViewerMinBufferMs);
        }
        if (output.I(serialDesc, 37) || self.mediaViewerMaxBufferMs != null) {
            output.z(serialDesc, 37, o0.a, self.mediaViewerMaxBufferMs);
        }
        if (output.I(serialDesc, 38) || !Intrinsics.areEqual(self.mediaViewerEnableDecoderFallback, Boolean.FALSE)) {
            output.z(serialDesc, 38, g.a, self.mediaViewerEnableDecoderFallback);
        }
        if (output.I(serialDesc, 39) || !Intrinsics.areEqual(self.mediaViewerEnableAsyncBufferQueueing, Boolean.TRUE)) {
            output.z(serialDesc, 39, g.a, self.mediaViewerEnableAsyncBufferQueueing);
        }
        if (output.I(serialDesc, 40) || !Intrinsics.areEqual(self.mediaViewerHttpEngine, "default")) {
            output.z(serialDesc, 40, v1.a, self.mediaViewerHttpEngine);
        }
        if (output.I(serialDesc, 41) || !Intrinsics.areEqual(self.srcIsAnimated, Boolean.FALSE)) {
            output.z(serialDesc, 41, g.a, self.srcIsAnimated);
        }
        String str2 = null;
        if (!output.I(serialDesc, 42)) {
            byte[] bArr2 = self.waveformByteArray;
            try {
                str = self.waveform;
            } catch (Exception unused) {
            }
            if (str != null) {
                bArr = Base64.decode(str, 0);
            }
            bArr = null;
        }
        output.z(serialDesc, 42, i.f3193c, self.waveformByteArray);
        if (!output.I(serialDesc, 43)) {
            String spoilerOrNull = self.getSpoilerOrNull();
            String str3 = self.spoiler;
            if (str3 == null || StringsKt.K(str3)) {
                str3 = null;
            }
        }
        output.z(serialDesc, 43, v1.a, self.getSpoilerOrNull());
        if (!output.I(serialDesc, 44)) {
            String obscureOrNull = self.getObscureOrNull();
            String str4 = self.obscureDescription;
            if (str4 != null && !StringsKt.K(str4)) {
                str2 = str4;
            }
        }
        output.z(serialDesc, 44, v1.a, self.getObscureOrNull());
        if (output.I(serialDesc, 45) || !Intrinsics.areEqual(self.proxyWidth, self.getProxyUrlQueryParam("width"))) {
            output.z(serialDesc, 45, o0.a, self.proxyWidth);
        }
        if (!output.I(serialDesc, 46) && Intrinsics.areEqual(self.proxyHeight, self.getProxyUrlQueryParam("height"))) {
            return;
        }
        output.z(serialDesc, 46, o0.a, self.proxyHeight);
    }

    /* renamed from: component1, reason: from getter */
    public final String getId() {
        return this.id;
    }

    /* renamed from: component10, reason: from getter */
    public final String getDescription() {
        return this.description;
    }

    /* renamed from: component11, reason: from getter */
    public final String getHint() {
        return this.hint;
    }

    /* renamed from: component12, reason: from getter */
    public final String getRole() {
        return this.role;
    }

    /* renamed from: component13, reason: from getter */
    public final boolean getShowDescription() {
        return this.showDescription;
    }

    /* renamed from: component14, reason: from getter */
    public final Integer getProgress() {
        return this.progress;
    }

    /* renamed from: component15, reason: from getter */
    public final String getUploaderId() {
        return this.uploaderId;
    }

    /* renamed from: component16, reason: from getter */
    public final String getUploaderItemId() {
        return this.uploaderItemId;
    }

    /* renamed from: component17, reason: from getter */
    public final String getPlaceholder() {
        return this.placeholder;
    }

    /* renamed from: component18, reason: from getter */
    public final Integer getPlaceholderVersion() {
        return this.placeholderVersion;
    }

    /* renamed from: component19, reason: from getter */
    public final Integer getBackgroundColor() {
        return this.backgroundColor;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getUrl() {
        return this.url;
    }

    /* renamed from: component20, reason: from getter */
    public final boolean getIsSuspiciousDownload() {
        return this.isSuspiciousDownload;
    }

    /* renamed from: component21, reason: from getter */
    public final String getAttachmentTagText() {
        return this.attachmentTagText;
    }

    /* renamed from: component22, reason: from getter */
    public final Integer getAttachmentTagBackgroundColor() {
        return this.attachmentTagBackgroundColor;
    }

    /* renamed from: component23, reason: from getter */
    public final Integer getAttachmentTagTextColor() {
        return this.attachmentTagTextColor;
    }

    /* renamed from: component26, reason: from getter */
    public final Boolean getObscure() {
        return this.obscure;
    }

    /* renamed from: component27, reason: from getter */
    public final String getObscureDescription() {
        return this.obscureDescription;
    }

    /* renamed from: component28, reason: from getter */
    public final Boolean getObscureAwaitingScan() {
        return this.obscureAwaitingScan;
    }

    /* renamed from: component29, reason: from getter */
    public final Boolean getObscureHideControls() {
        return this.obscureHideControls;
    }

    /* renamed from: component3, reason: from getter */
    public final String getVideoUrl() {
        return this.videoUrl;
    }

    /* renamed from: component30, reason: from getter */
    public final Boolean getObscureIsOpaque() {
        return this.obscureIsOpaque;
    }

    /* renamed from: component31, reason: from getter */
    public final Boolean getVerifyAge() {
        return this.verifyAge;
    }

    /* renamed from: component32, reason: from getter */
    public final Float getDurationSecs() {
        return this.durationSecs;
    }

    /* renamed from: component34, reason: from getter */
    public final boolean getIsAnimated() {
        return this.isAnimated;
    }

    /* renamed from: component35, reason: from getter */
    public final Integer getMediaViewerBufferForPlaybackMs() {
        return this.mediaViewerBufferForPlaybackMs;
    }

    /* renamed from: component36, reason: from getter */
    public final Integer getMediaViewerBufferForPlaybackAfterRebufferMs() {
        return this.mediaViewerBufferForPlaybackAfterRebufferMs;
    }

    /* renamed from: component37, reason: from getter */
    public final Integer getMediaViewerMinBufferMs() {
        return this.mediaViewerMinBufferMs;
    }

    /* renamed from: component38, reason: from getter */
    public final Integer getMediaViewerMaxBufferMs() {
        return this.mediaViewerMaxBufferMs;
    }

    /* renamed from: component39, reason: from getter */
    public final Boolean getMediaViewerEnableDecoderFallback() {
        return this.mediaViewerEnableDecoderFallback;
    }

    @NotNull
    /* renamed from: component4, reason: from getter */
    public final String getFilename() {
        return this.filename;
    }

    /* renamed from: component40, reason: from getter */
    public final Boolean getMediaViewerEnableAsyncBufferQueueing() {
        return this.mediaViewerEnableAsyncBufferQueueing;
    }

    /* renamed from: component41, reason: from getter */
    public final String getMediaViewerHttpEngine() {
        return this.mediaViewerHttpEngine;
    }

    /* renamed from: component42, reason: from getter */
    public final Boolean getSrcIsAnimated() {
        return this.srcIsAnimated;
    }

    @NotNull
    /* renamed from: component5, reason: from getter */
    public final String getSize() {
        return this.size;
    }

    /* renamed from: component8, reason: from getter */
    public final boolean getIsSpoiler() {
        return this.isSpoiler;
    }

    /* renamed from: component9, reason: from getter */
    public final String getSpoiler() {
        return this.spoiler;
    }

    @NotNull
    public final Attachment copy(String id2, @NotNull String url, String videoUrl, @NotNull String filename, @NotNull String size, Integer sourceWidth, Integer sourceHeight, boolean isSpoiler, String spoiler, String description, String hint, String role, boolean showDescription, Integer progress, String uploaderId, String uploaderItemId, String placeholder, Integer placeholderVersion, Integer backgroundColor, boolean isSuspiciousDownload, String attachmentTagText, Integer attachmentTagBackgroundColor, Integer attachmentTagTextColor, String attachmentTagIconType, String attachmentType, Boolean obscure, String obscureDescription, Boolean obscureAwaitingScan, Boolean obscureHideControls, Boolean obscureIsOpaque, Boolean verifyAge, Float durationSecs, String waveform, boolean isAnimated, Integer mediaViewerBufferForPlaybackMs, Integer mediaViewerBufferForPlaybackAfterRebufferMs, Integer mediaViewerMinBufferMs, Integer mediaViewerMaxBufferMs, Boolean mediaViewerEnableDecoderFallback, Boolean mediaViewerEnableAsyncBufferQueueing, String mediaViewerHttpEngine, Boolean srcIsAnimated) {
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(filename, "filename");
        Intrinsics.checkNotNullParameter(size, "size");
        return new Attachment(id2, url, videoUrl, filename, size, sourceWidth, sourceHeight, isSpoiler, spoiler, description, hint, role, showDescription, progress, uploaderId, uploaderItemId, placeholder, placeholderVersion, backgroundColor, isSuspiciousDownload, attachmentTagText, attachmentTagBackgroundColor, attachmentTagTextColor, attachmentTagIconType, attachmentType, obscure, obscureDescription, obscureAwaitingScan, obscureHideControls, obscureIsOpaque, verifyAge, durationSecs, waveform, isAnimated, mediaViewerBufferForPlaybackMs, mediaViewerBufferForPlaybackAfterRebufferMs, mediaViewerMinBufferMs, mediaViewerMaxBufferMs, mediaViewerEnableDecoderFallback, mediaViewerEnableAsyncBufferQueueing, mediaViewerHttpEngine, srcIsAnimated);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof Attachment)) {
            return false;
        }
        Attachment attachment = (Attachment) other;
        return Intrinsics.areEqual(this.id, attachment.id) && Intrinsics.areEqual(this.url, attachment.url) && Intrinsics.areEqual(this.videoUrl, attachment.videoUrl) && Intrinsics.areEqual(this.filename, attachment.filename) && Intrinsics.areEqual(this.size, attachment.size) && Intrinsics.areEqual(this.sourceWidth, attachment.sourceWidth) && Intrinsics.areEqual(this.sourceHeight, attachment.sourceHeight) && this.isSpoiler == attachment.isSpoiler && Intrinsics.areEqual(this.spoiler, attachment.spoiler) && Intrinsics.areEqual(this.description, attachment.description) && Intrinsics.areEqual(this.hint, attachment.hint) && Intrinsics.areEqual(this.role, attachment.role) && this.showDescription == attachment.showDescription && Intrinsics.areEqual(this.progress, attachment.progress) && Intrinsics.areEqual(this.uploaderId, attachment.uploaderId) && Intrinsics.areEqual(this.uploaderItemId, attachment.uploaderItemId) && Intrinsics.areEqual(this.placeholder, attachment.placeholder) && Intrinsics.areEqual(this.placeholderVersion, attachment.placeholderVersion) && Intrinsics.areEqual(this.backgroundColor, attachment.backgroundColor) && this.isSuspiciousDownload == attachment.isSuspiciousDownload && Intrinsics.areEqual(this.attachmentTagText, attachment.attachmentTagText) && Intrinsics.areEqual(this.attachmentTagBackgroundColor, attachment.attachmentTagBackgroundColor) && Intrinsics.areEqual(this.attachmentTagTextColor, attachment.attachmentTagTextColor) && Intrinsics.areEqual(this.attachmentTagIconType, attachment.attachmentTagIconType) && Intrinsics.areEqual(this.attachmentType, attachment.attachmentType) && Intrinsics.areEqual(this.obscure, attachment.obscure) && Intrinsics.areEqual(this.obscureDescription, attachment.obscureDescription) && Intrinsics.areEqual(this.obscureAwaitingScan, attachment.obscureAwaitingScan) && Intrinsics.areEqual(this.obscureHideControls, attachment.obscureHideControls) && Intrinsics.areEqual(this.obscureIsOpaque, attachment.obscureIsOpaque) && Intrinsics.areEqual(this.verifyAge, attachment.verifyAge) && Intrinsics.areEqual((Object) this.durationSecs, (Object) attachment.durationSecs) && Intrinsics.areEqual(this.waveform, attachment.waveform) && this.isAnimated == attachment.isAnimated && Intrinsics.areEqual(this.mediaViewerBufferForPlaybackMs, attachment.mediaViewerBufferForPlaybackMs) && Intrinsics.areEqual(this.mediaViewerBufferForPlaybackAfterRebufferMs, attachment.mediaViewerBufferForPlaybackAfterRebufferMs) && Intrinsics.areEqual(this.mediaViewerMinBufferMs, attachment.mediaViewerMinBufferMs) && Intrinsics.areEqual(this.mediaViewerMaxBufferMs, attachment.mediaViewerMaxBufferMs) && Intrinsics.areEqual(this.mediaViewerEnableDecoderFallback, attachment.mediaViewerEnableDecoderFallback) && Intrinsics.areEqual(this.mediaViewerEnableAsyncBufferQueueing, attachment.mediaViewerEnableAsyncBufferQueueing) && Intrinsics.areEqual(this.mediaViewerHttpEngine, attachment.mediaViewerHttpEngine) && Intrinsics.areEqual(this.srcIsAnimated, attachment.srcIsAnimated);
    }

    public final Integer getAttachmentTagBackgroundColor() {
        return this.attachmentTagBackgroundColor;
    }

    public final ReactAsset getAttachmentTagIcon() {
        if (Intrinsics.areEqual(this.attachmentTagIconType, "clip")) {
            return ReactAsset.ClipsIcon;
        }
        return null;
    }

    public final String getAttachmentTagText() {
        return this.attachmentTagText;
    }

    public final Integer getAttachmentTagTextColor() {
        return this.attachmentTagTextColor;
    }

    public final Integer getBackgroundColor() {
        return this.backgroundColor;
    }

    public final String getDescription() {
        return this.description;
    }

    public final Float getDurationSecs() {
        return this.durationSecs;
    }

    @NotNull
    public final String getFilename() {
        return this.filename;
    }

    public final int getHeight() {
        Integer num = this.proxyHeight;
        if (num != null) {
            return num.intValue();
        }
        Integer num2 = this.sourceHeight;
        if (num2 != null) {
            return num2.intValue();
        }
        return 0;
    }

    public final String getHint() {
        return this.hint;
    }

    public final String getId() {
        return this.id;
    }

    public final Integer getMediaViewerBufferForPlaybackAfterRebufferMs() {
        return this.mediaViewerBufferForPlaybackAfterRebufferMs;
    }

    public final Integer getMediaViewerBufferForPlaybackMs() {
        return this.mediaViewerBufferForPlaybackMs;
    }

    public final Boolean getMediaViewerEnableAsyncBufferQueueing() {
        return this.mediaViewerEnableAsyncBufferQueueing;
    }

    public final Boolean getMediaViewerEnableDecoderFallback() {
        return this.mediaViewerEnableDecoderFallback;
    }

    public final String getMediaViewerHttpEngine() {
        return this.mediaViewerHttpEngine;
    }

    public final Integer getMediaViewerMaxBufferMs() {
        return this.mediaViewerMaxBufferMs;
    }

    public final Integer getMediaViewerMinBufferMs() {
        return this.mediaViewerMinBufferMs;
    }

    public final Boolean getObscure() {
        return this.obscure;
    }

    public final Boolean getObscureAwaitingScan() {
        return this.obscureAwaitingScan;
    }

    public final String getObscureDescription() {
        return this.obscureDescription;
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

    public final String getPlaceholder() {
        return this.placeholder;
    }

    public final Integer getPlaceholderVersion() {
        return this.placeholderVersion;
    }

    @NotNull
    public final MediaPlayer.PlayerSettings getPlayerSettings() {
        return (MediaPlayer.PlayerSettings) this.playerSettings.getValue();
    }

    public final Integer getProgress() {
        return this.progress;
    }

    public final String getRole() {
        return this.role;
    }

    public final boolean getShowDescription() {
        return this.showDescription;
    }

    @NotNull
    public final String getSize() {
        return this.size;
    }

    public final String getSpoiler() {
        return this.spoiler;
    }

    @Override // com.discord.chat.bridge.spoiler.SpoilerableData
    public String getSpoilerOrNull() {
        return this.spoilerOrNull;
    }

    public final Boolean getSrcIsAnimated() {
        return this.srcIsAnimated;
    }

    public final String getUploaderId() {
        return this.uploaderId;
    }

    public final String getUploaderItemId() {
        return this.uploaderItemId;
    }

    @NotNull
    public final String getUrl() {
        return this.url;
    }

    public final Boolean getVerifyAge() {
        return this.verifyAge;
    }

    public final String getVideoUrl() {
        return this.videoUrl;
    }

    public final byte[] getWaveformByteArray() {
        return this.waveformByteArray;
    }

    public final int getWidth() {
        Integer num = this.proxyWidth;
        if (num != null) {
            return num.intValue();
        }
        Integer num2 = this.sourceWidth;
        if (num2 != null) {
            return num2.intValue();
        }
        return 0;
    }

    public int hashCode() {
        String str = this.id;
        int d6 = a3.e.d((str == null ? 0 : str.hashCode()) * 31, 31, this.url);
        String str2 = this.videoUrl;
        int d7 = a3.e.d(a3.e.d((d6 + (str2 == null ? 0 : str2.hashCode())) * 31, 31, this.filename), 31, this.size);
        Integer num = this.sourceWidth;
        int hashCode = (d7 + (num == null ? 0 : num.hashCode())) * 31;
        Integer num2 = this.sourceHeight;
        int d8 = d.d((hashCode + (num2 == null ? 0 : num2.hashCode())) * 31, 31, this.isSpoiler);
        String str3 = this.spoiler;
        int hashCode2 = (d8 + (str3 == null ? 0 : str3.hashCode())) * 31;
        String str4 = this.description;
        int hashCode3 = (hashCode2 + (str4 == null ? 0 : str4.hashCode())) * 31;
        String str5 = this.hint;
        int hashCode4 = (hashCode3 + (str5 == null ? 0 : str5.hashCode())) * 31;
        String str6 = this.role;
        int d10 = d.d((hashCode4 + (str6 == null ? 0 : str6.hashCode())) * 31, 31, this.showDescription);
        Integer num3 = this.progress;
        int hashCode5 = (d10 + (num3 == null ? 0 : num3.hashCode())) * 31;
        String str7 = this.uploaderId;
        int hashCode6 = (hashCode5 + (str7 == null ? 0 : str7.hashCode())) * 31;
        String str8 = this.uploaderItemId;
        int hashCode7 = (hashCode6 + (str8 == null ? 0 : str8.hashCode())) * 31;
        String str9 = this.placeholder;
        int hashCode8 = (hashCode7 + (str9 == null ? 0 : str9.hashCode())) * 31;
        Integer num4 = this.placeholderVersion;
        int hashCode9 = (hashCode8 + (num4 == null ? 0 : num4.hashCode())) * 31;
        Integer num5 = this.backgroundColor;
        int d11 = d.d((hashCode9 + (num5 == null ? 0 : num5.hashCode())) * 31, 31, this.isSuspiciousDownload);
        String str10 = this.attachmentTagText;
        int hashCode10 = (d11 + (str10 == null ? 0 : str10.hashCode())) * 31;
        Integer num6 = this.attachmentTagBackgroundColor;
        int hashCode11 = (hashCode10 + (num6 == null ? 0 : num6.hashCode())) * 31;
        Integer num7 = this.attachmentTagTextColor;
        int hashCode12 = (hashCode11 + (num7 == null ? 0 : num7.hashCode())) * 31;
        String str11 = this.attachmentTagIconType;
        int hashCode13 = (hashCode12 + (str11 == null ? 0 : str11.hashCode())) * 31;
        String str12 = this.attachmentType;
        int hashCode14 = (hashCode13 + (str12 == null ? 0 : str12.hashCode())) * 31;
        Boolean bool = this.obscure;
        int hashCode15 = (hashCode14 + (bool == null ? 0 : bool.hashCode())) * 31;
        String str13 = this.obscureDescription;
        int hashCode16 = (hashCode15 + (str13 == null ? 0 : str13.hashCode())) * 31;
        Boolean bool2 = this.obscureAwaitingScan;
        int hashCode17 = (hashCode16 + (bool2 == null ? 0 : bool2.hashCode())) * 31;
        Boolean bool3 = this.obscureHideControls;
        int hashCode18 = (hashCode17 + (bool3 == null ? 0 : bool3.hashCode())) * 31;
        Boolean bool4 = this.obscureIsOpaque;
        int hashCode19 = (hashCode18 + (bool4 == null ? 0 : bool4.hashCode())) * 31;
        Boolean bool5 = this.verifyAge;
        int hashCode20 = (hashCode19 + (bool5 == null ? 0 : bool5.hashCode())) * 31;
        Float f2 = this.durationSecs;
        int hashCode21 = (hashCode20 + (f2 == null ? 0 : f2.hashCode())) * 31;
        String str14 = this.waveform;
        int d12 = d.d((hashCode21 + (str14 == null ? 0 : str14.hashCode())) * 31, 31, this.isAnimated);
        Integer num8 = this.mediaViewerBufferForPlaybackMs;
        int hashCode22 = (d12 + (num8 == null ? 0 : num8.hashCode())) * 31;
        Integer num9 = this.mediaViewerBufferForPlaybackAfterRebufferMs;
        int hashCode23 = (hashCode22 + (num9 == null ? 0 : num9.hashCode())) * 31;
        Integer num10 = this.mediaViewerMinBufferMs;
        int hashCode24 = (hashCode23 + (num10 == null ? 0 : num10.hashCode())) * 31;
        Integer num11 = this.mediaViewerMaxBufferMs;
        int hashCode25 = (hashCode24 + (num11 == null ? 0 : num11.hashCode())) * 31;
        Boolean bool6 = this.mediaViewerEnableDecoderFallback;
        int hashCode26 = (hashCode25 + (bool6 == null ? 0 : bool6.hashCode())) * 31;
        Boolean bool7 = this.mediaViewerEnableAsyncBufferQueueing;
        int hashCode27 = (hashCode26 + (bool7 == null ? 0 : bool7.hashCode())) * 31;
        String str15 = this.mediaViewerHttpEngine;
        int hashCode28 = (hashCode27 + (str15 == null ? 0 : str15.hashCode())) * 31;
        Boolean bool8 = this.srcIsAnimated;
        return hashCode28 + (bool8 != null ? bool8.hashCode() : 0);
    }

    public final boolean isAnimated() {
        return this.isAnimated;
    }

    public final boolean isSpoiler() {
        return this.isSpoiler;
    }

    public final boolean isSuspiciousDownload() {
        return this.isSuspiciousDownload;
    }

    @NotNull
    public String toString() {
        String str = this.id;
        String str2 = this.url;
        String str3 = this.videoUrl;
        String str4 = this.filename;
        String str5 = this.size;
        Integer num = this.sourceWidth;
        Integer num2 = this.sourceHeight;
        boolean z5 = this.isSpoiler;
        String str6 = this.spoiler;
        String str7 = this.description;
        String str8 = this.hint;
        String str9 = this.role;
        boolean z6 = this.showDescription;
        Integer num3 = this.progress;
        String str10 = this.uploaderId;
        String str11 = this.uploaderItemId;
        String str12 = this.placeholder;
        Integer num4 = this.placeholderVersion;
        Integer num5 = this.backgroundColor;
        boolean z7 = this.isSuspiciousDownload;
        String str13 = this.attachmentTagText;
        Integer num6 = this.attachmentTagBackgroundColor;
        Integer num7 = this.attachmentTagTextColor;
        String str14 = this.attachmentTagIconType;
        String str15 = this.attachmentType;
        Boolean bool = this.obscure;
        String str16 = this.obscureDescription;
        Boolean bool2 = this.obscureAwaitingScan;
        Boolean bool3 = this.obscureHideControls;
        Boolean bool4 = this.obscureIsOpaque;
        Boolean bool5 = this.verifyAge;
        Float f2 = this.durationSecs;
        String str17 = this.waveform;
        boolean z8 = this.isAnimated;
        Integer num8 = this.mediaViewerBufferForPlaybackMs;
        Integer num9 = this.mediaViewerBufferForPlaybackAfterRebufferMs;
        Integer num10 = this.mediaViewerMinBufferMs;
        Integer num11 = this.mediaViewerMaxBufferMs;
        Boolean bool6 = this.mediaViewerEnableDecoderFallback;
        Boolean bool7 = this.mediaViewerEnableAsyncBufferQueueing;
        String str18 = this.mediaViewerHttpEngine;
        Boolean bool8 = this.srcIsAnimated;
        StringBuilder t5 = a3.e.t("Attachment(id=", str, ", url=", str2, ", videoUrl=");
        a3.e.A(t5, str3, ", filename=", str4, ", size=");
        a.r(num, str5, ", sourceWidth=", ", sourceHeight=", t5);
        t5.append(num2);
        t5.append(", isSpoiler=");
        t5.append(z5);
        t5.append(", spoiler=");
        a3.e.A(t5, str6, ", description=", str7, ", hint=");
        a3.e.A(t5, str8, ", role=", str9, ", showDescription=");
        t5.append(z6);
        t5.append(", progress=");
        t5.append(num3);
        t5.append(", uploaderId=");
        a3.e.A(t5, str10, ", uploaderItemId=", str11, ", placeholder=");
        a.r(num4, str12, ", placeholderVersion=", ", backgroundColor=", t5);
        t5.append(num5);
        t5.append(", isSuspiciousDownload=");
        t5.append(z7);
        t5.append(", attachmentTagText=");
        a.r(num6, str13, ", attachmentTagBackgroundColor=", ", attachmentTagTextColor=", t5);
        d.r(num7, ", attachmentTagIconType=", str14, ", attachmentType=", t5);
        t5.append(str15);
        t5.append(", obscure=");
        t5.append(bool);
        t5.append(", obscureDescription=");
        t5.append(str16);
        t5.append(", obscureAwaitingScan=");
        t5.append(bool2);
        t5.append(", obscureHideControls=");
        t5.append(bool3);
        t5.append(", obscureIsOpaque=");
        t5.append(bool4);
        t5.append(", verifyAge=");
        t5.append(bool5);
        t5.append(", durationSecs=");
        t5.append(f2);
        t5.append(", waveform=");
        t5.append(str17);
        t5.append(", isAnimated=");
        t5.append(z8);
        t5.append(", mediaViewerBufferForPlaybackMs=");
        d.s(t5, num8, ", mediaViewerBufferForPlaybackAfterRebufferMs=", num9, ", mediaViewerMinBufferMs=");
        d.s(t5, num10, ", mediaViewerMaxBufferMs=", num11, ", mediaViewerEnableDecoderFallback=");
        t5.append(bool6);
        t5.append(", mediaViewerEnableAsyncBufferQueueing=");
        t5.append(bool7);
        t5.append(", mediaViewerHttpEngine=");
        t5.append(str18);
        t5.append(", srcIsAnimated=");
        t5.append(bool8);
        t5.append(")");
        return t5.toString();
    }

    @NotNull
    public final AttachmentType type() {
        return Intrinsics.areEqual(this.attachmentType, MediaStreamTrack.AUDIO_TRACK_KIND) ? AttachmentType.Audio : !shouldShowImages() ? AttachmentType.File : (Intrinsics.areEqual(this.attachmentType, "image") && hasDimensions()) ? AttachmentType.Image : (Intrinsics.areEqual(this.attachmentType, MediaStreamTrack.VIDEO_TRACK_KIND) && hasDimensions()) ? AttachmentType.Video : AttachmentType.File;
    }

    public Attachment(String str, @NotNull String url, String str2, @NotNull String filename, @NotNull String size, Integer num, Integer num2, boolean z5, String str3, String str4, String str5, String str6, boolean z6, Integer num3, String str7, String str8, String str9, Integer num4, Integer num5, boolean z7, String str10, Integer num6, Integer num7, String str11, String str12, Boolean bool, String str13, Boolean bool2, Boolean bool3, Boolean bool4, Boolean bool5, Float f2, String str14, boolean z8, Integer num8, Integer num9, Integer num10, Integer num11, Boolean bool6, Boolean bool7, String str15, Boolean bool8) {
        byte[] bArr;
        String str16;
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(filename, "filename");
        Intrinsics.checkNotNullParameter(size, "size");
        this.id = str;
        this.url = url;
        this.videoUrl = str2;
        this.filename = filename;
        this.size = size;
        this.sourceWidth = num;
        this.sourceHeight = num2;
        this.isSpoiler = z5;
        this.spoiler = str3;
        this.description = str4;
        this.hint = str5;
        this.role = str6;
        this.showDescription = z6;
        this.progress = num3;
        this.uploaderId = str7;
        this.uploaderItemId = str8;
        this.placeholder = str9;
        this.placeholderVersion = num4;
        this.backgroundColor = num5;
        this.isSuspiciousDownload = z7;
        this.attachmentTagText = str10;
        this.attachmentTagBackgroundColor = num6;
        this.attachmentTagTextColor = num7;
        this.attachmentTagIconType = str11;
        this.attachmentType = str12;
        this.obscure = bool;
        this.obscureDescription = str13;
        this.obscureAwaitingScan = bool2;
        this.obscureHideControls = bool3;
        this.obscureIsOpaque = bool4;
        this.verifyAge = bool5;
        this.durationSecs = f2;
        this.waveform = str14;
        this.isAnimated = z8;
        this.mediaViewerBufferForPlaybackMs = num8;
        this.mediaViewerBufferForPlaybackAfterRebufferMs = num9;
        this.mediaViewerMinBufferMs = num10;
        this.mediaViewerMaxBufferMs = num11;
        this.mediaViewerEnableDecoderFallback = bool6;
        this.mediaViewerEnableAsyncBufferQueueing = bool7;
        this.mediaViewerHttpEngine = str15;
        this.srcIsAnimated = bool8;
        final int i5 = 0;
        this.playerSettings = l.a(new Function0(this) { // from class: n5.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ Attachment f14959e;

            {
                this.f14959e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                MediaPlayer.PlayerSettings playerSettings_delegate$lambda$0;
                MediaPlayer.PlayerSettings _init_$lambda$8;
                switch (i5) {
                    case 0:
                        playerSettings_delegate$lambda$0 = Attachment.playerSettings_delegate$lambda$0(this.f14959e);
                        return playerSettings_delegate$lambda$0;
                    default:
                        _init_$lambda$8 = Attachment._init_$lambda$8(this.f14959e);
                        return _init_$lambda$8;
                }
            }
        });
        String str17 = null;
        if (str14 != null) {
            try {
                bArr = Base64.decode(str14, 0);
            } catch (Exception unused) {
            }
            this.waveformByteArray = bArr;
            String str18 = this.spoiler;
            this.spoilerOrNull = (str18 != null || StringsKt.K(str18)) ? null : str18;
            str16 = this.obscureDescription;
            if (str16 != null && !StringsKt.K(str16)) {
                str17 = str16;
            }
            this.obscureOrNull = str17;
            this.proxyWidth = getProxyUrlQueryParam("width");
            this.proxyHeight = getProxyUrlQueryParam("height");
        }
        bArr = null;
        this.waveformByteArray = bArr;
        String str182 = this.spoiler;
        this.spoilerOrNull = (str182 != null || StringsKt.K(str182)) ? null : str182;
        str16 = this.obscureDescription;
        if (str16 != null) {
            str17 = str16;
        }
        this.obscureOrNull = str17;
        this.proxyWidth = getProxyUrlQueryParam("width");
        this.proxyHeight = getProxyUrlQueryParam("height");
    }

    public /* synthetic */ Attachment(String str, String str2, String str3, String str4, String str5, Integer num, Integer num2, boolean z5, String str6, String str7, String str8, String str9, boolean z6, Integer num3, String str10, String str11, String str12, Integer num4, Integer num5, boolean z7, String str13, Integer num6, Integer num7, String str14, String str15, Boolean bool, String str16, Boolean bool2, Boolean bool3, Boolean bool4, Boolean bool5, Float f2, String str17, boolean z8, Integer num8, Integer num9, Integer num10, Integer num11, Boolean bool6, Boolean bool7, String str18, Boolean bool8, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? null : str, str2, (i5 & 4) != 0 ? null : str3, str4, str5, (i5 & 32) != 0 ? null : num, (i5 & 64) != 0 ? null : num2, z5, (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? null : str6, (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : str7, (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? null : str8, (i5 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? null : str9, (i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? false : z6, (i5 & 8192) != 0 ? null : num3, (i5 & 16384) != 0 ? null : str10, (32768 & i5) != 0 ? null : str11, (65536 & i5) != 0 ? null : str12, (131072 & i5) != 0 ? null : num4, (262144 & i5) != 0 ? null : num5, (524288 & i5) != 0 ? false : z7, (1048576 & i5) != 0 ? null : str13, (2097152 & i5) != 0 ? null : num6, (4194304 & i5) != 0 ? null : num7, (8388608 & i5) != 0 ? null : str14, (16777216 & i5) != 0 ? null : str15, (33554432 & i5) != 0 ? null : bool, (67108864 & i5) != 0 ? null : str16, (134217728 & i5) != 0 ? null : bool2, (268435456 & i5) != 0 ? null : bool3, (536870912 & i5) != 0 ? null : bool4, (1073741824 & i5) != 0 ? null : bool5, (i5 & Integer.MIN_VALUE) != 0 ? null : f2, (i6 & 1) != 0 ? null : str17, (i6 & 2) != 0 ? true : z8, (i6 & 4) != 0 ? null : num8, (i6 & 8) != 0 ? null : num9, (i6 & 16) != 0 ? null : num10, (i6 & 32) != 0 ? null : num11, (i6 & 64) != 0 ? Boolean.FALSE : bool6, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? Boolean.TRUE : bool7, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? "default" : str18, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? Boolean.FALSE : bool8);
    }
}
