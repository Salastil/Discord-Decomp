package com.discord.media.engine;

import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.media.MediaCodecInfo;
import android.media.MediaCodecList;
import android.os.Build;
import android.util.Base64;
import com.discord.async_init.AsyncInitDispatcher;
import com.discord.crash_reporting.CrashReporting;
import com.discord.jank_stats.JankRecordStore;
import com.discord.logging.Log;
import com.discord.media.engine.types.Debug;
import com.discord.media.engine.types.NativeTypeExtensionsKt;
import com.discord.media.engine.video.screen_capture.ScreenCapturer;
import com.discord.media.engine.video.screen_capture.ThumbnailEmitter;
import com.discord.p000native.engine.AudioInputDeviceDescription;
import com.discord.p000native.engine.AudioOutputDeviceDescription;
import com.discord.p000native.engine.ConnectionInfo;
import com.discord.p000native.engine.NativeConnection;
import com.discord.p000native.engine.NativeEngine;
import com.discord.p000native.engine.VideoInputDeviceDescription;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.modules.appstate.AppStateModule;
import com.facebook.react.uimanager.ViewProps;
import java.io.ByteArrayOutputStream;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.collections.x;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.functions.Function4;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.CoroutineScope;
import nr.g0;
import org.jetbrains.annotations.NotNull;
import org.json.JSONArray;
import org.json.JSONObject;
import org.webrtc.MediaStreamTrack;
import org.webrtc.VideoFrame;

@Metadata(d1 = {"\u0000Ã\u0001\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0010\u0007\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0015\n\u0002\u0010 \n\u0002\u0010$\n\u0002\b\u0010\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0010\u0011\n\u0002\b\u0012\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\t\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0018\u0002\n\u0003\b\u0083\u0001\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\b\u0018\u0000 ¢\u00022\u00020\u0001:\u0004£\u0002¢\u0002B\u0019\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\b\b\u0002\u0010\u0005\u001a\u00020\u0004¢\u0006\u0004\b\u0006\u0010\u0007J\r\u0010\t\u001a\u00020\b¢\u0006\u0004\b\t\u0010\nJ#\u0010\u0010\u001a\u00020\b2\u0012\u0010\r\u001a\u000e\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0004\b\u000e\u0010\u000fJ)\u0010\u0016\u001a\u00020\b2\u0018\u0010\r\u001a\u0014\u0012\u0004\u0012\u00020\u0012\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\b0\u0011H\u0000¢\u0006\u0004\b\u0014\u0010\u0015J)\u0010\u0019\u001a\u00020\b2\u0018\u0010\r\u001a\u0014\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\b0\u0011H\u0000¢\u0006\u0004\b\u0018\u0010\u0015J!\u0010\u001e\u001a\u0004\u0018\u00010\b2\u0006\u0010\u001a\u001a\u00020\u00172\u0006\u0010\u001b\u001a\u00020\fH\u0000¢\u0006\u0004\b\u001c\u0010\u001dJ\u0017\u0010\"\u001a\u00020\b2\u0006\u0010\u001f\u001a\u00020\u0017H\u0000¢\u0006\u0004\b \u0010!J\u0017\u0010&\u001a\u00020\b2\u0006\u0010#\u001a\u00020\u0012H\u0000¢\u0006\u0004\b$\u0010%J\u0017\u0010(\u001a\u00020\b2\u0006\u0010#\u001a\u00020\u0012H\u0000¢\u0006\u0004\b'\u0010%J\u0017\u0010,\u001a\u00020\b2\u0006\u0010)\u001a\u00020\fH\u0000¢\u0006\u0004\b*\u0010+J5\u00101\u001a\u00020\b2$\u0010/\u001a \u0012\u0016\u0012\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00010.0-\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0004\b0\u0010\u000fJ\u0017\u00105\u001a\u00020\b2\u0006\u00102\u001a\u00020\u0013H\u0000¢\u0006\u0004\b3\u00104J\u0017\u00105\u001a\u00020\b2\u0006\u00102\u001a\u00020\u0017H\u0000¢\u0006\u0004\b3\u0010!J5\u00107\u001a\u00020\b2$\u0010/\u001a \u0012\u0016\u0012\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00010.0-\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0004\b6\u0010\u000fJ\u0017\u00109\u001a\u00020\b2\u0006\u00102\u001a\u00020\u0013H\u0000¢\u0006\u0004\b8\u00104J\u0017\u00109\u001a\u00020\b2\u0006\u00102\u001a\u00020\u0017H\u0000¢\u0006\u0004\b8\u0010!J5\u0010;\u001a\u00020\b2$\u0010/\u001a \u0012\u0016\u0012\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00010.0-\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0004\b:\u0010\u000fJ\u0017\u0010>\u001a\u00020\b2\u0006\u0010<\u001a\u00020\u0017H\u0000¢\u0006\u0004\b=\u0010!J\u0017\u0010>\u001a\u00020\b2\u0006\u00102\u001a\u00020\u0013H\u0000¢\u0006\u0004\b=\u00104Je\u0010B\u001a\u00020\b2T\u0010/\u001aP\u0012\u0016\u0012\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00010.0-\u0012\u0016\u0012\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00010.0-\u0012\u0016\u0012\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00010.0-\u0012\u0004\u0012\u00020\b0?H\u0000¢\u0006\u0004\b@\u0010AJ5\u0010E\u001a\u00020\b2$\u0010/\u001a \u0012\u0004\u0012\u00020C\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00010.\u0012\u0004\u0012\u00020\b0\u0011H\u0000¢\u0006\u0004\bD\u0010\u0015J#\u0010G\u001a\u00020\b2\u0012\u0010/\u001a\u000e\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0004\bF\u0010\u000fJ3\u0010L\u001a\u00020\b2\u0006\u0010H\u001a\u00020\u00172\u001a\u0010/\u001a\u0016\u0012\u0004\u0012\u00020I\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\f\u0018\u00010\u0011H\u0001¢\u0006\u0004\bJ\u0010KJ\u0017\u0010O\u001a\u00020\b2\u0006\u0010M\u001a\u00020\u0012H\u0000¢\u0006\u0004\bN\u0010%J)\u0010Q\u001a\u00020\b2\u0018\u0010\r\u001a\u0014\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0\u0011H\u0000¢\u0006\u0004\bP\u0010\u0015J#\u0010S\u001a\u00020\b2\u0012\u0010/\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0004\bR\u0010\u000fJ#\u0010U\u001a\u00020\b2\u0012\u0010/\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0004\bT\u0010\u000fJ1\u0010Z\u001a\u00020\b2\u0006\u0010V\u001a\u00020\u00172\u0018\u0010/\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00170W\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0004\bX\u0010YJ+\u0010\\\u001a\u00020\b2\u0006\u0010\u001f\u001a\u00020\u00172\u0012\u0010/\u001a\u000e\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0004\b[\u0010YJ)\u0010^\u001a\u00020\b2\u0018\u0010/\u001a\u0014\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\b0\u0011H\u0000¢\u0006\u0004\b]\u0010\u0015J\u0017\u0010a\u001a\u00020\b2\u0006\u0010_\u001a\u00020\fH\u0000¢\u0006\u0004\b`\u0010+JK\u0010e\u001a\u00020\b2\u0006\u0010b\u001a\u00020\u00132\u0006\u0010c\u001a\u00020\u00172\u0006\u0010d\u001a\u00020\u00172$\u0010/\u001a \u0012\u0004\u0012\u00020\u0017\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00010.\u0012\u0004\u0012\u00020\b0\u0011¢\u0006\u0004\be\u0010fJ9\u0010i\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u001e\u0010\r\u001a\u001a\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\u0012\u0012\u0004\u0012\u00020\b0?H\u0000¢\u0006\u0004\bg\u0010hJ'\u0010m\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\f\u0010\r\u001a\b\u0012\u0004\u0012\u00020\b0jH\u0000¢\u0006\u0004\bk\u0010lJ?\u0010q\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132$\u0010\r\u001a \u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\b0nH\u0000¢\u0006\u0004\bo\u0010pJ?\u0010s\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132$\u0010\r\u001a \u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\b0nH\u0000¢\u0006\u0004\br\u0010pJ=\u0010w\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\"\u0010\r\u001a\u001e\u0012\u0004\u0012\u00020\u0017\u0012\b\u0012\u00060tj\u0002`u\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0?H\u0000¢\u0006\u0004\bv\u0010hJC\u0010y\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132(\u0010\r\u001a$\u0012\u0004\u0012\u00020\u0017\u0012\b\u0012\u00060tj\u0002`u\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0nH\u0000¢\u0006\u0004\bx\u0010pJ3\u0010|\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0018\u0010\r\u001a\u0014\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0\u0011H\u0000¢\u0006\u0004\bz\u0010{J-\u0010\u007f\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0012\u0010\r\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0004\b}\u0010~J\u0019\u0010\u0081\u0001\u001a\u00020\b2\u0006\u0010b\u001a\u00020\u0013H\u0000¢\u0006\u0005\b\u0080\u0001\u00104J$\u0010\u0086\u0001\u001a\u00020\b2\u0006\u0010b\u001a\u00020\u00132\b\u0010\u0083\u0001\u001a\u00030\u0082\u0001H\u0000¢\u0006\u0006\b\u0084\u0001\u0010\u0085\u0001JA\u0010\u008c\u0001\u001a\u00020\b2\u0007\u0010\u0087\u0001\u001a\u00020\u00132\u0007\u0010\u0088\u0001\u001a\u00020\u00132\u0007\u0010\u0089\u0001\u001a\u00020\u00132\u0012\u0010/\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0006\b\u008a\u0001\u0010\u008b\u0001J\u0019\u0010\u008e\u0001\u001a\u00020\b2\u0006\u0010b\u001a\u00020\u0013H\u0000¢\u0006\u0005\b\u008d\u0001\u00104J,\u0010\u0093\u0001\u001a\u00020\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010\u008f\u0001\u001a\u00020\u00132\u0007\u0010\u0090\u0001\u001a\u00020\u0017H\u0000¢\u0006\u0006\b\u0091\u0001\u0010\u0092\u0001J7\u0010\u0099\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010\u0094\u0001\u001a\u00020\u00132\u0007\u0010\u0095\u0001\u001a\u00020\u00132\u0007\u0010\u0096\u0001\u001a\u00020\u0013H\u0000¢\u0006\u0006\b\u0097\u0001\u0010\u0098\u0001J5\u0010\u009b\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0018\u0010/\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00170W\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0005\b\u009a\u0001\u0010~J$\u0010\u009e\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0006\u0010\u001f\u001a\u00020\u0017H\u0000¢\u0006\u0006\b\u009c\u0001\u0010\u009d\u0001J%\u0010¡\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010\u009f\u0001\u001a\u00020\u0017H\u0000¢\u0006\u0006\b \u0001\u0010\u009d\u0001J$\u0010£\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0006\u0010c\u001a\u00020\u0017H\u0000¢\u0006\u0006\b¢\u0001\u0010\u009d\u0001J%\u0010§\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010¤\u0001\u001a\u00020\fH\u0000¢\u0006\u0006\b¥\u0001\u0010¦\u0001J6\u0010¬\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0006\u0010c\u001a\u00020\u00172\u0007\u0010¨\u0001\u001a\u00020\u00122\u0007\u0010©\u0001\u001a\u00020\u0012H\u0000¢\u0006\u0006\bª\u0001\u0010«\u0001J,\u0010¯\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0006\u0010c\u001a\u00020\u00172\u0006\u0010#\u001a\u00020\u0012H\u0000¢\u0006\u0006\b\u00ad\u0001\u0010®\u0001J-\u0010³\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0006\u0010c\u001a\u00020\u00172\u0007\u0010°\u0001\u001a\u00020\fH\u0000¢\u0006\u0006\b±\u0001\u0010²\u0001J\u001c\u0010¶\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u0013H\u0000¢\u0006\u0006\b´\u0001\u0010µ\u0001J%\u0010¹\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010·\u0001\u001a\u00020\fH\u0000¢\u0006\u0006\b¸\u0001\u0010¦\u0001J%\u0010¼\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010º\u0001\u001a\u00020\fH\u0000¢\u0006\u0006\b»\u0001\u0010¦\u0001J%\u0010À\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010½\u0001\u001a\u00020\u0013H\u0000¢\u0006\u0006\b¾\u0001\u0010¿\u0001J$\u0010Ã\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0006\u0010M\u001a\u00020\u0012H\u0000¢\u0006\u0006\bÁ\u0001\u0010Â\u0001J6\u0010È\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0006\u0010\u001b\u001a\u00020\f2\u0007\u0010Ä\u0001\u001a\u00020\f2\u0007\u0010Å\u0001\u001a\u00020\fH\u0000¢\u0006\u0006\bÆ\u0001\u0010Ç\u0001J/\u0010Ê\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0012\u0010/\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0005\bÉ\u0001\u0010~J%\u0010Í\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010Ë\u0001\u001a\u00020\u0013H\u0000¢\u0006\u0006\bÌ\u0001\u0010¿\u0001J9\u0010Ñ\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010Î\u0001\u001a\u00020\u00132\u0012\u0010/\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0006\bÏ\u0001\u0010Ð\u0001J<\u0010Ö\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010Ò\u0001\u001a\u00020\u00132\u0007\u0010Ó\u0001\u001a\u00020\u00132\f\u0010/\u001a\b\u0012\u0004\u0012\u00020\b0jH\u0000¢\u0006\u0006\bÔ\u0001\u0010Õ\u0001J%\u0010Ø\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010Ò\u0001\u001a\u00020\u0013H\u0000¢\u0006\u0006\b×\u0001\u0010¿\u0001J7\u0010Ý\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010Ù\u0001\u001a\u00020\u00172\u0007\u0010Ò\u0001\u001a\u00020\u00132\u0007\u0010Ú\u0001\u001a\u00020\u0017H\u0000¢\u0006\u0006\bÛ\u0001\u0010Ü\u0001J/\u0010ß\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0012\u0010/\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0005\bÞ\u0001\u0010~J%\u0010â\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010à\u0001\u001a\u00020\u0017H\u0000¢\u0006\u0006\bá\u0001\u0010\u009d\u0001J9\u0010æ\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010ã\u0001\u001a\u00020\u00172\u0012\u0010/\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0006\bä\u0001\u0010å\u0001JN\u0010ê\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010Ò\u0001\u001a\u00020\u00132\u0007\u0010ç\u0001\u001a\u00020\u00172\u001e\u0010/\u001a\u001a\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0?H\u0000¢\u0006\u0006\bè\u0001\u0010é\u0001JN\u0010í\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010Ò\u0001\u001a\u00020\u00132\u0007\u0010ë\u0001\u001a\u00020\u00172\u001e\u0010/\u001a\u001a\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0?H\u0000¢\u0006\u0006\bì\u0001\u0010é\u0001JA\u0010ñ\u0001\u001a\u0004\u0018\u00010\b2\u0006\u0010b\u001a\u00020\u00132\u0007\u0010î\u0001\u001a\u00020\u00132\u0006\u0010c\u001a\u00020\u00172\u0012\u0010/\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0\u000bH\u0000¢\u0006\u0006\bï\u0001\u0010ð\u0001J>\u0010ö\u0001\u001a\u00020\b2\u0007\u0010ò\u0001\u001a\u00020\u00172\u0007\u0010ó\u0001\u001a\u00020\u00132\u0018\u0010/\u001a\u0014\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\b0\u0011H\u0000¢\u0006\u0006\bô\u0001\u0010õ\u0001J\u0019\u0010ø\u0001\u001a\u00020\b2\u0006\u0010_\u001a\u00020\fH\u0000¢\u0006\u0005\b÷\u0001\u0010+J$\u0010ý\u0001\u001a\u00020\b2\u0007\u0010ù\u0001\u001a\u00020\u00172\u0007\u0010ú\u0001\u001a\u00020\u0017H\u0000¢\u0006\u0006\bû\u0001\u0010ü\u0001J\u001a\u0010\u0080\u0002\u001a\u00020\b2\u0007\u0010þ\u0001\u001a\u00020\fH\u0000¢\u0006\u0005\bÿ\u0001\u0010+J+\u0010\u0083\u0002\u001a\u00020\b2\u0007\u0010\u0081\u0002\u001a\u00020\u00172\r\u0010\u0082\u0002\u001a\b\u0012\u0004\u0012\u00020\b0jH\u0082\b¢\u0006\u0006\b\u0083\u0002\u0010\u0084\u0002J&\u0010\u0087\u0002\u001a\u0005\u0018\u00010\u0086\u00022\u0006\u0010b\u001a\u00020\u00132\u0007\u0010\u0085\u0002\u001a\u00020\u0017H\u0002¢\u0006\u0006\b\u0087\u0002\u0010\u0088\u0002J\u0019\u0010\u0089\u0002\u001a\u00020\b2\u0006\u0010b\u001a\u00020\u0013H\u0002¢\u0006\u0005\b\u0089\u0002\u00104J\u0011\u0010\u008a\u0002\u001a\u00020\bH\u0002¢\u0006\u0005\b\u008a\u0002\u0010\nR\u0015\u0010\u0003\u001a\u00020\u00028\u0002X\u0082\u0004¢\u0006\u0007\n\u0005\b\u0003\u0010\u008b\u0002R\u0017\u0010\u008c\u0002\u001a\u00020t8\u0002X\u0082\u0004¢\u0006\b\n\u0006\b\u008c\u0002\u0010\u008d\u0002R\u0018\u0010\u008f\u0002\u001a\u00030\u008e\u00028\u0002X\u0082\u0004¢\u0006\b\n\u0006\b\u008f\u0002\u0010\u0090\u0002R\u001c\u0010\u0092\u0002\u001a\u0005\u0018\u00010\u0091\u00028\u0002@\u0002X\u0082\u000e¢\u0006\b\n\u0006\b\u0092\u0002\u0010\u0093\u0002R-\u0010\u0094\u0002\u001a\u0016\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\b\u0018\u00010\u00118\u0002@\u0002X\u0082\u000e¢\u0006\b\n\u0006\b\u0094\u0002\u0010\u0095\u0002R\u0018\u0010\u0097\u0002\u001a\u00030\u0096\u00028\u0002X\u0082\u0004¢\u0006\b\n\u0006\b\u0097\u0002\u0010\u0098\u0002R\u0018\u0010\u009a\u0002\u001a\u00030\u0099\u00028\u0002X\u0082\u0004¢\u0006\b\n\u0006\b\u009a\u0002\u0010\u009b\u0002R\u001c\u0010\u009d\u0002\u001a\u0005\u0018\u00010\u009c\u00028\u0002@\u0002X\u0082\u000e¢\u0006\b\n\u0006\b\u009d\u0002\u0010\u009e\u0002R\u0018\u0010¡\u0002\u001a\u00030\u009c\u00028BX\u0082\u0004¢\u0006\b\u001a\u0006\b\u009f\u0002\u0010 \u0002¨\u0006¤\u0002"}, d2 = {"Lcom/discord/media/engine/MediaEngine;", "", "Landroid/content/Context;", "context", "Lkotlinx/coroutines/CoroutineDispatcher;", "coroutineDispatcher", "<init>", "(Landroid/content/Context;Lkotlinx/coroutines/CoroutineDispatcher;)V", "", "reset", "()V", "Lkotlin/Function1;", "", "cb", "setOnNoInputCallback$media_engine_release", "(Lkotlin/jvm/functions/Function1;)V", "setOnNoInputCallback", "Lkotlin/Function2;", "", "", "setOnVoiceCallback$media_engine_release", "(Lkotlin/jvm/functions/Function2;)V", "setOnVoiceCallback", "", "setActiveSinksChangeCallback$media_engine_release", "setActiveSinksChangeCallback", "streamId", AppStateModule.APP_STATE_ACTIVE, "activeSinksChanged$media_engine_release", "(Ljava/lang/String;Z)Lkotlin/Unit;", "activeSinksChanged", "optionsJSON", "setTransportOptions$media_engine_release", "(Ljava/lang/String;)V", "setTransportOptions", "volume", "setInputVolume$media_engine_release", "(F)V", "setInputVolume", "setOutputVolume$media_engine_release", "setOutputVolume", "enable", "setEmitVADLevel2$media_engine_release", "(Z)V", "setEmitVADLevel2", "", "", "callback", "getInputDevices$media_engine_release", "getInputDevices", "deviceIndex", "setInputDevice$media_engine_release", "(I)V", "setInputDevice", "getOutputDevices$media_engine_release", "getOutputDevices", "setOutputDevice$media_engine_release", "setOutputDevice", "getVideoInputDevices$media_engine_release", "getVideoInputDevices", "deviceName", "setVideoInputDevice$media_engine_release", "setVideoInputDevice", "Lkotlin/Function3;", "setDeviceChangeCallback$media_engine_release", "(Lkotlin/jvm/functions/Function3;)V", "setDeviceChangeCallback", "", "setAudioInputInitializationCallback$media_engine_release", "setAudioInputInitializationCallback", "setVoiceProcessingErrorCallback$media_engine_release", "setVoiceProcessingErrorCallback", "streamIdentifier", "Lorg/webrtc/VideoFrame;", "setVideoOutputSink$media_engine_release", "(Ljava/lang/String;Lkotlin/jvm/functions/Function2;)V", "setVideoOutputSink", "threshold", "setNoInputThreshold$media_engine_release", "setNoInputThreshold", "getAudioSubsystem$media_engine_release", "getAudioSubsystem", "getCodecCapabilities$media_engine_release", "getCodecCapabilities", "getCodecSurvey$media_engine_release", "getCodecSurvey", "regionsWithIpsJSON", "", "rankRtcRegions$media_engine_release", "(Ljava/lang/String;Lkotlin/jvm/functions/Function1;)V", "rankRtcRegions", "startLocalAudioRecording$media_engine_release", "startLocalAudioRecording", "stopLocalAudioRecording$media_engine_release", "stopLocalAudioRecording", ViewProps.ENABLED, "setAudioInputEnabled$media_engine_release", "setAudioInputEnabled", "connectionId", "userId", "connectionOptionsJSON", "createVoiceConnection", "(ILjava/lang/String;Ljava/lang/String;Lkotlin/jvm/functions/Function2;)V", "connectionInstanceSetOnSpeakingCallback$media_engine_release", "(ILkotlin/jvm/functions/Function3;)Lkotlin/Unit;", "connectionInstanceSetOnSpeakingCallback", "Lkotlin/Function0;", "connectionInstanceSetOnSpeakingWhileMutedCallback$media_engine_release", "(ILkotlin/jvm/functions/Function0;)Lkotlin/Unit;", "connectionInstanceSetOnSpeakingWhileMutedCallback", "Lkotlin/Function4;", "connectionInstanceSetOnPingCallback$media_engine_release", "(ILkotlin/jvm/functions/Function4;)Lkotlin/Unit;", "connectionInstanceSetOnPingCallback", "connectionInstanceSetOnPingTimeoutCallback$media_engine_release", "connectionInstanceSetOnPingTimeoutCallback", "", "Lcom/discord/media/engine/types/SSRC64;", "connectionInstanceSetOnFirstFrameCallback$media_engine_release", "connectionInstanceSetOnFirstFrameCallback", "connectionInstanceSetOnVideoCallback$media_engine_release", "connectionInstanceSetOnVideoCallback", "connectionInstanceSetOnMLSFailureCallback$media_engine_release", "(ILkotlin/jvm/functions/Function2;)Lkotlin/Unit;", "connectionInstanceSetOnMLSFailureCallback", "connectionInstanceSetSecureFramesStateUpdateCallback$media_engine_release", "(ILkotlin/jvm/functions/Function1;)Lkotlin/Unit;", "connectionInstanceSetSecureFramesStateUpdateCallback", "connectionInstanceDestroy$media_engine_release", "connectionInstanceDestroy", "Landroid/content/Intent;", "permissions", "connectionInstanceStartBroadcast$media_engine_release", "(ILandroid/content/Intent;)V", "connectionInstanceStartBroadcast", "width", "height", "intervalSeconds", "setBroadcastThumbnailParams$media_engine_release", "(IIILkotlin/jvm/functions/Function1;)V", "setBroadcastThumbnailParams", "connectionInstanceStopBroadcast$media_engine_release", "connectionInstanceStopBroadcast", "errorCode", "errorMessage", "connectionInstanceStopBroadcastWithError$media_engine_release", "(IILjava/lang/String;)V", "connectionInstanceStopBroadcastWithError", "baseDelayMs", "maxDelayMs", "maxAttempts", "connectionInstanceConfigureConnectionRetries$media_engine_release", "(IIII)Lkotlin/Unit;", "connectionInstanceConfigureConnectionRetries", "connectionInstanceGetEncryptionModes$media_engine_release", "connectionInstanceGetEncryptionModes", "connectionInstanceSetTransportOptions$media_engine_release", "(ILjava/lang/String;)Lkotlin/Unit;", "connectionInstanceSetTransportOptions", "usersJSON", "connectionInstanceMergeUsers$media_engine_release", "connectionInstanceMergeUsers", "connectionInstanceDestroyUser$media_engine_release", "connectionInstanceDestroyUser", "broadcasting", "connectionInstanceSetVideoBroadcast$media_engine_release", "(IZ)Lkotlin/Unit;", "connectionInstanceSetVideoBroadcast", ViewProps.LEFT, ViewProps.RIGHT, "connectionInstanceSetLocalPan$media_engine_release", "(ILjava/lang/String;FF)Lkotlin/Unit;", "connectionInstanceSetLocalPan", "connectionInstanceSetLocalVolume$media_engine_release", "(ILjava/lang/String;F)Lkotlin/Unit;", "connectionInstanceSetLocalVolume", "mute", "connectionInstanceSetLocalMute$media_engine_release", "(ILjava/lang/String;Z)Lkotlin/Unit;", "connectionInstanceSetLocalMute", "connectionInstanceFastUdpReconnect$media_engine_release", "(I)Lkotlin/Unit;", "connectionInstanceFastUdpReconnect", "muted", "connectionInstanceSetSelfMute$media_engine_release", "connectionInstanceSetSelfMute", "deafened", "connectionInstanceSetSelfDeafen$media_engine_release", "connectionInstanceSetSelfDeafen", "delay", "connectionInstanceSetMinimumOutputDelay$media_engine_release", "(II)Lkotlin/Unit;", "connectionInstanceSetMinimumOutputDelay", "connectionInstanceSetNoInputThreshold$media_engine_release", "(IF)Lkotlin/Unit;", "connectionInstanceSetNoInputThreshold", "priority", "muteOverride", "connectionInstanceSetPTTActive$media_engine_release", "(IZZZ)Lkotlin/Unit;", "connectionInstanceSetPTTActive", "connectionInstanceGetStats$media_engine_release", "connectionInstanceGetStats", "pingInterval", "connectionInstanceSetPingInterval$media_engine_release", "connectionInstanceSetPingInterval", ViewProps.FILTER, "connectionInstanceGetFilteredStats$media_engine_release", "(IILkotlin/jvm/functions/Function1;)Lkotlin/Unit;", "connectionInstanceGetFilteredStats", "transitionId", "protocolVersion", "connectionInstancePrepareSecureFramesTransition$media_engine_release", "(IIILkotlin/jvm/functions/Function0;)Lkotlin/Unit;", "connectionInstancePrepareSecureFramesTransition", "connectionInstanceExecuteSecureFramesTransition$media_engine_release", "connectionInstanceExecuteSecureFramesTransition", "epoch", "groupId", "connectionInstancePrepareSecureFramesEpoch$media_engine_release", "(ILjava/lang/String;ILjava/lang/String;)Lkotlin/Unit;", "connectionInstancePrepareSecureFramesEpoch", "connectionInstanceGetMLSKeyPackageB64$media_engine_release", "connectionInstanceGetMLSKeyPackageB64", "externalSender", "connectionInstanceUpdateMLSExternalSenderB64$media_engine_release", "connectionInstanceUpdateMLSExternalSenderB64", "proposals", "connectionInstanceProcessMLSProposalsB64$media_engine_release", "(ILjava/lang/String;Lkotlin/jvm/functions/Function1;)Lkotlin/Unit;", "connectionInstanceProcessMLSProposalsB64", "commit", "connectionInstancePrepareMLSCommitTransitionB64$media_engine_release", "(IILjava/lang/String;Lkotlin/jvm/functions/Function3;)Lkotlin/Unit;", "connectionInstancePrepareMLSCommitTransitionB64", "welcome", "connectionInstanceProcessMLSWelcomeB64$media_engine_release", "connectionInstanceProcessMLSWelcomeB64", "version", "connectionInstanceGetMLSPairwiseFingerprintB64$media_engine_release", "(IILjava/lang/String;Lkotlin/jvm/functions/Function1;)Lkotlin/Unit;", "connectionInstanceGetMLSPairwiseFingerprintB64", "sessionId", "signatureVersion", "getMLSSigningKeyB64$media_engine_release", "(Ljava/lang/String;ILkotlin/jvm/functions/Function2;)V", "getMLSSigningKeyB64", "setSidechainCompression$media_engine_release", "setSidechainCompression", "key", "value", "updateFieldTrial$media_engine_release", "(Ljava/lang/String;Ljava/lang/String;)V", "updateFieldTrial", "hasFullbandPerformance", "setHasFullbandPerformance$media_engine_release", "setHasFullbandPerformance", StackTraceHelper.NAME_KEY, "block", "nativeCallbackSafe", "(Ljava/lang/String;Lkotlin/jvm/functions/Function0;)V", "methodName", "Lcom/discord/native/engine/NativeConnection;", "getConnection", "(ILjava/lang/String;)Lcom/discord/native/engine/NativeConnection;", "stopScreenCapturerForConnection", "forceStopScreenCapturer", "Landroid/content/Context;", "instanceCreationNs", "J", "Lcom/discord/media/engine/MediaEngineNativeConnections;", "engineConnections", "Lcom/discord/media/engine/MediaEngineNativeConnections;", "Lcom/discord/media/engine/MediaEngine$ScreenCapturerForConnection;", "screenCapturer", "Lcom/discord/media/engine/MediaEngine$ScreenCapturerForConnection;", "activeSinksChangeCallback", "Lkotlin/jvm/functions/Function2;", "Lcom/discord/async_init/AsyncInitDispatcher;", "dispatcher", "Lcom/discord/async_init/AsyncInitDispatcher;", "Lkotlinx/coroutines/CoroutineScope;", "coroutineScope", "Lkotlinx/coroutines/CoroutineScope;", "Lcom/discord/native/engine/NativeEngine;", "engineInstance", "Lcom/discord/native/engine/NativeEngine;", "getEngine", "()Lcom/discord/native/engine/NativeEngine;", "engine", "Companion", "ScreenCapturerForConnection", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nMediaEngine.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaEngine.kt\ncom/discord/media/engine/MediaEngine\n+ 2 Debug.kt\ncom/discord/media/engine/types/Debug\n+ 3 AsyncInitDispatcher.kt\ncom/discord/async_init/AsyncInitDispatcher\n+ 4 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,837:1\n399#1,6:1167\n399#1,6:1173\n399#1,6:1179\n399#1,6:1185\n399#1,6:1191\n399#1,6:1197\n399#1,6:1203\n399#1,6:1209\n38#2,4:838\n58#2,4:842\n44#2,7:846\n44#2,7:853\n41#3,13:860\n41#3,13:873\n41#3,13:886\n41#3,13:899\n41#3,13:912\n41#3,13:925\n59#3,7:938\n41#3,13:945\n41#3,13:958\n59#3,7:971\n41#3,13:978\n41#3,13:991\n59#3,7:1004\n41#3,13:1011\n41#3,13:1024\n41#3,13:1037\n41#3,13:1050\n41#3,13:1063\n45#3,9:1076\n41#3,13:1085\n41#3,13:1098\n59#3,7:1111\n59#3,3:1118\n63#3,3:1124\n59#3,7:1127\n59#3,7:1134\n41#3,13:1141\n41#3,13:1154\n3829#4:1121\n4344#4,2:1122\n*S KotlinDebug\n*F\n+ 1 MediaEngine.kt\ncom/discord/media/engine/MediaEngine\n*L\n422#1:1167,6\n437#1:1173,6\n445#1:1179,6\n461#1:1185,6\n477#1:1191,6\n492#1:1197,6\n508#1:1203,6\n522#1:1209,6\n78#1:838,4\n95#1:842,4\n104#1:846,7\n119#1:853,7\n127#1:860,13\n132#1:873,13\n144#1:886,13\n149#1:899,13\n154#1:912,13\n159#1:925,13\n164#1:938,7\n174#1:945,13\n179#1:958,13\n184#1:971,7\n196#1:978,13\n201#1:991,13\n206#1:1004,7\n218#1:1011,13\n223#1:1024,13\n233#1:1037,13\n248#1:1050,13\n255#1:1063,13\n270#1:1076,9\n281#1:1085,13\n284#1:1098,13\n289#1:1111,7\n299#1:1118,3\n299#1:1124,3\n332#1:1127,7\n355#1:1134,7\n369#1:1141,13\n802#1:1154,13\n308#1:1121\n308#1:1122,2\n*E\n"})
/* loaded from: classes.dex */
public final class MediaEngine {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    public static final int MAX_SUPPORTED_PROTOCOL_VERSION = 114;

    @NotNull
    private static final Set<String> OPEN_SL_DEVICE_ALLOW_LIST;

    @NotNull
    private static final String TAG = "MediaEngine";
    private static final int THUMBNAIL_JPEG_QUALITY = 92;
    private Function2<? super String, ? super Boolean, Unit> activeSinksChangeCallback;

    @NotNull
    private final Context context;

    @NotNull
    private final CoroutineScope coroutineScope;

    @NotNull
    private final AsyncInitDispatcher dispatcher;

    @NotNull
    private final MediaEngineNativeConnections engineConnections;
    private NativeEngine engineInstance;
    private final long instanceCreationNs;
    private ScreenCapturerForConnection screenCapturer;

    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\"\n\u0002\b\u0002\n\u0002\u0010\u0012\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u000b\u001a\u00020\f*\u00020\rH\u0002J\u0016\u0010\u000e\u001a\u00020\u00052\u0006\u0010\u000f\u001a\u00020\rH\u0082@¢\u0006\u0002\u0010\u0010R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000R\u0014\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00050\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lcom/discord/media/engine/MediaEngine$Companion;", "", "<init>", "()V", "TAG", "", "THUMBNAIL_JPEG_QUALITY", "", "OPEN_SL_DEVICE_ALLOW_LIST", "", "MAX_SUPPORTED_PROTOCOL_VERSION", "compressToJpegBytes", "", "Landroid/graphics/Bitmap;", "encodeThumbnail", "bitmap", "(Landroid/graphics/Bitmap;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nMediaEngine.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaEngine.kt\ncom/discord/media/engine/MediaEngine$Companion\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,837:1\n1#2:838\n*E\n"})
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private final byte[] compressToJpegBytes(Bitmap bitmap) {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            bitmap.compress(Bitmap.CompressFormat.JPEG, MediaEngine.THUMBNAIL_JPEG_QUALITY, byteArrayOutputStream);
            byte[] byteArray = byteArrayOutputStream.toByteArray();
            Intrinsics.checkNotNullExpressionValue(byteArray, "toByteArray(...)");
            return byteArray;
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX WARN: Code restructure failed: missing block: B:18:0x005d, code lost:
        
            if (nr.x.B(r0) != r1) goto L22;
         */
        /* JADX WARN: Code restructure failed: missing block: B:19:0x005f, code lost:
        
            return r1;
         */
        /* JADX WARN: Code restructure failed: missing block: B:21:0x004d, code lost:
        
            if (nr.x.B(r0) == r1) goto L21;
         */
        /* JADX WARN: Removed duplicated region for block: B:20:0x003e  */
        /* JADX WARN: Removed duplicated region for block: B:8:0x0022  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final Object encodeThumbnail(Bitmap bitmap, Continuation continuation) {
            MediaEngine$Companion$encodeThumbnail$1 mediaEngine$Companion$encodeThumbnail$1;
            int i5;
            byte[] compressToJpegBytes;
            String encodeToString;
            if (continuation instanceof MediaEngine$Companion$encodeThumbnail$1) {
                mediaEngine$Companion$encodeThumbnail$1 = (MediaEngine$Companion$encodeThumbnail$1) continuation;
                int i6 = mediaEngine$Companion$encodeThumbnail$1.label;
                if ((i6 & Integer.MIN_VALUE) != 0) {
                    mediaEngine$Companion$encodeThumbnail$1.label = i6 - Integer.MIN_VALUE;
                    Object obj = mediaEngine$Companion$encodeThumbnail$1.result;
                    ko.a aVar = ko.a.f13464d;
                    i5 = mediaEngine$Companion$encodeThumbnail$1.label;
                    if (i5 != 0) {
                        ki.b.R(obj);
                        compressToJpegBytes = compressToJpegBytes(bitmap);
                        mediaEngine$Companion$encodeThumbnail$1.L$0 = compressToJpegBytes;
                        mediaEngine$Companion$encodeThumbnail$1.label = 1;
                    } else {
                        if (i5 != 1) {
                            if (i5 != 2) {
                                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                            }
                            encodeToString = (String) mediaEngine$Companion$encodeThumbnail$1.L$0;
                            ki.b.R(obj);
                            Intrinsics.checkNotNull(encodeToString);
                            return encodeToString;
                        }
                        compressToJpegBytes = (byte[]) mediaEngine$Companion$encodeThumbnail$1.L$0;
                        ki.b.R(obj);
                    }
                    encodeToString = Base64.encodeToString(compressToJpegBytes, 0);
                    mediaEngine$Companion$encodeThumbnail$1.L$0 = encodeToString;
                    mediaEngine$Companion$encodeThumbnail$1.label = 2;
                }
            }
            mediaEngine$Companion$encodeThumbnail$1 = new MediaEngine$Companion$encodeThumbnail$1(this, continuation);
            Object obj2 = mediaEngine$Companion$encodeThumbnail$1.result;
            ko.a aVar2 = ko.a.f13464d;
            i5 = mediaEngine$Companion$encodeThumbnail$1.label;
            if (i5 != 0) {
            }
            encodeToString = Base64.encodeToString(compressToJpegBytes, 0);
            mediaEngine$Companion$encodeThumbnail$1.L$0 = encodeToString;
            mediaEngine$Companion$encodeThumbnail$1.label = 2;
        }

        private Companion() {
        }
    }

    @Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\b\u0082\b\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0006\u0010\f\u001a\u00020\rJ\t\u0010\u000e\u001a\u00020\u0003HÆ\u0003J\t\u0010\u000f\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\u0010\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u0011\u001a\u00020\u00122\b\u0010\u0013\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0014\u001a\u00020\u0005HÖ\u0001J\t\u0010\u0015\u001a\u00020\u0016HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0017"}, d2 = {"Lcom/discord/media/engine/MediaEngine$ScreenCapturerForConnection;", "", "screenCapturer", "Lcom/discord/media/engine/video/screen_capture/ScreenCapturer;", "connectionId", "", "<init>", "(Lcom/discord/media/engine/video/screen_capture/ScreenCapturer;I)V", "getScreenCapturer", "()Lcom/discord/media/engine/video/screen_capture/ScreenCapturer;", "getConnectionId", "()I", "release", "", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class ScreenCapturerForConnection {
        private final int connectionId;

        @NotNull
        private final ScreenCapturer screenCapturer;

        public ScreenCapturerForConnection(@NotNull ScreenCapturer screenCapturer, int i5) {
            Intrinsics.checkNotNullParameter(screenCapturer, "screenCapturer");
            this.screenCapturer = screenCapturer;
            this.connectionId = i5;
        }

        public static /* synthetic */ ScreenCapturerForConnection copy$default(ScreenCapturerForConnection screenCapturerForConnection, ScreenCapturer screenCapturer, int i5, int i6, Object obj) {
            if ((i6 & 1) != 0) {
                screenCapturer = screenCapturerForConnection.screenCapturer;
            }
            if ((i6 & 2) != 0) {
                i5 = screenCapturerForConnection.connectionId;
            }
            return screenCapturerForConnection.copy(screenCapturer, i5);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final ScreenCapturer getScreenCapturer() {
            return this.screenCapturer;
        }

        /* renamed from: component2, reason: from getter */
        public final int getConnectionId() {
            return this.connectionId;
        }

        @NotNull
        public final ScreenCapturerForConnection copy(@NotNull ScreenCapturer screenCapturer, int connectionId) {
            Intrinsics.checkNotNullParameter(screenCapturer, "screenCapturer");
            return new ScreenCapturerForConnection(screenCapturer, connectionId);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof ScreenCapturerForConnection)) {
                return false;
            }
            ScreenCapturerForConnection screenCapturerForConnection = (ScreenCapturerForConnection) other;
            return Intrinsics.areEqual(this.screenCapturer, screenCapturerForConnection.screenCapturer) && this.connectionId == screenCapturerForConnection.connectionId;
        }

        public final int getConnectionId() {
            return this.connectionId;
        }

        @NotNull
        public final ScreenCapturer getScreenCapturer() {
            return this.screenCapturer;
        }

        public int hashCode() {
            return Integer.hashCode(this.connectionId) + (this.screenCapturer.hashCode() * 31);
        }

        public final void release() {
            this.screenCapturer.release();
        }

        @NotNull
        public String toString() {
            return "ScreenCapturerForConnection(screenCapturer=" + this.screenCapturer + ", connectionId=" + this.connectionId + ")";
        }
    }

    static {
        String[] elements = {"Pixel", "Pixel XL", "Pixel 3a XL", "Pixel 4", "Pixel 4 XL", "Pixel 5"};
        Intrinsics.checkNotNullParameter(elements, "elements");
        OPEN_SL_DEVICE_ALLOW_LIST = x.J(elements);
    }

    public MediaEngine(Context context, CoroutineDispatcher coroutineDispatcher, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i5 & 2) != 0 ? g0.a : coroutineDispatcher);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceGetEncryptionModes$lambda$65(Function1 function1, String[] modes) {
        Intrinsics.checkNotNullParameter(modes, "modes");
        function1.invoke(modes);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceGetFilteredStats$lambda$67(Function1 function1, String stats) {
        Intrinsics.checkNotNullParameter(stats, "stats");
        function1.invoke(stats);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceGetMLSKeyPackageB64$lambda$69(Function1 function1, String keyPackageB64) {
        Intrinsics.checkNotNullParameter(keyPackageB64, "keyPackageB64");
        function1.invoke(keyPackageB64);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceGetMLSPairwiseFingerprintB64$lambda$73(Function1 function1, String fingerprint) {
        Intrinsics.checkNotNullParameter(fingerprint, "fingerprint");
        function1.invoke(fingerprint);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceGetStats$lambda$66(Function1 function1, String stats) {
        Intrinsics.checkNotNullParameter(stats, "stats");
        function1.invoke(stats);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstancePrepareMLSCommitTransitionB64$lambda$71(Function3 function3, boolean z5, int i5, String rosterChange) {
        Intrinsics.checkNotNullParameter(rosterChange, "rosterChange");
        function3.invoke(Boolean.valueOf(z5), Integer.valueOf(i5), rosterChange);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceProcessMLSProposalsB64$lambda$70(Function1 function1, String commitWelcome) {
        Intrinsics.checkNotNullParameter(commitWelcome, "commitWelcome");
        function1.invoke(commitWelcome);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceProcessMLSWelcomeB64$lambda$72(Function3 function3, boolean z5, int i5, String rosterChange) {
        Intrinsics.checkNotNullParameter(rosterChange, "rosterChange");
        function3.invoke(Boolean.valueOf(z5), Integer.valueOf(i5), rosterChange);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceSetOnFirstFrameCallback$lambda$55(MediaEngine mediaEngine, Function3 function3, String userId, long j, String streamId) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        try {
            function3.invoke(userId, Long.valueOf(j), streamId);
        } catch (Throwable th2) {
            CrashReporting.captureException$default(CrashReporting.INSTANCE, new RuntimeException("media engine native callback [onFirstFrame] threw", th2), false, 2, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceSetOnMLSFailureCallback$lambda$59(MediaEngine mediaEngine, Function2 function2, String source, String reason) {
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(reason, "reason");
        try {
            function2.invoke(source, reason);
        } catch (Throwable th2) {
            CrashReporting.captureException$default(CrashReporting.INSTANCE, new RuntimeException("media engine native callback [onMLSFailure] threw", th2), false, 2, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceSetOnPingCallback$lambda$51(MediaEngine mediaEngine, Function4 function4, int i5, String server, int i6, int i10) {
        Intrinsics.checkNotNullParameter(server, "server");
        try {
            function4.invoke(Integer.valueOf(i5), server, Integer.valueOf(i6), Integer.valueOf(i10));
        } catch (Throwable th2) {
            CrashReporting.captureException$default(CrashReporting.INSTANCE, new RuntimeException("media engine native callback [onPing] threw", th2), false, 2, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceSetOnPingTimeoutCallback$lambda$53(MediaEngine mediaEngine, Function4 function4, String server, int i5, int i6, int i10) {
        Intrinsics.checkNotNullParameter(server, "server");
        try {
            function4.invoke(server, Integer.valueOf(i5), Integer.valueOf(i6), Integer.valueOf(i10));
        } catch (Throwable th2) {
            CrashReporting.captureException$default(CrashReporting.INSTANCE, new RuntimeException("media engine native callback [onPingTimeout] threw", th2), false, 2, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceSetOnSpeakingCallback$lambda$47(MediaEngine mediaEngine, Function3 function3, String userId, int i5, float f2) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        try {
            function3.invoke(userId, Integer.valueOf(i5), Float.valueOf(f2));
        } catch (Throwable th2) {
            CrashReporting.captureException$default(CrashReporting.INSTANCE, new RuntimeException("media engine native callback [onSpeaking] threw", th2), false, 2, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceSetOnSpeakingWhileMutedCallback$lambda$49(MediaEngine mediaEngine, Function0 function0) {
        try {
            function0.invoke();
        } catch (Throwable th2) {
            CrashReporting.captureException$default(CrashReporting.INSTANCE, new RuntimeException("media engine native callback [onSpeakingWhileMuted] threw", th2), false, 2, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceSetOnVideoCallback$lambda$57(MediaEngine mediaEngine, Function4 function4, String userId, long j, String streamId, String videoStreamParametersJSON) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        Intrinsics.checkNotNullParameter(videoStreamParametersJSON, "videoStreamParametersJSON");
        try {
            function4.invoke(userId, Long.valueOf(j), streamId, videoStreamParametersJSON);
        } catch (Throwable th2) {
            CrashReporting.captureException$default(CrashReporting.INSTANCE, new RuntimeException("media engine native callback [onVideo] threw", th2), false, 2, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void connectionInstanceSetSecureFramesStateUpdateCallback$lambda$61(MediaEngine mediaEngine, Function1 function1, String stateUpdateJSON) {
        Intrinsics.checkNotNullParameter(stateUpdateJSON, "stateUpdateJSON");
        try {
            function1.invoke(stateUpdateJSON);
        } catch (Throwable th2) {
            CrashReporting.captureException$default(CrashReporting.INSTANCE, new RuntimeException("media engine native callback [secureFramesStateUpdate] threw", th2), false, 2, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void createVoiceConnection$lambda$44(Function2 function2, ConnectionInfo connectionInfo, String errorMessage) {
        Intrinsics.checkNotNullParameter(connectionInfo, "connectionInfo");
        Intrinsics.checkNotNullParameter(errorMessage, "errorMessage");
        Log.i$default(Log.INSTANCE, TAG, "On created with " + connectionInfo + ", " + errorMessage, (Throwable) null, 4, (Object) null);
        LinkedHashMap o6 = v0.o(NativeTypeExtensionsKt.toMap(connectionInfo));
        o6.put("connectCallbackScheduledMs", Long.valueOf(System.nanoTime() / ((long) 1000000)));
        function2.invoke(errorMessage, o6);
    }

    private final void forceStopScreenCapturer() {
        ScreenCapturerForConnection screenCapturerForConnection = this.screenCapturer;
        if (screenCapturerForConnection != null) {
            screenCapturerForConnection.release();
        }
        this.screenCapturer = null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getCodecCapabilities$lambda$31$lambda$30(Function1 function1, String codecs) {
        Intrinsics.checkNotNullParameter(codecs, "codecs");
        function1.invoke(codecs);
    }

    private final NativeConnection getConnection(int connectionId, String methodName) {
        NativeConnection nativeConnection = this.engineConnections.get(connectionId);
        if (nativeConnection == null) {
            Log.w$default(Log.INSTANCE, TAG, "[" + methodName + "] no NativeConnection for connectionId=" + connectionId + ", returning null", (Throwable) null, 4, (Object) null);
        }
        return nativeConnection;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final NativeEngine getEngine() {
        NativeEngine nativeEngine = this.engineInstance;
        if (nativeEngine != null) {
            return nativeEngine;
        }
        Debug debug = Debug.INSTANCE;
        System.nanoTime();
        try {
            Class.forName("org.webrtc.voiceengine.WebRtcAudioManager").getDeclaredMethod("setBlacklistDeviceForOpenSLESUsage", Boolean.TYPE).invoke(null, Boolean.valueOf(!OPEN_SL_DEVICE_ALLOW_LIST.contains(Build.MODEL)));
        } catch (ClassNotFoundException unused) {
            Debug debug2 = Debug.INSTANCE;
        }
        NativeEngine nativeEngine2 = new NativeEngine(this.context, 2);
        nativeEngine2.enableBuiltInAEC(true);
        nativeEngine2.setAudioInputEnabled(false);
        this.engineInstance = nativeEngine2;
        this.dispatcher.setInitialized(true);
        return nativeEngine2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getInputDevices$lambda$10$lambda$9(Function1 function1, AudioInputDeviceDescription[] devices) {
        Intrinsics.checkNotNullParameter(devices, "devices");
        function1.invoke(NativeTypeExtensionsKt.toListOfMaps(devices));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getMLSSigningKeyB64$lambda$74(Function2 function2, String key, String signature) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(signature, "signature");
        function2.invoke(key, signature);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getOutputDevices$lambda$15$lambda$14(Function1 function1, AudioOutputDeviceDescription[] devices) {
        Intrinsics.checkNotNullParameter(devices, "devices");
        function1.invoke(NativeTypeExtensionsKt.toListOfMaps(devices));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getVideoInputDevices$lambda$20$lambda$19(Function1 function1, VideoInputDeviceDescription[] videoInputDevices) {
        Intrinsics.checkNotNullParameter(videoInputDevices, "videoInputDevices");
        function1.invoke(NativeTypeExtensionsKt.toListOfMaps(videoInputDevices));
    }

    private final void nativeCallbackSafe(String name, Function0<Unit> block) {
        try {
            block.invoke();
        } catch (Throwable th2) {
            CrashReporting.captureException$default(CrashReporting.INSTANCE, new RuntimeException(s4.h.f("media engine native callback [", name, "] threw"), th2), false, 2, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void rankRtcRegions$lambda$37$lambda$36(Function1 function1, String[] regions) {
        Intrinsics.checkNotNullParameter(regions, "regions");
        function1.invoke(regions);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setBroadcastThumbnailParams$lambda$64$lambda$63(MediaEngine mediaEngine, Function1 function1, Bitmap bitmap) {
        Intrinsics.checkNotNullParameter(bitmap, "bitmap");
        nr.x.t(mediaEngine.coroutineScope, null, new MediaEngine$setBroadcastThumbnailParams$1$1$1(bitmap, function1, null), 3);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void startLocalAudioRecording$lambda$39(Function1 function1, boolean z5) {
        function1.invoke(Boolean.valueOf(z5));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void stopLocalAudioRecording$lambda$41$lambda$40(Function2 function2, String fileName, int i5) {
        Intrinsics.checkNotNullParameter(fileName, "fileName");
        function2.invoke(fileName, Integer.valueOf(i5));
    }

    private final void stopScreenCapturerForConnection(int connectionId) {
        ScreenCapturerForConnection screenCapturerForConnection = this.screenCapturer;
        if (screenCapturerForConnection == null || screenCapturerForConnection.getConnectionId() != connectionId) {
            return;
        }
        ScreenCapturerForConnection screenCapturerForConnection2 = this.screenCapturer;
        if (screenCapturerForConnection2 != null) {
            screenCapturerForConnection2.release();
        }
        this.screenCapturer = null;
    }

    public final Unit activeSinksChanged$media_engine_release(@NotNull String streamId, boolean active) {
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        Function2<? super String, ? super Boolean, Unit> function2 = this.activeSinksChangeCallback;
        if (function2 == null) {
            return null;
        }
        function2.invoke(streamId, Boolean.valueOf(active));
        return Unit.a;
    }

    public final Unit connectionInstanceConfigureConnectionRetries$media_engine_release(int connectionId, int baseDelayMs, int maxDelayMs, int maxAttempts) {
        NativeConnection connection = getConnection(connectionId, "configureConnectionRetries");
        if (connection == null) {
            return null;
        }
        connection.configureConnectionRetries(baseDelayMs, maxDelayMs, maxAttempts);
        return Unit.a;
    }

    public final void connectionInstanceDestroy$media_engine_release(int connectionId) {
        stopScreenCapturerForConnection(connectionId);
        this.engineConnections.removeAndDispose(connectionId);
    }

    public final Unit connectionInstanceDestroyUser$media_engine_release(int connectionId, @NotNull String userId) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        NativeConnection connection = getConnection(connectionId, "destroyUser");
        if (connection == null) {
            return null;
        }
        connection.destroyUser(userId);
        return Unit.a;
    }

    public final Unit connectionInstanceExecuteSecureFramesTransition$media_engine_release(int connectionId, int transitionId) {
        NativeConnection connection = getConnection(connectionId, "executeSecureFramesTransition");
        if (connection == null) {
            return null;
        }
        connection.executeSecureFramesTransition(transitionId);
        return Unit.a;
    }

    public final Unit connectionInstanceFastUdpReconnect$media_engine_release(int connectionId) {
        NativeConnection connection = getConnection(connectionId, "fastUdpReconnect");
        if (connection == null) {
            return null;
        }
        connection.fastUdpReconnect();
        return Unit.a;
    }

    public final Unit connectionInstanceGetEncryptionModes$media_engine_release(int connectionId, @NotNull Function1<? super String[], Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        NativeConnection connection = getConnection(connectionId, "getEncryptionModes");
        if (connection == null) {
            return null;
        }
        connection.getEncryptionModes(new a(callback, 0));
        return Unit.a;
    }

    public final Unit connectionInstanceGetFilteredStats$media_engine_release(int connectionId, int filter, @NotNull Function1<? super String, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        NativeConnection connection = getConnection(connectionId, "getFilteredStats");
        if (connection == null) {
            return null;
        }
        connection.getFilteredStats(filter, new a(callback, 5));
        return Unit.a;
    }

    public final Unit connectionInstanceGetMLSKeyPackageB64$media_engine_release(int connectionId, @NotNull Function1<? super String, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        NativeConnection connection = getConnection(connectionId, "getMLSKeyPackageB64");
        if (connection == null) {
            return null;
        }
        connection.getMLSKeyPackageB64(new a(callback, 9));
        return Unit.a;
    }

    public final Unit connectionInstanceGetMLSPairwiseFingerprintB64$media_engine_release(int connectionId, int version, @NotNull String userId, @NotNull Function1<? super String, Unit> callback) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(callback, "callback");
        NativeConnection connection = getConnection(connectionId, "getMLSPairwiseFingerprintB64");
        if (connection == null) {
            return null;
        }
        connection.getMLSPairwiseFingerprintB64(version, userId, new a(callback, 11));
        return Unit.a;
    }

    public final Unit connectionInstanceGetStats$media_engine_release(int connectionId, @NotNull Function1<? super String, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        NativeConnection connection = getConnection(connectionId, "getStats");
        if (connection == null) {
            return null;
        }
        connection.getStats(new a(callback, 6));
        return Unit.a;
    }

    public final Unit connectionInstanceMergeUsers$media_engine_release(int connectionId, @NotNull String usersJSON) {
        Intrinsics.checkNotNullParameter(usersJSON, "usersJSON");
        NativeConnection connection = getConnection(connectionId, "mergeUsers");
        if (connection == null) {
            return null;
        }
        connection.mergeUsers(usersJSON);
        return Unit.a;
    }

    public final Unit connectionInstancePrepareMLSCommitTransitionB64$media_engine_release(int connectionId, int transitionId, @NotNull String commit, @NotNull Function3 callback) {
        Intrinsics.checkNotNullParameter(commit, "commit");
        Intrinsics.checkNotNullParameter(callback, "callback");
        NativeConnection connection = getConnection(connectionId, "prepareMLSCommitTransitionB64");
        if (connection == null) {
            return null;
        }
        connection.prepareMLSCommitTransitionB64(transitionId, commit, new c(callback));
        return Unit.a;
    }

    public final Unit connectionInstancePrepareSecureFramesEpoch$media_engine_release(int connectionId, @NotNull String epoch, int transitionId, @NotNull String groupId) {
        Intrinsics.checkNotNullParameter(epoch, "epoch");
        Intrinsics.checkNotNullParameter(groupId, "groupId");
        NativeConnection connection = getConnection(connectionId, "prepareSecureFramesEpoch");
        if (connection == null) {
            return null;
        }
        connection.prepareSecureFramesEpoch(epoch, transitionId, groupId);
        return Unit.a;
    }

    public final Unit connectionInstancePrepareSecureFramesTransition$media_engine_release(int connectionId, int transitionId, int protocolVersion, @NotNull Function0<Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        NativeConnection connection = getConnection(connectionId, "prepareSecureFramesTransition");
        if (connection == null) {
            return null;
        }
        connection.prepareSecureFramesTransition(transitionId, protocolVersion, new c(callback));
        return Unit.a;
    }

    public final Unit connectionInstanceProcessMLSProposalsB64$media_engine_release(int connectionId, @NotNull String proposals, @NotNull Function1<? super String, Unit> callback) {
        Intrinsics.checkNotNullParameter(proposals, "proposals");
        Intrinsics.checkNotNullParameter(callback, "callback");
        NativeConnection connection = getConnection(connectionId, "processMLSProposalsB64");
        if (connection == null) {
            return null;
        }
        connection.processMLSProposalsB64(proposals, new a(callback, 4));
        return Unit.a;
    }

    public final Unit connectionInstanceProcessMLSWelcomeB64$media_engine_release(int connectionId, int transitionId, @NotNull String welcome, @NotNull Function3 callback) {
        Intrinsics.checkNotNullParameter(welcome, "welcome");
        Intrinsics.checkNotNullParameter(callback, "callback");
        NativeConnection connection = getConnection(connectionId, "processMLSWelcomeB64");
        if (connection == null) {
            return null;
        }
        connection.processMLSWelcomeB64(transitionId, welcome, new c(callback));
        return Unit.a;
    }

    public final Unit connectionInstanceSetLocalMute$media_engine_release(int connectionId, @NotNull String userId, boolean mute) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        NativeConnection connection = getConnection(connectionId, "setLocalMute");
        if (connection == null) {
            return null;
        }
        connection.setLocalMute(userId, mute);
        return Unit.a;
    }

    public final Unit connectionInstanceSetLocalPan$media_engine_release(int connectionId, @NotNull String userId, float left, float right) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        NativeConnection connection = getConnection(connectionId, "setLocalPan");
        if (connection == null) {
            return null;
        }
        connection.setLocalPan(userId, left, right);
        return Unit.a;
    }

    public final Unit connectionInstanceSetLocalVolume$media_engine_release(int connectionId, @NotNull String userId, float volume) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        NativeConnection connection = getConnection(connectionId, "setLocalVolume");
        if (connection == null) {
            return null;
        }
        connection.setLocalVolume(userId, volume);
        return Unit.a;
    }

    public final Unit connectionInstanceSetMinimumOutputDelay$media_engine_release(int connectionId, int delay) {
        NativeConnection connection = getConnection(connectionId, "setMinimumOutputDelay");
        if (connection == null) {
            return null;
        }
        connection.setMinimumOutputDelay(delay);
        return Unit.a;
    }

    public final Unit connectionInstanceSetNoInputThreshold$media_engine_release(int connectionId, float threshold) {
        NativeConnection connection = getConnection(connectionId, "setNoInputThreshold");
        if (connection == null) {
            return null;
        }
        connection.setNoInputThreshold(threshold);
        return Unit.a;
    }

    public final Unit connectionInstanceSetOnFirstFrameCallback$media_engine_release(int connectionId, @NotNull Function3 cb2) {
        Intrinsics.checkNotNullParameter(cb2, "cb");
        NativeConnection connection = getConnection(connectionId, "setOnFirstFrameCallback");
        if (connection == null) {
            return null;
        }
        connection.setOnFirstFrameCallback(new f(this, cb2));
        return Unit.a;
    }

    public final Unit connectionInstanceSetOnMLSFailureCallback$media_engine_release(int connectionId, @NotNull Function2<? super String, ? super String, Unit> cb2) {
        Intrinsics.checkNotNullParameter(cb2, "cb");
        NativeConnection connection = getConnection(connectionId, "setOnMLSFailureCallback");
        if (connection == null) {
            return null;
        }
        connection.setOnMLSFailureCallback(new b(this, cb2));
        return Unit.a;
    }

    public final Unit connectionInstanceSetOnPingCallback$media_engine_release(int connectionId, @NotNull Function4 cb2) {
        Intrinsics.checkNotNullParameter(cb2, "cb");
        NativeConnection connection = getConnection(connectionId, "setOnPingCallback");
        if (connection == null) {
            return null;
        }
        connection.setOnPingCallback(new e(this, cb2));
        return Unit.a;
    }

    public final Unit connectionInstanceSetOnPingTimeoutCallback$media_engine_release(int connectionId, @NotNull Function4 cb2) {
        Intrinsics.checkNotNullParameter(cb2, "cb");
        NativeConnection connection = getConnection(connectionId, "setOnPingTimeoutCallback");
        if (connection == null) {
            return null;
        }
        connection.setOnPingTimeoutCallback(new e(this, cb2));
        return Unit.a;
    }

    public final Unit connectionInstanceSetOnSpeakingCallback$media_engine_release(int connectionId, @NotNull Function3 cb2) {
        Intrinsics.checkNotNullParameter(cb2, "cb");
        NativeConnection connection = getConnection(connectionId, "setOnSpeakingCallback");
        if (connection == null) {
            return null;
        }
        connection.setOnSpeakingCallback(new f(this, cb2));
        return Unit.a;
    }

    public final Unit connectionInstanceSetOnSpeakingWhileMutedCallback$media_engine_release(int connectionId, @NotNull Function0<Unit> cb2) {
        Intrinsics.checkNotNullParameter(cb2, "cb");
        NativeConnection connection = getConnection(connectionId, "setOnSpeakingWhileMutedCallback");
        if (connection == null) {
            return null;
        }
        connection.setOnSpeakingWhileMutedCallback(new b(this, cb2));
        return Unit.a;
    }

    public final Unit connectionInstanceSetOnVideoCallback$media_engine_release(int connectionId, @NotNull Function4 cb2) {
        Intrinsics.checkNotNullParameter(cb2, "cb");
        NativeConnection connection = getConnection(connectionId, "setOnVideoCallback");
        if (connection == null) {
            return null;
        }
        connection.setOnVideoCallback(new e(this, cb2));
        return Unit.a;
    }

    public final Unit connectionInstanceSetPTTActive$media_engine_release(int connectionId, boolean active, boolean priority, boolean muteOverride) {
        NativeConnection connection = getConnection(connectionId, "setPTTActive");
        if (connection == null) {
            return null;
        }
        connection.setPTTActive(active, priority, muteOverride);
        return Unit.a;
    }

    public final Unit connectionInstanceSetPingInterval$media_engine_release(int connectionId, int pingInterval) {
        NativeConnection connection = getConnection(connectionId, "setPingInterval");
        if (connection == null) {
            return null;
        }
        connection.setPingInterval(pingInterval);
        return Unit.a;
    }

    public final Unit connectionInstanceSetSecureFramesStateUpdateCallback$media_engine_release(int connectionId, @NotNull Function1<? super String, Unit> cb2) {
        Intrinsics.checkNotNullParameter(cb2, "cb");
        NativeConnection connection = getConnection(connectionId, "setSecureFramesStateUpdateCallback");
        if (connection == null) {
            return null;
        }
        connection.setSecureFramesStateUpdateCallback(new b(this, cb2));
        return Unit.a;
    }

    public final Unit connectionInstanceSetSelfDeafen$media_engine_release(int connectionId, boolean deafened) {
        NativeConnection connection = getConnection(connectionId, "setSelfDeafen");
        if (connection == null) {
            return null;
        }
        connection.setSelfDeafen(deafened);
        return Unit.a;
    }

    public final Unit connectionInstanceSetSelfMute$media_engine_release(int connectionId, boolean muted) {
        NativeConnection connection = getConnection(connectionId, "setSelfMute");
        if (connection == null) {
            return null;
        }
        connection.setSelfMute(muted);
        return Unit.a;
    }

    public final Unit connectionInstanceSetTransportOptions$media_engine_release(int connectionId, @NotNull String optionsJSON) {
        Intrinsics.checkNotNullParameter(optionsJSON, "optionsJSON");
        NativeConnection connection = getConnection(connectionId, "setTransportOptions");
        if (connection == null) {
            return null;
        }
        connection.setTransportOptions(optionsJSON);
        return Unit.a;
    }

    public final Unit connectionInstanceSetVideoBroadcast$media_engine_release(int connectionId, boolean broadcasting) {
        NativeConnection connection = getConnection(connectionId, "setVideoBroadcast");
        if (connection == null) {
            return null;
        }
        connection.setVideoBroadcast(broadcasting);
        return Unit.a;
    }

    public final void connectionInstanceStartBroadcast$media_engine_release(int connectionId, @NotNull Intent permissions) {
        Intrinsics.checkNotNullParameter(permissions, "permissions");
        NativeConnection connection = getConnection(connectionId, "startBroadcast");
        if (connection != null) {
            forceStopScreenCapturer();
            ScreenCapturer screenCapturer = new ScreenCapturer(permissions);
            this.screenCapturer = new ScreenCapturerForConnection(screenCapturer, connectionId);
            connection.startBroadcast(screenCapturer, screenCapturer.getSoundshare().getNativeInstance());
        }
    }

    public final void connectionInstanceStopBroadcast$media_engine_release(int connectionId) {
        NativeConnection connection = getConnection(connectionId, "stopBroadcast");
        if (connection != null) {
            connection.stopBroadcast();
        }
        stopScreenCapturerForConnection(connectionId);
    }

    public final void connectionInstanceStopBroadcastWithError$media_engine_release(int connectionId, int errorCode, @NotNull String errorMessage) {
        Intrinsics.checkNotNullParameter(errorMessage, "errorMessage");
        NativeConnection connection = getConnection(connectionId, "stopBroadcastWithError");
        if (connection != null) {
            connection.stopBroadcast();
        }
        stopScreenCapturerForConnection(connectionId);
    }

    public final Unit connectionInstanceUpdateMLSExternalSenderB64$media_engine_release(int connectionId, @NotNull String externalSender) {
        Intrinsics.checkNotNullParameter(externalSender, "externalSender");
        NativeConnection connection = getConnection(connectionId, "updateMLSExternalSenderB64");
        if (connection == null) {
            return null;
        }
        connection.updateMLSExternalSenderB64(externalSender);
        return Unit.a;
    }

    public final void createVoiceConnection(int connectionId, @NotNull String userId, @NotNull String connectionOptionsJSON, @NotNull Function2<? super String, ? super Map<String, ? extends Object>, Unit> callback) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(connectionOptionsJSON, "connectionOptionsJSON");
        Intrinsics.checkNotNullParameter(callback, "callback");
        this.engineConnections.register(connectionId, getEngine().createVoiceConnection(userId, connectionOptionsJSON, new d(callback)));
    }

    public final void getAudioSubsystem$media_engine_release(@NotNull final Function2<? super String, ? super String, Unit> cb2) {
        Intrinsics.checkNotNullParameter(cb2, "cb");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().getAudioSubsystem(new MediaEngine$getAudioSubsystem$1$1(cb2));
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$getAudioSubsystem$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1004invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1004invoke() {
                    MediaEngine.this.getEngine().getAudioSubsystem(new MediaEngine$getAudioSubsystem$1$1(cb2));
                }
            });
        }
    }

    public final void getCodecCapabilities$media_engine_release(@NotNull Function1<? super String, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().getCodecCapabilities(new a(callback, 3));
        } else {
            callback.invoke("{}");
        }
    }

    public final void getCodecSurvey$media_engine_release(@NotNull Function1<? super String, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (!asyncInitDispatcher.getInitialized()) {
            callback.invoke("{}");
            return;
        }
        JSONObject jSONObject = new JSONObject();
        String[] strArr = new String[0];
        String[] strArr2 = new String[0];
        Iterator it = ArrayIteratorKt.iterator(new MediaCodecList(0).getCodecInfos());
        while (it.hasNext()) {
            MediaCodecInfo mediaCodecInfo = (MediaCodecInfo) it.next();
            String name = mediaCodecInfo.getName();
            Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
            String[] supportedTypes = mediaCodecInfo.getSupportedTypes();
            Intrinsics.checkNotNullExpressionValue(supportedTypes, "getSupportedTypes(...)");
            ArrayList arrayList = new ArrayList();
            for (String str : supportedTypes) {
                Intrinsics.checkNotNull(str);
                if (kotlin.text.x.o(str, MediaStreamTrack.VIDEO_TRACK_KIND, false)) {
                    arrayList.add(str);
                }
            }
            Iterator it2 = arrayList.iterator();
            while (it2.hasNext()) {
                String O = CollectionsKt.O(c0.g((String) it2.next(), name, Build.VERSION.SDK_INT >= 29 ? mediaCodecInfo.isHardwareAccelerated() ? "(HW)" : "(SW)" : ""), " ", null, null, null, 62);
                if (mediaCodecInfo.isEncoder()) {
                    Intrinsics.checkNotNullParameter(strArr, "<this>");
                    int length = strArr.length;
                    Object[] copyOf = Arrays.copyOf(strArr, length + 1);
                    copyOf[length] = O;
                    Intrinsics.checkNotNull(copyOf);
                    strArr = (String[]) copyOf;
                } else {
                    Intrinsics.checkNotNullParameter(strArr2, "<this>");
                    int length2 = strArr2.length;
                    Object[] copyOf2 = Arrays.copyOf(strArr2, length2 + 1);
                    copyOf2[length2] = O;
                    Intrinsics.checkNotNull(copyOf2);
                    strArr2 = (String[]) copyOf2;
                }
            }
        }
        jSONObject.put("available_video_encoders", new JSONArray(strArr));
        jSONObject.put("available_video_decoders", new JSONArray(strArr2));
        String jSONObject2 = jSONObject.toString();
        Intrinsics.checkNotNullExpressionValue(jSONObject2, "toString(...)");
        callback.invoke(jSONObject2);
    }

    public final void getInputDevices$media_engine_release(@NotNull Function1<? super List<? extends Map<String, ? extends Object>>, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().getInputDevices(new a(callback, 8));
        } else {
            callback.invoke(m0.f13512d);
        }
    }

    public final void getMLSSigningKeyB64$media_engine_release(@NotNull String sessionId, int signatureVersion, @NotNull Function2<? super String, ? super String, Unit> callback) {
        Intrinsics.checkNotNullParameter(sessionId, "sessionId");
        Intrinsics.checkNotNullParameter(callback, "callback");
        getEngine().getMLSSigningKeyB64(sessionId, signatureVersion, new d(callback));
    }

    public final void getOutputDevices$media_engine_release(@NotNull Function1<? super List<? extends Map<String, ? extends Object>>, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().getOutputDevices(new a(callback, 2));
        } else {
            callback.invoke(m0.f13512d);
        }
    }

    public final void getVideoInputDevices$media_engine_release(@NotNull Function1<? super List<? extends Map<String, ? extends Object>>, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().getVideoInputDevices(new a(callback, 10));
        } else {
            callback.invoke(m0.f13512d);
        }
    }

    public final void rankRtcRegions$media_engine_release(@NotNull String regionsWithIpsJSON, @NotNull Function1<? super String[], Unit> callback) {
        Intrinsics.checkNotNullParameter(regionsWithIpsJSON, "regionsWithIpsJSON");
        Intrinsics.checkNotNullParameter(callback, "callback");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().rankRtcRegions(regionsWithIpsJSON, new a(callback, 1));
        } else {
            callback.invoke(new String[0]);
        }
    }

    public final void reset() {
        System.nanoTime();
        nr.x.f(this.coroutineScope, null);
        this.dispatcher.reset();
        forceStopScreenCapturer();
        this.engineConnections.removeAndDisposeAll();
        NativeEngine nativeEngine = this.engineInstance;
        if (nativeEngine != null) {
            nativeEngine.dispose();
        }
        this.engineInstance = null;
        Debug debug = Debug.INSTANCE;
    }

    public final void setActiveSinksChangeCallback$media_engine_release(@NotNull Function2<? super String, ? super Boolean, Unit> cb2) {
        Intrinsics.checkNotNullParameter(cb2, "cb");
        this.activeSinksChangeCallback = cb2;
    }

    public final void setAudioInputEnabled$media_engine_release(final boolean enabled) {
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setAudioInputEnabled(enabled);
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setAudioInputEnabled$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1005invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1005invoke() {
                    MediaEngine.this.getEngine().setAudioInputEnabled(enabled);
                }
            });
        }
    }

    public final void setAudioInputInitializationCallback$media_engine_release(@NotNull final Function2<? super Double, ? super Map<String, ? extends Object>, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setAudioInputInitializationCallback(new MediaEngine$setAudioInputInitializationCallback$1$1(callback));
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setAudioInputInitializationCallback$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1006invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1006invoke() {
                    MediaEngine.this.getEngine().setAudioInputInitializationCallback(new MediaEngine$setAudioInputInitializationCallback$1$1(callback));
                }
            });
        }
    }

    public final void setBroadcastThumbnailParams$media_engine_release(int width, int height, int intervalSeconds, @NotNull Function1<? super String, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        ScreenCapturerForConnection screenCapturerForConnection = this.screenCapturer;
        if (screenCapturerForConnection != null) {
            screenCapturerForConnection.getScreenCapturer().setThumbnailEmitter(new ThumbnailEmitter(width, height, 1000 * intervalSeconds, new v(1, this, callback)));
        }
    }

    public final void setDeviceChangeCallback$media_engine_release(@NotNull final Function3 callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setOnDeviceChangeCallback(new MediaEngine$setDeviceChangeCallback$1$1(callback));
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setDeviceChangeCallback$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1007invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1007invoke() {
                    MediaEngine.this.getEngine().setOnDeviceChangeCallback(new MediaEngine$setDeviceChangeCallback$1$1(callback));
                }
            });
        }
    }

    public final void setEmitVADLevel2$media_engine_release(final boolean enable) {
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setEmitVADLevel2(enable);
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setEmitVADLevel2$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1008invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1008invoke() {
                    MediaEngine.this.getEngine().setEmitVADLevel2(enable);
                }
            });
        }
    }

    public final void setHasFullbandPerformance$media_engine_release(final boolean hasFullbandPerformance) {
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setHasFullbandPerformance(hasFullbandPerformance);
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setHasFullbandPerformance$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1009invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1009invoke() {
                    MediaEngine.this.getEngine().setHasFullbandPerformance(hasFullbandPerformance);
                }
            });
        }
    }

    public final void setInputDevice$media_engine_release(final int deviceIndex) {
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setInputDeviceIndex(deviceIndex);
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setInputDevice$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1010invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1010invoke() {
                    MediaEngine.this.getEngine().setInputDeviceIndex(deviceIndex);
                }
            });
        }
    }

    public final void setInputVolume$media_engine_release(final float volume) {
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setInputVolume(volume);
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setInputVolume$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1012invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1012invoke() {
                    MediaEngine.this.getEngine().setInputVolume(volume);
                }
            });
        }
    }

    public final void setNoInputThreshold$media_engine_release(final float threshold) {
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setNoInputThreshold(threshold);
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setNoInputThreshold$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1013invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1013invoke() {
                    MediaEngine.this.getEngine().setNoInputThreshold(threshold);
                }
            });
        }
    }

    public final void setOnNoInputCallback$media_engine_release(@NotNull final Function1<? super Boolean, Unit> cb2) {
        Intrinsics.checkNotNullParameter(cb2, "cb");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setOnNoInputCallback(new MediaEngine$setOnNoInputCallback$1$1(cb2));
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setOnNoInputCallback$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1014invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1014invoke() {
                    MediaEngine.this.getEngine().setOnNoInputCallback(new MediaEngine$setOnNoInputCallback$1$1(cb2));
                }
            });
        }
    }

    public final void setOnVoiceCallback$media_engine_release(@NotNull final Function2<? super Float, ? super Integer, Unit> cb2) {
        Intrinsics.checkNotNullParameter(cb2, "cb");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setOnVoiceCallback(new MediaEngine$setOnVoiceCallback$1$1(cb2));
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setOnVoiceCallback$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1015invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1015invoke() {
                    MediaEngine.this.getEngine().setOnVoiceCallback(new MediaEngine$setOnVoiceCallback$1$1(cb2));
                }
            });
        }
    }

    public final void setOutputDevice$media_engine_release(final int deviceIndex) {
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setOutputDeviceIndex(deviceIndex);
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setOutputDevice$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1016invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1016invoke() {
                    MediaEngine.this.getEngine().setOutputDeviceIndex(deviceIndex);
                }
            });
        }
    }

    public final void setOutputVolume$media_engine_release(final float volume) {
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setOutputVolume(volume);
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setOutputVolume$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1018invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1018invoke() {
                    MediaEngine.this.getEngine().setOutputVolume(volume);
                }
            });
        }
    }

    public final void setSidechainCompression$media_engine_release(boolean enabled) {
        getEngine().setSidechainCompression(enabled);
    }

    public final void setTransportOptions$media_engine_release(@NotNull final String optionsJSON) {
        Intrinsics.checkNotNullParameter(optionsJSON, "optionsJSON");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setTransportOptions(optionsJSON);
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setTransportOptions$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1019invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1019invoke() {
                    MediaEngine.this.getEngine().setTransportOptions(optionsJSON);
                }
            });
        }
    }

    public final void setVideoInputDevice$media_engine_release(@NotNull final String deviceName) {
        Intrinsics.checkNotNullParameter(deviceName, "deviceName");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setVideoInputDevice(deviceName);
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setVideoInputDevice$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1020invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1020invoke() {
                    MediaEngine.this.getEngine().setVideoInputDevice(deviceName);
                }
            });
        }
    }

    public final void setVideoOutputSink$media_engine_release(@NotNull final String streamIdentifier, final Function2<? super VideoFrame, ? super Boolean, Boolean> callback) {
        Intrinsics.checkNotNullParameter(streamIdentifier, "streamIdentifier");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        if (!asyncInitDispatcher.getInitialized()) {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setVideoOutputSink$$inlined$post$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1022invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1022invoke() {
                    if (Function2.this == null) {
                        this.getEngine().setVideoOutputSink(streamIdentifier, null);
                    } else {
                        this.getEngine().setVideoOutputSink(streamIdentifier, new MediaEngine$setVideoOutputSink$1$1(Function2.this));
                    }
                }
            });
        } else if (callback == null) {
            getEngine().setVideoOutputSink(streamIdentifier, null);
        } else {
            getEngine().setVideoOutputSink(streamIdentifier, new MediaEngine$setVideoOutputSink$1$1(callback));
        }
    }

    public final void setVoiceProcessingErrorCallback$media_engine_release(@NotNull final Function1<? super Integer, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setVoiceProcessingErrorCallback(new MediaEngine$setVoiceProcessingErrorCallback$1$1(callback));
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setVoiceProcessingErrorCallback$$inlined$post$default$1
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1023invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1023invoke() {
                    MediaEngine.this.getEngine().setVoiceProcessingErrorCallback(new MediaEngine$setVoiceProcessingErrorCallback$1$1(callback));
                }
            });
        }
    }

    public final void startLocalAudioRecording$media_engine_release(@NotNull String optionsJSON, @NotNull Function1<? super Boolean, Unit> callback) {
        Intrinsics.checkNotNullParameter(optionsJSON, "optionsJSON");
        Intrinsics.checkNotNullParameter(callback, "callback");
        getEngine().startLocalAudioRecording(optionsJSON, new a(callback, 7));
    }

    public final void stopLocalAudioRecording$media_engine_release(@NotNull Function2<? super String, ? super Integer, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (!asyncInitDispatcher.getInitialized()) {
            callback.invoke("", 0);
        } else {
            getEngine().stopLocalAudioRecording(new d(callback));
        }
    }

    public final void updateFieldTrial$media_engine_release(@NotNull String key, @NotNull String value) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(value, "value");
        getEngine().updateFieldTrial(key, value);
    }

    public MediaEngine(@NotNull Context context, @NotNull CoroutineDispatcher coroutineDispatcher) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(coroutineDispatcher, "coroutineDispatcher");
        this.context = context;
        this.instanceCreationNs = System.nanoTime();
        this.engineConnections = new MediaEngineNativeConnections();
        this.dispatcher = new AsyncInitDispatcher(TAG, 0L, 2, null);
        nr.v vVar = new nr.v();
        coroutineDispatcher.getClass();
        this.coroutineScope = nr.x.b(kotlin.coroutines.e.c(coroutineDispatcher, vVar));
    }

    public final void setInputDevice$media_engine_release(@NotNull final String deviceIndex) {
        Intrinsics.checkNotNullParameter(deviceIndex, "deviceIndex");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setInputDevice(deviceIndex);
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setInputDevice$$inlined$post$default$2
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1011invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1011invoke() {
                    MediaEngine.this.getEngine().setInputDevice(deviceIndex);
                }
            });
        }
    }

    public final void setOutputDevice$media_engine_release(@NotNull final String deviceIndex) {
        Intrinsics.checkNotNullParameter(deviceIndex, "deviceIndex");
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setOutputDevice(deviceIndex);
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setOutputDevice$$inlined$post$default$2
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1017invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1017invoke() {
                    MediaEngine.this.getEngine().setOutputDevice(deviceIndex);
                }
            });
        }
    }

    public final void setVideoInputDevice$media_engine_release(final int deviceIndex) {
        AsyncInitDispatcher asyncInitDispatcher = this.dispatcher;
        asyncInitDispatcher.validateState();
        if (asyncInitDispatcher.getInitialized()) {
            getEngine().setVideoInputDeviceIndex(deviceIndex);
        } else {
            asyncInitDispatcher.getDelayedTasks().add(new Function0<Unit>() { // from class: com.discord.media.engine.MediaEngine$setVideoInputDevice$$inlined$post$default$2
                @Override // kotlin.jvm.functions.Function0
                public /* bridge */ /* synthetic */ Object invoke() {
                    m1021invoke();
                    return Unit.a;
                }

                /* renamed from: invoke, reason: collision with other method in class */
                public final void m1021invoke() {
                    MediaEngine.this.getEngine().setVideoInputDeviceIndex(deviceIndex);
                }
            });
        }
    }
}
